#include "pendingrequests.h"
#include "Admin_Profile.h"
#include "add_student.h"
#include "course_data.h"
#include "login2.h"
#include "qtextedit.h"
#include "student_data.h"
#include "ui_pendingrequests.h"

PendingRequests::PendingRequests(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PendingRequests)
{
    ui->setupUi(this);
    ui->leftMenu->hide();

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
    db = QSqlDatabase::addDatabase("QSQLITE");

    db.setDatabaseName("ums.db");
    db.open();

    add_course();

}

PendingRequests::~PendingRequests()
{
    delete ui;
}

void PendingRequests::add_course(){
    QSqlQuery query10;
    if (query10.exec("select * from pending_courses;")){
        while (query10.next()){
            Student student(this->db);
            student.admin_login(query10.value(0).toULongLong());
            Course course(query10.value(1).toInt(), db);

            QVBoxLayout* layout = qobject_cast<QVBoxLayout*>(ui->scrollAreaWidgetContents_3->layout());

            QFrame* frame = new QFrame();
            frame->setStyleSheet("border-image: url(textfield.png);border-radius:15px;");
            frame->setFixedHeight(230);
            layout->insertWidget(0, frame);

            QVBoxLayout* l = new QVBoxLayout(frame);

            //inserting Name labels
            QHBoxLayout* l3 = new QHBoxLayout(frame);
            QLabel* StudentName = new QLabel();
            StudentName->setText("Student Name");
            StudentName->setStyleSheet("font-family:700 italic;font-size:25px;");
            StudentName->setFixedHeight(28);
            StudentName->setFixedWidth(350);

            QLabel* Name = new QLabel();
            Name->setText(QString::fromStdString(student.name));
            Name->setStyleSheet("font-family:700 italic;font-size:25px;");
            Name->setFixedHeight(28);
    //        Name->setFixedWidth(240);

            l3->addWidget(StudentName);
            l3->addWidget(Name);


            //inserting ID labels
            QHBoxLayout* l4 = new QHBoxLayout(frame);
            QLabel* StudentID = new QLabel();
            StudentID->setText("Student ID");
            StudentID->setStyleSheet("font-family:700 italic;font-size:25px;");
            StudentID->setFixedHeight(28);
            StudentID->setFixedWidth(350);

            QLabel* ID = new QLabel();
            ID->setText(QString::fromStdString(to_string(student.id)));
            ID->setStyleSheet("font-family:700 italic;font-size:25px;");
            ID->setFixedHeight(28);
    //        ID->setFixedWidth(240);

            l4->addWidget(StudentID);
            l4->addWidget(ID);


            //inserting Course Name labels
            QHBoxLayout* l5 = new QHBoxLayout(frame);
            QLabel* CourseName = new QLabel();
            CourseName->setText("Requested Course Name");
            CourseName->setStyleSheet("font-family:700 italic;font-size:25px;");
            CourseName->setFixedHeight(28);
            CourseName->setFixedWidth(350);

            QLabel* CName = new QLabel();
            CName->setText(QString::fromStdString(course.name));
            CName->setStyleSheet("font-family:700 italic;font-size:25px;");
            CName->setFixedHeight(28);
    //        CName->setFixedWidth(240);

            l5->addWidget(CourseName);
            l5->addWidget(CName);


            //inserting Course Code labels
            QHBoxLayout* l6 = new QHBoxLayout(frame);
            QLabel* CourseCode = new QLabel();
            CourseCode->setText("Course Code");
            CourseCode->setStyleSheet("font-family:700 italic;font-size:25px;");
            CourseCode->setFixedHeight(28);
            CourseCode->setFixedWidth(350);

            QLabel* CCode = new QLabel();
            CCode->setText(QString::fromStdString(to_string(course.code)));
            CCode->setStyleSheet("font-family:700 italic;font-size:25px;");
            CCode->setFixedHeight(28);
    //        CCode->setFixedWidth(240);

            l6->addWidget(CourseCode);
            l6->addWidget(CCode);

            //inserting buttons
            QHBoxLayout* l2 = new QHBoxLayout(frame);
            QSpacerItem* S = new QSpacerItem(480,0);
            QPushButton* Accept = new QPushButton();
            Accept->setText("Accept");
            Accept->setStyleSheet("QPushButton {/*margin-left:50;*/color:rgb(255, 255, 255);font-size:17px;font-family:Segoe UI;border-image: url(22.png);border-radius:20px;} QPushButton:hover{border-image: url(buttom.png);}");
            Accept->setFixedHeight(40);
            Accept->setFixedWidth(130);
            Accept->setCursor(QCursor(Qt::PointingHandCursor));

            QPushButton* Reject = new QPushButton();
            Reject->setText("Reject");
            Reject->setStyleSheet("QPushButton {/*margin-left:50;*/color:rgb(255, 255, 255);font-size:17px;font-family:Segoe UI;border-image: url(22.png);border-radius:20px;} QPushButton:hover{border-image: url(buttom.png);}");
            Reject->setFixedHeight(40);
            Reject->setFixedWidth(130);
            Reject->setCursor(QCursor(Qt::PointingHandCursor));

            mp[Reject]=make_pair(course.code, student.id);
            mp[Accept]=make_pair(course.code, student.id);


            auto it1 = mp[Reject].first;
            auto it2 = mp[Reject].second;
            QObject::connect(Reject, &QPushButton::clicked, this, [ frame, it1, it2](){
                frame->hide();
                QSqlQuery query;
                QString str = "delete from pending_courses where student_id = "+QString::fromStdString(to_string(it2))+" and course_code = "+QString::fromStdString(to_string(it1))+";";
                qDebug()<<str;
                if (!query.exec("delete from pending_courses where student_id = "+QString::fromStdString(to_string(it2))+" and course_code = "+QString::fromStdString(to_string(it1))+";")){
                    qDebug()<<query.lastError();
                }
                qDebug()<<QString::fromStdString(to_string(it1))<<'\t'<<QString::fromStdString(to_string(it2));
            });

            auto it4 = mp[Accept].first;
            auto it3 = mp[Accept].second;
            QObject::connect(Accept, &QPushButton::clicked, this, [ frame, it3, it4](){
                frame->hide();
                QSqlQuery query;
                QString str = "delete from pending_courses where student_id = "+QString::fromStdString(to_string(it3))+" and course_code = "+QString::fromStdString(to_string(it4))+";";
                qDebug()<<str;
                if (query.exec("delete from pending_courses where student_id = "+QString::fromStdString(to_string(it3))+" and course_code = "+QString::fromStdString(to_string(it4))+";")){
                    QSqlQuery query2;
                    if (!query2.exec("insert into in_progress values("+QString::fromStdString(to_string(it3))+" , "+QString::fromStdString(to_string(it4))+");"))
                        qDebug()<<query2.lastError();
                }
                else
                    qDebug()<<query.lastError();
            });
            l2->addItem(S);
            l2->addWidget(Accept);
            l2->addWidget(Reject);

            l->insertLayout(0,l3);
            l->insertLayout(1,l4);
            l->insertLayout(2,l5);
            l->insertLayout(3,l6);
            l->insertLayout(4,l2);
            layout->insertLayout(0, l);


        //    QObject::connect(
        //                removeCourse, &QPushButton::clicked,
        //                this, &courses::onRemoveWidget);
            show();
        }
    }
    else
        qDebug()<<query10.lastError();
}

