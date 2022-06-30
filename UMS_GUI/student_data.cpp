#include "student_data.h"
#include "Admin_Profile.h"
#include "add_student.h"
#include "course_data.h"
#include "login2.h"
#include "pendingrequests.h"
#include "ui_add_student.h"
#include "ui_student_data.h"

Student_Data::Student_Data(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Student_Data)
{
    ui->setupUi(this);

    ui->leftMenu->hide();

    ui->name->hide();
    ui->Name->hide();
    ui->Year->hide();
    ui->year->hide();
    ui->currrentcourses->hide();
    ui->CurrentCourses->hide();
    ui->finishedcourses->hide();
    ui->FinishedCourses->hide();
    ui->Password->hide();
    ui->password->hide();
    ui->Edit->hide();
    ui->Done->hide();
    ui->textEdit_17->hide();
    ui->textEdit_18->hide();
    ui->scrollArea_3->hide();
    ui->scrollArea_4->hide();

    ui->pushButton_40->setIcon(QIcon("profile.png"));
    ui->pushButton_40->setIconSize(QSize(30,30));
    ui->pushButton_41->setIcon(QIcon("addstudent.png"));
    ui->pushButton_41->setIconSize(QSize(20,20));
    ui->pushButton_42->setIcon(QIcon("register.png"));
    ui->pushButton_42->setIconSize(QSize(18,18));
    ui->pushButton_43->setIcon(QIcon("studentdata.png"));
    ui->pushButton_43->setIconSize(QSize(18,18));
    ui->pushButton_44->setIcon(QIcon("logout.png"));
    ui->pushButton_44->setIconSize(QSize(18,18));
    ui->pushButton_46->setIcon(QIcon("request.png"));
    ui->pushButton_46->setIconSize(QSize(18,18));
    ui->pushButton_47->setIcon(QIcon("courses.png"));
    ui->pushButton_47->setIconSize(QSize(18,18));

    QIcon name("usernameicon.png");
    ui->Name->addAction(name,QLineEdit::LeadingPosition);
    QIcon id("ID.jpg");
    ui->ID->addAction(id,QLineEdit::LeadingPosition);
    QIcon year("year.png");
    ui->Year->addAction(year,QLineEdit::LeadingPosition);
    QIcon pass("passwordicon1.png");
    ui->Password->addAction(pass,QLineEdit::LeadingPosition);
    db = QSqlDatabase::addDatabase("QSQLITE");

    db.setDatabaseName("ums.db");
    db.open();

    QSqlQuery query;
    long long counter2=100, index_counter=0;
    if (query.exec("select code, name from course;")){
        while (query.next()){
            combo_index[query.value(1).toString().toStdString()] = index_counter++;
            all_courses.push_back(query.value(1).toString());
//            ui->FinishedCourses->addItem(query.value(1).toString(),QVariant(counter2));
            course_code[query.value(1).toString().toStdString()] = query.value(0).toInt();
            CourseVariant[query.value(1).toString().toStdString()] = counter2;
            counter2+=100;
        }
    }
    this->currentCourses();
}

Student_Data::~Student_Data()
{
    delete ui;
}

void Student_Data::currentCourses(){
    while (ui->CurrentCourses->count()>0)
        ui->CurrentCourses->removeItem(0);
    while (ui->FinishedCourses->count()>0)
        ui->FinishedCourses->removeItem(0);
    vector <QString> st_finished;
    for (Course &course: student.finished_courses){
        st_finished.push_back(QString::fromStdString(course.name));
    }
    for (Course &course: student.inprogress_courses){
        st_finished.push_back(QString::fromStdString(course.name));
    }
    for (Course &course: student.pending_courses){
        st_finished.push_back(QString::fromStdString(course.name));
    }
    counter=100;
    for (QString &course: all_courses){
//        if (!selected[course]){
          if (std::find(st_finished.begin(), st_finished.end(), course) == st_finished.end()){
            ui->FinishedCourses->addItem(course,QVariant(counter));
            counter+=100;
        }
    }
    counter = 100;
    set <int> st = student.available_courses();
    for (auto it=st.begin(); it!=st.end(); it++){
        Course course(*it, this->db);
        ui->CurrentCourses->addItem(QString::fromStdString(course.name),QVariant(counter));
        CourseVariant[course.name] = counter;
        counter+=100;
    }
}

