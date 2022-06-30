#include "course_data.h"
#include "Admin_Profile.h"
#include "add_student.h"
#include "login2.h"
#include "pendingrequests.h"
#include "student_data.h"
#include "ui_course_data.h"
#include "Admin.h"

Course_Data::Course_Data(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Course_Data)
{
    ui->setupUi(this);
    ui->leftMenu->hide();

    ui->name->hide();
    ui->Name->hide();
    ui->Hours->hide();
    ui->hours->hide();
    ui->MaxNum->hide();
    ui->maxnum->hide();
    ui->RequiredCourses->hide();
    ui->requiredcourses->hide();
    ui->Done->hide();
    ui->textEdit_14->hide();
    ui->scrollArea->hide();

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

    QIcon id("ID.jpg");
    ui->ID->addAction(id,QLineEdit::LeadingPosition);
    QIcon name("courses2.png");
    ui->Name->addAction(name,QLineEdit::LeadingPosition);
    QIcon maxnum("MaxNum.png");
    ui->MaxNum->addAction(maxnum,QLineEdit::LeadingPosition);
//    QIcon maxnum("MaxNum.png");
//    ui->MaxNum->addAction(maxnum,QLineEdit::LeadingPosition);

    db = QSqlDatabase::addDatabase("QSQLITE");

    db.setDatabaseName("ums.db");
    db.open();
//    ui->RequiredCourses->insertItem(0,"DS",QVariant(50));

}

void Course_Data::setAdmin(Admin admin){
    this->admin.login(admin.name, admin.password);
}

void Course_Data::handleCourses(){
    all_courses.clear();
    selected.clear();
    course_code.clear();
    for (Course &tmp: course.prerequired_courses){
        selected[QString::fromStdString(tmp.name)]=1;
    }
    QSqlQuery query;
    if (query.exec("select code, name from course;")){
        while (query.next()){
            all_courses.push_back(query.value(1).toString());
            if (!selected[query.value(1).toString()])
                ui->RequiredCourses->addItem(query.value(1).toString(),QVariant(counter));
            course_code[query.value(1).toString().toStdString()] = query.value(0).toInt();
            counter+=10;
        }
    }
}

Course_Data::~Course_Data()
{
    delete ui;
}


void Course_Data::onAddWidget(QString CourseName){
    QSqlQuery query2;
    if (!query2.exec("insert into prerequired_courses values("+ QString::fromStdString(to_string(this->course.code)) + ","+ QString::fromStdString(to_string(course_code[CourseName.toStdString()])) +");"))
        qDebug()<<query2.lastError();
    QVBoxLayout* layout = qobject_cast<QVBoxLayout*>(ui->scrollAreaWidgetContents_3->layout());
    courses.push_back(CourseName);
    QFrame* frame = new QFrame();
    frames.push_back(frame);
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
    R->setStyleSheet("QPushButton {color:rgb(255, 255, 255);border-radius:13px;font-size:14px;font-family:Segoe UI;border-image: url(close2.png);}");
    R->setFixedHeight(30);
    R->setFixedWidth(35);
    R->setCursor(QCursor(Qt::PointingHandCursor));

    mp[R] = CourseName;
    auto it = mp[R];
    auto &curr = this->courses;
    QObject::connect(R, &QPushButton::clicked, this, [ frame, it, &curr, this](){
        frame->hide();
        selected[it]=0;
        ui->RequiredCourses->addItem(it,QVariant(counter));
        counter+=10;
        auto tmp = std::find(curr.begin(),curr.end(),it);
        curr.erase(tmp);
        QSqlQuery query;
        if (!query.exec("delete from prerequired_courses where code = "+QString::fromStdString(to_string(this->course.code))+" and required_code = "+QString::fromStdString(to_string(course_code[it.toStdString()]))+";")){
                qDebug()<<query.lastError();
        }
    });

//    stringstream ss;
//    ss<<R;
//    string str_button;
//    ss>>str_button;
//    this->toRemove[str_button]=course.code;

//    buttons.push_back(R);



//    //insert line
//    QVBoxLayout* V = new QVBoxLayout(frame);
//    QFrame* line = new QFrame();
//    line->setFrameShape(QFrame::HLine);
//    line->setFrameShadow(QFrame::Sunken);
//    line->setStyleSheet("border-image: url(textfield.png);");


    QHBoxLayout* l = new QHBoxLayout(frame);
    l->addWidget(courseName);
    l->addWidget(R);

//    V->insertLayout(0,l);
//    V->addWidget(line);
    layout->insertLayout(0, l);

}

void Course_Data::on_pushButton_39_clicked()
{
    ui->leftMenu->hide();
    ui->widget_11->show();
}


void Course_Data::on_pushButton_45_clicked()
{
    if(ui->leftMenu->isHidden()){
        ui->leftMenu->show();
        ui->widget_11->hide();
    }
    else{
        ui->leftMenu->hide();
    }
}


