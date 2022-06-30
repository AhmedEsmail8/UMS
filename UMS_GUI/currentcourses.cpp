#include "currentcourses.h"
#include "ui_currentcourses.h"
#include "Admin_Profile.h"
#include "courses.h"
#include "Add_Course.h"
#include "profile.h"
#include "login2.h"
#include "finishedcourses.h"

CurrentCourses::CurrentCourses(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CurrentCourses)
{
    ui->setupUi(this);
    ui->leftMenu->hide();
}

CurrentCourses::~CurrentCourses()
{
    delete ui;
}

void CurrentCourses::on_pushButton_26_clicked()
{
    ui->leftMenu->hide();
    ui->widget_7->show();
}


void CurrentCourses::on_pushButton_25_clicked()
{
    if(ui->leftMenu->isHidden()){
        ui->leftMenu->show();
        ui->widget_7->hide();
    }
    else{
        ui->leftMenu->hide();
    }
}


//void CurrentCourses::on_pushButton_27_clicked()
//{
//    studentHome SH;
//    this->hide();
//    SH.setStudent(this->student);
//    SH.setModal(true);
//    SH.exec();
//}


void CurrentCourses::on_pushButton_29_clicked()
{
    courses C;
    this->hide();
    C.setStudent(this->student);
    C.setModal(true);
    C.exec();
}


void CurrentCourses::on_pushButton_30_clicked()
{
    FinishedCourses FC;
    this->hide();
    FC.setStudent(this->student);
    FC.setModal(true);
    FC.exec();
}


void CurrentCourses::on_pushButton_31_clicked()
{
    Profile P;
    P.setStudent(this->student);
    this->hide();
    P.setModal(true);
    P.exec();
}


void CurrentCourses::on_pushButton_32_clicked()
{
    Login2 L;
    this->hide();
    L.setModal(true);
    L.exec();
}


void CurrentCourses::setStudent(Student student){
    this->student.login(student.id, student.password);
    for (Course &course: this->student.inprogress_courses){
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
            //courseName->setFixedHeight(29);


            //inserting label
            QVBoxLayout* l = new QVBoxLayout(frame);
            QLabel* code = new QLabel();
            code->setText("Course Code : "+ QString::fromStdString(to_string(course.code)));
            code->setStyleSheet("font-size:17px;font-family:Segoe UI;margin-left:20px;");
            //code->setFixedHeight(13);


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


            //inserting button
//            QPushButton* R = new QPushButton();
//            R->setText("Register");
//            R->setStyleSheet("QPushButton {/*margin-left:50;*/color:rgb(255, 255, 255);font-size:17px;font-family:Segoe UI;border-image: url(buttom.png);border-radius:20px;} QPushButton:hover{color:rgb(0, 0, 0);border-image: url(menu.png);}");
//            R->setFixedHeight(40);
//            R->setFixedWidth(120);
//            R->setCursor(QCursor(Qt::PointingHandCursor));


            l->addWidget(courseName);
            l->addWidget(code);
            l->addWidget(hours);
            l->addWidget(maxNum);
//            l->addWidget(R);
            layout->insertLayout(0, l);


        //    QObject::connect(
        //                removeCourse, &QPushButton::clicked,
        //                this, &courses::onRemoveWidget);
            show();
    }
}
