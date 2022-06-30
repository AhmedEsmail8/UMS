#include "add_student.h"
#include "Admin_Profile.h"
#include "course_data.h"
#include "login2.h"
#include "pendingrequests.h"
#include "student_data.h"
#include "ui_add_student.h"
#include "Admin.h"

Add_Student::Add_Student(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Add_Student)
{
    ui->setupUi(this);
    ui->leftMenu->hide();
    db = QSqlDatabase::addDatabase("QSQLITE");

    db.setDatabaseName("ums.db");
    db.open();

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

    QSqlQuery query;
    long long counter2=100;
    if (query.exec("select code, name from course;")){
        while (query.next()){
            ui->FinisheCourses->addItem(query.value(1).toString(),QVariant(counter2));
            course_code[query.value(1).toString().toStdString()] = query.value(0).toInt();
            CourseVariant[query.value(1).toString().toStdString()] = counter2;
            counter2+=100;
        }
    }
    this->currentCourses();
}

Add_Student::~Add_Student()
{
    delete ui;
}

void Add_Student::setAdmin(Admin admin){
    this->admin.login(admin.name, admin.password);
}

void Add_Student::currentCourses(){
    tmp.finished_courses.clear();
    tmp.inprogress_courses.clear();
    for (QString &course:this->finished){
        Course tmp_course(course_code[course.toStdString()], this->db);
        qDebug() << QString::fromStdString(tmp_course.name);
        tmp.finished_courses.push_back(tmp_course);
    }
    for (QString &course:this->current){
        Course tmp_course(course_code[course.toStdString()], this->db);
        tmp.inprogress_courses.push_back(tmp_course);
    }
    while (ui->CurrentCourses->count()>0)
        ui->CurrentCourses->removeItem(0);
    counter = 100;
    set <int> st = tmp.available_courses();
    for (auto it=st.begin(); it!=st.end(); it++){
        Course course(*it, this->db);
        ui->CurrentCourses->addItem(QString::fromStdString(course.name),QVariant(counter));
        CourseVariant[course.name] = counter;
        counter+=100;
    }
}

void Add_Student::onAddWidget(QString CourseName){
    this->current.push_back(CourseName);
    index[CourseName] = current.end()-1;
    qDebug() << "Current";
    for (QString &k:current)
        qDebug() << k;
    QVBoxLayout* layout = qobject_cast<QVBoxLayout*>(ui->scrollAreaWidgetContents->layout());
    QFrame* frame = new QFrame();
    frame->setStyleSheet("border-image: url(white.png);");
    frame->setFixedHeight(50);
//    frame->setFixedWidth(250);
    layout->insertWidget(0, frame);

    //inserting main label
    QLabel* courseName = new QLabel();
    courseName->setText(CourseName);
    courseName->setStyleSheet("font-family:700 italic;font-size:22px;");
    courseName->setFixedHeight(23);

    //inserting button
    QPushButton* R = new QPushButton();
    buttons.push_back(R);
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
    QObject::connect(R, &QPushButton::clicked, this, [frame, u, it, it2, &curr, this](){
        frame->hide();
        u->FinisheCourses->addItem(it,QVariant(it2));
        u->CurrentCourses->addItem(it,QVariant(it2));
        auto tmp = std::find(curr.begin(),curr.end(),it);
        curr.erase(tmp);
        currentCourses();
    });



    QHBoxLayout* l = new QHBoxLayout(frame);
    l->addWidget(courseName);
    l->addWidget(R);

//    V->insertLayout(0,l);
//    V->addWidget(line);
    layout->insertLayout(0, l);

}