void Student_Data::onAddWidget(QString CourseName){
    student.addCurrentCourse(course_code[CourseName.toStdString()]);
    this->current.push_back(CourseName);
//    selected[CourseName]=1;
    QVBoxLayout* layout = qobject_cast<QVBoxLayout*>(ui->scrollAreaWidgetContents_3->layout());
    QFrame* frame = new QFrame();
    this->frames.push_back(frame);
    frame->setStyleSheet("border-image: url(white.png);");
    frame->setFixedHeight(50);
    layout->insertWidget(0, frame);

    //inserting main label
    QLabel* courseName = new QLabel();
    courseName->setText(CourseName);
    courseName->setStyleSheet("font-family:700 italic;font-size:22px;");
    courseName->setFixedHeight(23);

    //inserting button
    QPushButton* R = new QPushButton();
    R->setStyleSheet("QPushButton {color:rgb(255, 255, 255);border-radius:13px;font-size:14px;font-family:Segoe UI;border-image: url(close2.png);}");
    R->setFixedHeight(30);
    R->setFixedWidth(35);
    R->setCursor(QCursor(Qt::PointingHandCursor));

    mp[R] = CourseName;
    auto it = mp[R];
    auto it2 = CourseVariant[mp[R].toStdString()];
    auto u = ui;
    auto &curr = current;
    vector <QString>::iterator it3 = index[mp[R]];
    QObject::connect(R, &QPushButton::clicked, this, [ frame, u, it, it2, &curr, this](){
        frame->hide();
        student.removeCurrentCourse(course_code[it.toStdString()]);
        u->FinishedCourses->addItem(it,QVariant(it2));
        u->CurrentCourses->addItem(it,QVariant(it2));
        auto tmp = std::find(curr.begin(),curr.end(),it);
        curr.erase(tmp);
        currentCourses();
    });


    QHBoxLayout* l = new QHBoxLayout(frame);
    l->addWidget(courseName);
    l->addWidget(R);
    layout->insertLayout(0, l);

}


void Student_Data::onAddFinishedCourse(QString CourseName){
//    selected[CourseName]=1;
    this->finished.push_back(CourseName);
    student.addFinishedCourse(course_code[CourseName.toStdString()]);
    QVBoxLayout* layout = qobject_cast<QVBoxLayout*>(ui->scrollAreaWidgetContents_4->layout());
    QFrame* frame = new QFrame();
    this->frames.push_back(frame);
    frame->setStyleSheet("border-image: url(white.png);");
    frame->setFixedHeight(50);
    layout->insertWidget(0, frame);

    //inserting main label
    QLabel* courseName = new QLabel();
    courseName->setText(CourseName);
    courseName->setStyleSheet("font-family:700 italic;font-size:22px;");
    courseName->setFixedHeight(23);

    //inserting button
    QPushButton* R = new QPushButton();
    R->setStyleSheet("QPushButton {color:rgb(255, 255, 255);border-radius:13px;font-size:14px;font-family:Segoe UI;border-image: url(close2.png);}");
    R->setFixedHeight(30);
    R->setFixedWidth(35);
    R->setCursor(QCursor(Qt::PointingHandCursor));

    mp[R] = CourseName;
    auto it = mp[R];
    auto it2 = CourseVariant[mp[R].toStdString()];
    auto u = ui;
    auto &curr = this->finished;
    vector <QString>::iterator it3 = index[mp[R]];
    QObject::connect(R, &QPushButton::clicked, this, [frame, u, it, it2, &curr, this](){
        frame->hide();
        student.removeFinishedCourse(course_code[it.toStdString()]);
        u->FinishedCourses->addItem(it,QVariant(it2));
        u->CurrentCourses->addItem(it,QVariant(it2));
        auto tmp = std::find(curr.begin(),curr.end(),it);
        curr.erase(tmp);
        currentCourses();
    });

    QHBoxLayout* l = new QHBoxLayout(frame);
    l->addWidget(courseName);
    l->addWidget(R);
    layout->insertLayout(0, l);

}

void Student_Data::on_addCourse_clicked()
{
    ui->name->show();
    ui->Name->show();
    ui->Year->show();
    ui->year->show();
    ui->currrentcourses->show();
    ui->CurrentCourses->show();
    ui->finishedcourses->show();
    ui->FinishedCourses->show();
    ui->Password->show();
    ui->password->show();
}


void Student_Data::on_pushButton_39_clicked()
{
    ui->leftMenu->hide();
    ui->widget_11->show();
}


void Student_Data::on_pushButton_45_clicked()
{
    if(ui->leftMenu->isHidden()){
        ui->leftMenu->show();
        ui->widget_11->hide();
    }
    else{
        ui->leftMenu->hide();
    }
}


void Student_Data::on_pushButton_40_clicked()
{
    AdminProfile AP;
    AP.setAdmin(this->admin);
    this->hide();
    AP.setModal(true);
    AP.exec();
}


