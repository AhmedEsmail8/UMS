#include "courses.h"
#include "qgroupbox.h"
#include "qlabel.h"
#include "ui_courses.h"
#include "Add_Course.h"
#include "finishedcourses.h"
#include "Admin_Profile.h"
#include "currentcourses.h"
#include "finishedcourses.h"
#include "profile.h"
#include "login2.h"

#include <vector>

courses::courses(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::courses)
{
    ui->setupUi(this);
    ui->leftMenu->hide();

    ui->pushButton_28->setIcon(QIcon("courses.png"));
    ui->pushButton_28->setIconSize(QSize(18,18));
    ui->pushButton_29->setIcon(QIcon("register.png"));
    ui->pushButton_29->setIconSize(QSize(18,18));
    ui->pushButton_30->setIcon(QIcon("finishedcourses.png"));
    ui->pushButton_30->setIconSize(QSize(20,20));
    ui->pushButton_31->setIcon(QIcon("profile.png"));
    ui->pushButton_31->setIconSize(QSize(30,30));
    ui->pushButton_32->setIcon(QIcon("logout.png"));
    ui->pushButton_32->setIconSize(QSize(18,18));

}

courses::~courses()
{
    delete ui;
}



void courses::on_pushButton_25_clicked()
{
    if(ui->leftMenu->isHidden()){
        ui->leftMenu->show();
        ui->widget_7->hide();
    }
    else{
        ui->leftMenu->hide();
    }
}


void courses::on_pushButton_26_clicked()
{
    ui->leftMenu->hide();
    ui->widget_7->show();
}

void courses::setStudent(Student student){
    this->student.login(student.id, student.password);
    for (Course &course: this->student.available_coursesVec){
        QVBoxLayout* layout = qobject_cast<QVBoxLayout*>(ui->scrollAreaWidgetContents->layout());

            QFrame* frame = new QFrame();
            frame->setStyleSheet("border-image: url(textfield.png);border-radius:15px;");
            frame->setFixedHeight(250);
            layout->insertWidget(0, frame);

            QVBoxLayout* l = new QVBoxLayout(frame);

            //inserting main label
            QLabel* courseName = new QLabel();
            courseName->setText(QString::fromStdString(course.name));
            courseName->setStyleSheet("font-family:700 italic;font-size:25px;");
            //courseName->setFixedHeight(30);


            //inserting label
            QLabel* code = new QLabel();
            code->setText("Course Code : "+ QString::fromStdString(to_string(course.code)));
            code->setStyleSheet("font-size:17px;font-family:Segoe UI;margin-left:20px;");
           // code->setFixedHeight(13);


            //inserting label2
            hours = new QLabel();
            hours->setText("Course hours : "+ QString::fromStdString(to_string(course.hours)));
            hours->setStyleSheet("font-size:17px;font-family:Segoe UI;margin-left:20px;");
           // hours->setFixedHeight(13);


            //inserting label3
            maxNum = new QLabel();
            maxNum->setText("Course Maximum Number of Students : "+ QString::fromStdString(to_string(course.maxNumOfStudents)));
            maxNum->setStyleSheet("margin-left:20px;font-size:17px;font-family:Segoe UI;");
            //maxNum->setFixedHeight(13);


            //inserting button
            QHBoxLayout* l2 = new QHBoxLayout(frame);
            R = new QPushButton();
            R->setText("Register");
            R->setStyleSheet("QPushButton {/*margin-left:50;*/color:rgb(255, 255, 255);font-size:17px;font-family:Segoe UI;border-image: url(22.png);border-radius:20px;} QPushButton:hover{border-image: url(buttom.png);}");
            R->setFixedHeight(40);
            R->setFixedWidth(120);
            R->setCursor(QCursor(Qt::PointingHandCursor));
            stringstream ss;
            ss<<R;
            string str_button;
            ss>>str_button;
            this->toReg[str_button]=course.code;

            buttons.push_back(R);

            l2->addWidget(R);


            l->addWidget(courseName);
            l->addWidget(code);
            l->addWidget(hours);
            l->addWidget(maxNum);
            l->insertLayout(4,l2);
            layout->insertLayout(0, l);
            show();
    }
    for (int i=0 ; i<buttons.size(); i++){
        stringstream ss;
        ss<<buttons[i];
        string str_button;
        ss>>str_button;
        auto C = toReg[str_button];
        auto c2 = buttons[i];
        QObject::connect(buttons[i], &QPushButton::clicked, this, [C, &student, c2](){student.register_course(C); c2->hide();});
    }
    for (Course &course: this->student.pending_courses){
        QVBoxLayout* layout = qobject_cast<QVBoxLayout*>(ui->scrollAreaWidgetContents->layout());

            QFrame* frame = new QFrame();
            frame->setStyleSheet("border-image: url(textfield.png);border-radius:15px;");
            frame->setFixedHeight(200);
            layout->insertWidget(0, frame);


            //inserting main label
            QLabel* courseName = new QLabel();
            courseName->setText(QString::fromStdString(course.name));
            courseName->setStyleSheet("font-family:700 italic;font-size:25px;");
            courseName->setFixedHeight(30);


            //inserting label
            l = new QVBoxLayout(frame);
            QLabel* code = new QLabel();
            code->setText("Course Code : "+ QString::fromStdString(to_string(course.code)));
            code->setStyleSheet("font-size:17px;font-family:Segoe UI;margin-left:20px;");
            code->setFixedHeight(13);


            //inserting label2
            hours = new QLabel();
            hours->setText("Course hours : "+ QString::fromStdString(to_string(course.hours)));
            hours->setStyleSheet("font-size:17px;font-family:Segoe UI;margin-left:20px;");
            hours->setFixedHeight(13);


            //inserting label3
            maxNum = new QLabel();
            maxNum->setText("Course Maximum Number of Students : "+ QString::fromStdString(to_string(course.maxNumOfStudents)));
            maxNum->setStyleSheet("margin-left:20px;font-size:17px;font-family:Segoe UI;");
            maxNum->setFixedHeight(13);


            l->addWidget(courseName);
            l->addWidget(code);
            l->addWidget(hours);
            l->addWidget(maxNum);
            layout->insertLayout(0, l);
            show();
    }

}



void courses::on_pushButton_28_clicked()
{
    CurrentCourses CC;
    CC.setStudent(this->student);
    this->hide();
    CC.setModal(true);
    CC.exec();
}


void courses::on_pushButton_30_clicked()
{
    FinishedCourses FC;
    this->hide();
    FC.setStudent(this->student);
    FC.setModal(true);
    FC.exec();
}


void courses::on_pushButton_31_clicked()
{
    Profile P;
    this->hide();
    P.setStudent(this->student);
    P.setModal(true);
    P.exec();
}


void courses::on_pushButton_32_clicked()
{
    Login2 L;
    this->hide();
    L.setModal(true);
    L.exec();
}