void Add_Student::onAddFinishedCourse(QString CourseN){
    qDebug() << ui->CurrentCourses->count();
    this->finished.push_back(CourseN);
//    index[CourseN]=finished.size()-1;
    qDebug() << "finished";
    for (QString &k:finished)
        qDebug() << k;
    QVBoxLayout* layout = qobject_cast<QVBoxLayout*>(ui->scrollAreaWidgetContents_2->layout());
    QFrame* frame = new QFrame();
    frame->setStyleSheet("border-image: url(white.png);");
    frame->setFixedHeight(50);
//    frame->setFixedWidth(250);
    layout->insertWidget(0, frame);

    //inserting main label
    QLabel* courseName = new QLabel();
    courseName->setText(CourseN);
    courseName->setStyleSheet("font-family:700 italic;font-size:22px;");
    courseName->setFixedHeight(23);

    //inserting button
    QPushButton* R = new QPushButton();
    buttons.push_back(R);
    R->setStyleSheet("QPushButton {color:rgb(255, 255, 255);border-radius:13px;font-size:14px;font-family:Segoe UI;border-image: url(close2.png);}");
    R->setFixedHeight(30);
    R->setFixedWidth(35);
    R->setCursor(QCursor(Qt::PointingHandCursor));

    mp[R] = CourseN;
    auto it = mp[R];
    auto it2 = CourseVariant[mp[R].toStdString()];
    auto u = ui;
    auto &curr = this->finished;
    vector <QString>::iterator it3 = index[mp[R]];
    QObject::connect(R, &QPushButton::clicked, this, [frame, u, it, it2, &curr, this](){
        frame->hide();
        u->FinisheCourses->addItem(it,QVariant(it2));
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


void Add_Student::on_pushButton_39_clicked()
{
    ui->leftMenu->hide();
    ui->widget_11->show();
}


void Add_Student::on_pushButton_45_clicked()
{
    if(ui->leftMenu->isHidden()){
        ui->leftMenu->show();
        ui->widget_11->hide();
    }
    else{
        ui->leftMenu->hide();
    }
}


void Add_Student::on_pushButton_40_clicked()
{
    AdminProfile AP;
    AP.setAdmin(this->admin);
    this->hide();
    AP.setModal(true);
    AP.exec();
}


void Add_Student::on_pushButton_42_clicked()
{
    Add_Course AC;
    AC.setAdmin(this->admin);
    this->hide();
    AC.setModal(true);
    AC.exec();
}


void Add_Student::on_pushButton_43_clicked()
{
    Student_Data SD;
    SD.setAdmin(this->admin);
    this->hide();
    SD.setModal(true);
    SD.exec();
}


void Add_Student::on_pushButton_44_clicked()
{
    Login2 L;
    this->hide();
    L.setModal(true);
    L.exec();
}


void Add_Student::on_pushButton_47_clicked()
{
    Course_Data CD;
    CD.setAdmin(this->admin);
    this->hide();
    CD.setModal(true);
    CD.exec();
}


void Add_Student::on_pushButton_46_clicked()
{
    PendingRequests PR;
    PR.setAdmin(this->admin);
    this->hide();
    PR.setModal(true);
    PR.exec();
}


void Add_Student::on_CurrentCourses_activated(int index)
{
    index = ui->CurrentCourses->currentIndex();
    QMessageBox::information(this,"Course Added", ui->CurrentCourses->itemText(index)+" added successfully");
    onAddWidget(ui->CurrentCourses->itemText(index));
    ui->CurrentCourses->removeItem(index);
    ui->CurrentCourses->setCurrentIndex(0);
    currentCourses();
}


void Add_Student::on_FinisheCourses_activated(int index)
{
    index = ui->FinisheCourses->currentIndex();
    QMessageBox::information(this,"Course Added", ui->FinisheCourses->itemText(index)+" added successfully");
    onAddFinishedCourse(ui->FinisheCourses->itemText(index));
    ui->FinisheCourses->removeItem(index);
    ui->FinisheCourses->setCurrentIndex(0);
    currentCourses();
}


void Add_Student::on_addCourse_clicked()
{
    student.name = ui->Name->text().toStdString();
    student.id = ui->ID->text().toULongLong();
    student.password = ui->Password->text().toStdString();
    student.academic_year = ui->Year->text().toInt();
    for(QString &k:this->current){
        Course course(course_code[k.toStdString()], this->db);
        student.inprogress_courses.push_back(course);
        qDebug() << k<<'\n';
    }
    qDebug() << "-------------";
    for(QString &k:this->finished){
        Course course(course_code[k.toStdString()], this->db);
        student.finished_courses.push_back(course);
        qDebug() << k << '\n';
    }
    if (ui->Name->text().toStdString() == "" || ui->ID->text() == "" || ui->Password->text() == "" || ui->Year->text() == "") {
        QMessageBox::information(this, "Error", "Please enter valid data");
    }
    else {
        admin.add_student(student);
        ui->Name->setText("");
        ui->ID->setText("");
        ui->Password->setText("");
        ui->Year->setText("");
        for (int i = 0; i < buttons.size(); i++)
            buttons[i]->click();
        this->current.clear();
        this->finished.clear();
        
        buttons.clear();
        this->currentCourses();
        QMessageBox::information(this, "Done", "Student added successfully");
    }
}