void Course_Data::on_pushButton_40_clicked()
{
    AdminProfile AP;
    AP.setAdmin(this->admin);
    this->hide();
    AP.setModal(true);
    AP.exec();
}


void Course_Data::on_pushButton_41_clicked()
{
    Add_Student AS;
    AS.setAdmin(this->admin);
    this->hide();
    AS.setModal(true);
    AS.exec();
}


void Course_Data::on_pushButton_43_clicked()
{
    Student_Data SD;
    SD.setAdmin(this->admin);
    this->hide();
    SD.setModal(true);
    SD.exec();
}


void Course_Data::on_pushButton_42_clicked()
{
    Add_Course AC;
    AC.setAdmin(this->admin);
    this->hide();
    AC.setModal(true);
    AC.exec();
}


void Course_Data::on_pushButton_44_clicked()
{
    Login2 L;
    this->hide();
    L.setModal(true);
    L.exec();
}


void Course_Data::on_Edit_clicked()
{

    stringstream ss;
    int code;
    ss << ui->ID->text().toStdString();
    ss >> code;
    bool b;
    Course tmp(code, db, &b);
    this->course=tmp;
    if (b){
        ui->name->show();
        ui->Name->show();
        ui->Hours->show();
        ui->hours->show();
        ui->MaxNum->show();
        ui->maxnum->show();
        ui->RequiredCourses->show();
        ui->requiredcourses->show();
        ui->Done->show();
        ui->Edit->hide();
        ui->textEdit_14->show();
        ui->scrollArea->show();
        ui->Name->setEnabled(true);
        ui->Hours->setEnabled(true);
        ui->MaxNum->setEnabled(true);
        ui->RequiredCourses->setEnabled(true);
        selected[QString::fromStdString(this->course.name)]=1;
        ui->ID->setEnabled(false);
        ui->Name->setText(QString::fromStdString(course.name));
        ui->Hours->setText(QString::fromStdString(to_string(course.hours)));
        ui->MaxNum->setText(QString::fromStdString(to_string(course.maxNumOfStudents)));
        for (Course &tmp: course.prerequired_courses){
            courses.push_back(QString::fromStdString(tmp.name));
            this->onAddWidget(QString::fromStdString(tmp.name));
            selected[QString::fromStdString(tmp.name)]=1;
        }
        QSqlQuery query;
        if (query.exec("select code, name from course;")){
            while (query.next()){
                all_courses.push_back(query.value(1).toString());
                if (!selected[query.value(1).toString()])
                    ui->RequiredCourses->addItem(query.value(1).toString(),QVariant(counter));
                course_code[query.value(1).toString().toStdString()] = query.value(0).toInt();
                counter+=10;
            }
        }
    }
    else{
        QMessageBox::information(this,"Error", "No Course!");
        ui->ID->setText("");
    }
}


void Course_Data::on_pushButton_46_clicked()
{
    PendingRequests PR;
    PR.setAdmin(this->admin);
    this->hide();
    PR.setModal(true);
    PR.exec();
}


void Course_Data::on_Done_clicked()
{
    if (ui->Name->text().toStdString() != this->course.name){
        this->course.name = ui->Name->text().toStdString();
        QSqlQuery query;
        if (!query.exec("update course set name = '"+ui->Name->text()+"' where code ="+QString::fromStdString(to_string(this->course.code))+";"))
            qDebug() << query.lastError();
    }
    if (ui->Hours->text().toInt() != this->course.hours){
        QSqlQuery query;
        if (!query.exec("update course set hours = '"+ui->Hours->text()+"' where code ="+QString::fromStdString(to_string(this->course.code))+";"))
            qDebug() << query.lastError();
    }
    if (ui->MaxNum->text().toInt() != this->course.maxNumOfStudents){
        QSqlQuery query;
        if (!query.exec("update course set max_number = '"+ui->MaxNum->text()+"' where code ="+QString::fromStdString(to_string(this->course.code))+";"))
            qDebug() << query.lastError();
    }
    for (QFrame *frame: this->frames){
        frame->hide();
    }
    ui->Name->hide();
    ui->name->hide();
    ui->MaxNum->hide();
    ui->maxnum->hide();
    ui->Hours->hide();
    ui->hours->hide();
    ui->RequiredCourses->hide();
    ui->ID->setText("");
    ui->requiredcourses->hide();
    ui->ID->setEnabled(true);
    ui->scrollArea->hide();
    ui->textEdit_14->hide();
    ui->Done->hide();
    ui->Edit->show();
    while (ui->RequiredCourses->count()>0)
        ui->RequiredCourses->removeItem(0);
    counter=10;
}


void Course_Data::on_RequiredCourses_activated(int index)
{
    index = ui->RequiredCourses->currentIndex();
    QMessageBox::information(this,"Course Added", ui->RequiredCourses->itemText(index)+" added successfully");
    onAddWidget(ui->RequiredCourses->itemText(index));
    ui->RequiredCourses->removeItem(index);
    ui->RequiredCourses->setCurrentIndex(0);
}