void Student_Data::on_pushButton_41_clicked()
{
    Add_Student AS;
    AS.setAdmin(this->admin);
    this->hide();
    AS.setModal(true);
    AS.exec();
}


void Student_Data::on_pushButton_42_clicked()
{
    Add_Course AC;
    AC.setAdmin(this->admin);
    this->hide();
    AC.setModal(true);
    AC.exec();
}


void Student_Data::on_pushButton_44_clicked()
{
    Login2 L;
    this->hide();
    L.setModal(true);
    L.exec();
}


void Student_Data::on_pushButton_47_clicked()
{
    Course_Data CD;
    CD.setAdmin(this->admin);
    this->hide();
    CD.setModal(true);
    CD.exec();
}


void Student_Data::on_pushButton_46_clicked()
{
    PendingRequests PR;
    PR.setAdmin(this->admin);
    this->hide();
    PR.setModal(true);
    PR.exec();
}


void Student_Data::on_Show_clicked()
{    
    if(ui->ID->text() == ""){
        QMessageBox::information(this,"Error", "Please Enter Student ID");
    }
    else{


        stringstream ss;
        unsigned long long s;
        ss << ui->ID->text().toStdString();
        ss >> s;
        if (student.admin_login(s)){
            ui->Show->hide();
            ui->Edit->show();
            ui->name->show();
            ui->Name->show();
            ui->Year->show();
            ui->year->show();
            ui->currrentcourses->show();
            ui->CurrentCourses->show();
            ui->finishedcourses->show();
            ui->FinishedCourses->show();
            ui->Password->show();
            ui->password->show();
            ui->Name->setText(QString::fromStdString(student.name));
            QString Qstr_year;
            qDebug()<<student.academic_year;
            if (student.academic_year == 2)
                Qstr_year = "Second Grade";
            else if (student.academic_year == 1)
                Qstr_year = "First Grade";
            else if (student.academic_year == 3)
                Qstr_year = "Third Grade";
            else
                Qstr_year = "Fourth Grade";
            ui->Year->setText(Qstr_year);
            ui->Password->setText(QString::fromStdString(student.password));
            for (Course &course:student.finished_courses){
                ui->FinishedCourses->removeItem(combo_index[course.name]);
                ui->CurrentCourses->clearEditText();
                QString CourseName = QString::fromStdString(course.name);
//                selected[CourseName]=1;
                this->finished.push_back(CourseName);
//                student.addFinishedCourse(course_code[CourseName.toStdString()]);
                QVBoxLayout* layout = qobject_cast<QVBoxLayout*>(ui->scrollAreaWidgetContents_4->layout());
                QFrame* frame = new QFrame();
                this->frames.push_back(frame);
                frame->setStyleSheet("border-image: url(white.png);");
                frame->setFixedHeight(50);
                layout->insertWidget(0, frame);

                //inserting main label
                QLabel* courseName = new QLabel();
                courseName->setText(CourseName);
                courseName->setStyleSheet("font-family:700 italic;font-size:22px;");
                courseName->setFixedHeight(23);

                //inserting button
                QPushButton* R = new QPushButton();
                R->setStyleSheet("QPushButton {color:rgb(255, 255, 255);border-radius:13px;font-size:14px;font-family:Segoe UI;border-image: url(close2.png);}");
                R->setFixedHeight(30);
                R->setFixedWidth(35);
                R->setCursor(QCursor(Qt::PointingHandCursor));

                mp[R] = CourseName;
                auto it = mp[R];
                auto it2 = CourseVariant[mp[R].toStdString()];
                auto u = ui;
                auto &curr = this->finished;
                vector <QString>::iterator it3 = index[mp[R]];
                QObject::connect(R, &QPushButton::clicked, this, [ frame, u, it, it2, &curr, this](){
                    frame->hide();
//                    selected[CourseName]=0;
                    student.removeFinishedCourse(course_code[it.toStdString()]);
                    u->FinishedCourses->addItem(it,QVariant(it2));
                    u->CurrentCourses->addItem(it,QVariant(it2));
                    auto tmp = std::find(curr.begin(),curr.end(),it);
                    curr.erase(tmp);
                    currentCourses();
                });

                QHBoxLayout* l = new QHBoxLayout(frame);
                l->addWidget(courseName);
                l->addWidget(R);
                layout->insertLayout(0, l);
            }

            for (Course &course:student.inprogress_courses){
                QString CourseName = QString::fromStdString(course.name);
//                selected[CourseName]=1;
                this->current.push_back(CourseName);
                QVBoxLayout* layout = qobject_cast<QVBoxLayout*>(ui->scrollAreaWidgetContents_3->layout());
                QFrame* frame = new QFrame();
                this->frames.push_back(frame);
                frame->setStyleSheet("border-image: url(white.png);");
                frame->setFixedHeight(50);
                layout->insertWidget(0, frame);

                //inserting main label
                QLabel* courseName = new QLabel();
                courseName->setText(CourseName);
                courseName->setStyleSheet("font-family:700 italic;font-size:22px;");
                courseName->setFixedHeight(23);

                //inserting button
                QPushButton* R = new QPushButton();
                R->setStyleSheet("QPushButton {color:rgb(255, 255, 255);border-radius:13px;font-size:14px;font-family:Segoe UI;border-image: url(close2.png);}");
                R->setFixedHeight(30);
                R->setFixedWidth(35);
                R->setCursor(QCursor(Qt::PointingHandCursor));

                mp[R] = CourseName;
                auto it = mp[R];
                auto it2 = CourseVariant[mp[R].toStdString()];
                auto u = ui;
                auto &curr = current;
                vector <QString>::iterator it3 = index[mp[R]];
                QObject::connect(R, &QPushButton::clicked, this, [ frame, u, it, it2, &curr, this](){
                    frame->hide();
                    student.removeCurrentCourse(course_code[it.toStdString()]);
                    u->FinishedCourses->addItem(it,QVariant(it2));
                    u->CurrentCourses->addItem(it,QVariant(it2));
                    auto tmp = std::find(curr.begin(),curr.end(),it);
                    curr.erase(tmp);
                    currentCourses();
                });


                QHBoxLayout* l = new QHBoxLayout(frame);
                l->addWidget(courseName);
                l->addWidget(R);
                layout->insertLayout(0, l);
            }
//            for (Course &course:student.pending_courses)
//                selected[QString::fromStdString(course.name)]=1;
            this->currentCourses();
        }
        else{
            QMessageBox::information(this,"Error", "Wrong Student ID");
            ui->ID->setText("");
        }
    }
}