void PendingRequests::setAdmin(Admin admin){
    this->admin.login(admin.name, admin.password);
}

void PendingRequests::on_pushButton_40_clicked()
{
    AdminProfile AP;
    AP.setAdmin(this->admin);
    this->hide();
    AP.setModal(true);
    AP.exec();
}


void PendingRequests::on_pushButton_39_clicked()
{
    ui->leftMenu->hide();
    ui->widget_11->show();

}


void PendingRequests::on_pushButton_45_clicked()
{
    if(ui->leftMenu->isHidden()){
        ui->leftMenu->show();
        ui->widget_11->hide();
    }
    else{
        ui->leftMenu->hide();
    }
}


void PendingRequests::on_pushButton_41_clicked()
{
    Add_Student AS;
    AS.setAdmin(this->admin);
    this->hide();
    AS.setModal(true);
    AS.exec();
}


void PendingRequests::on_pushButton_43_clicked()
{
    Student_Data SD;
    SD.setAdmin(this->admin);
    this->hide();
    SD.setModal(true);
    SD.exec();
}


void PendingRequests::on_pushButton_42_clicked()
{
    Add_Course AC;
    AC.setAdmin(this->admin);
    this->hide();
    AC.setModal(true);
    AC.exec();
}


void PendingRequests::on_pushButton_47_clicked()
{
    Course_Data CD;
    CD.setAdmin(this->admin);
    this->hide();
    CD.setModal(true);
    CD.exec();
}


void PendingRequests::on_pushButton_44_clicked()
{
    Login2 L;
    this->hide();
    L.setModal(true);
    L.exec();
}

