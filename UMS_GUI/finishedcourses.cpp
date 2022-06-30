#include "finishedcourses.h"
#include "ui_finishedcourses.h"
#include "Admin_Profile.h"
#include "Student.h"
#include "profile.h"
#include "currentcourses.h"
#include "courses.h"
#include "login2.h"

FinishedCourses::FinishedCourses(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FinishedCourses)
{
    ui->setupUi(this);
    ui->leftMenu->hide();
}

FinishedCourses::~FinishedCourses()
{
    delete ui;
}


void FinishedCourses::setStudent(Student student){
    this->student.login(student.id, student.password);
    for (Course &course: this->student.finished_courses){
        QVBoxLayout* layout = qobject_cast<QVBoxLayout*>(ui->scrollAreaWidgetContents->layout());

            QFrame* frame = new QFrame();
            frame->setStyleSheet("border-image: url(textfield.png);border-radius:15px;");
//            groupBox->setTitle("Data Structures");
            frame->setFixedHeight(200);
            layout->insertWidget(0, frame);


            //inserting main label
            QLabel* courseName = new QLabel();
            courseName->setText(QString::fromStdString(course.name));
            courseName->setStyleSheet("font-family:700 italic;font-size:25px;");
            //courseName->setFixedHeight(22);


            //inserting label
            QVBoxLayout* l = new QVBoxLayout(frame);
            QLabel* code = new QLabel();
            code->setText("Course Code : "+ QString::fromStdString(to_string(course.code)));
            code->setStyleSheet("font-size:17px;font-family:Segoe UI;margin-left:20px;");
           // code->setFixedHeight(13);


            //inserting label2
            QLabel* hours = new QLabel();
            hours->setText("Course hours : "+ QString::fromStdString(to_string(course.hours)));
            hours->setStyleSheet("font-size:17px;font-family:Segoe UI;margin-left:20px;");
           // hours->setFixedHeight(13);


            //inserting label3
            QLabel* maxNum = new QLabel();
            maxNum->setText("Course Maximum Number of Students : "+ QString::fromStdString(to_string(course.maxNumOfStudents)));
            maxNum->setStyleSheet("margin-left:20px;font-size:17px;font-family:Segoe UI;");
           // maxNum->setFixedHeight(13);




            l->addWidget(courseName);
            l->addWidget(code);
            l->addWidget(hours);
            l->addWidget(maxNum);
//            l->addWidget(R);
            layout->insertLayout(0, l);

            show();
    }
}




void FinishedCourses::on_pushButton_28_clicked()
{
    CurrentCourses CC;
    this->hide();
    CC.setStudent(this->student);
    CC.setModal(true);
    CC.exec();
}





void FinishedCourses::on_pushButton_29_clicked()
{
    courses C;
    this->hide();
    C.setStudent(this->student);
    C.setModal(true);
    C.exec();
}




void FinishedCourses::on_pushButton_31_clicked()
{
    Profile P;
    this->hide();
    P.setStudent(this->student);
    P.setModal(true);
    P.exec();
}





void FinishedCourses::on_pushButton_32_clicked()
{
    Login2 L;
    this->hide();
    L.setStudent(this->student);
    L.setModal(true);
    L.exec();
}

void FinishedCourses::on_pushButton_26_clicked()
{
    ui->leftMenu->hide();
    ui->widget_7->show();
}


void FinishedCourses::on_pushButton_25_clicked()
{
    if(ui->leftMenu->isHidden()){
        ui->leftMenu->show();
        ui->widget_7->hide();
    }
    else{
        ui->leftMenu->hide();
    }
}