void Student_Data::on_Edit_clicked()
{
    ui->Edit->hide();
    ui->Done->show();
    ui->ID->setEnabled(false);
    ui->Name->setEnabled(true);
    ui->Year->setEnabled(true);
    ui->CurrentCourses->setEnabled(true);
    ui->FinishedCourses->setEnabled(true);
    ui->Password->setEnabled(true);
    ui->textEdit_17->show();
    ui->textEdit_18->show();
    ui->scrollArea_3->show();
    ui->scrollArea_4->show();
}


void Student_Data::on_Done_clicked()
{
    ui->Done->hide();
    ui->Show->show();
    ui->name->hide();
    ui->Name->hide();
    ui->Year->hide();
    ui->year->hide();
    ui->currrentcourses->hide();
    ui->CurrentCourses->hide();
    ui->finishedcourses->hide();
    ui->FinishedCourses->hide();
    ui->Password->hide();
    ui->password->hide();
    ui->ID->setEnabled(true);
    ui->Name->setEnabled(false);
    ui->Year->setEnabled(false);
    ui->CurrentCourses->setEnabled(false);
    ui->FinishedCourses->setEnabled(false);
    ui->Password->setEnabled(false);
    ui->textEdit_17->hide();
    ui->textEdit_18->hide();
    ui->scrollArea_3->hide();
    ui->scrollArea_4->hide();
    student.Edit_password(ui->Password->text().toStdString());
    ui->ID->setText("");
    for (int i=0 ; i<frames.size(); i++){
        qDebug()<< frames[i];
        frames[i]->hide();
    }
    frames.clear();
    this->student.login(-1,"1");
    student.reset();
    Student_Data();
}





void Student_Data::on_CurrentCourses_activated(int index)
{
    index = ui->CurrentCourses->currentIndex();
    QMessageBox::information(this,"Course Added", ui->CurrentCourses->itemText(index)+" added successfully");
    onAddWidget(ui->CurrentCourses->itemText(index));
    ui->CurrentCourses->removeItem(index);
    ui->CurrentCourses->setCurrentIndex(0);
    currentCourses();
}


void Student_Data::on_FinishedCourses_activated(int index)
{
    index = ui->FinishedCourses->currentIndex();
    QMessageBox::information(this,"Course Added", ui->FinishedCourses->itemText(index)+" added successfully");
    onAddFinishedCourse(ui->FinishedCourses->itemText(index));
    ui->FinishedCourses->removeItem(index);
    ui->FinishedCourses->setCurrentIndex(0);
    currentCourses();
}

void Student_Data::setAdmin(Admin admin){
    this->admin.login(admin.name, admin.password);
}

