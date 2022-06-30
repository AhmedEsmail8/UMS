#include "Add_Course.h"
#include "course_data.h"
#include "pendingrequests.h"
#include "qgroupbox.h"
#include "qlabel.h"
#include "student_data.h"
#include "ui_Add_Course.h"
#include "courses.h"
#include "login2.h"
#include "Admin_Profile.h"
#include "add_student.h"
#include "Admin.h"

Add_Course::Add_Course(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Add_Course)
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

    QIcon name("courses2.png");
    ui->Name->addAction(name,QLineEdit::LeadingPosition);
    QIcon id("ID.jpg");
    ui->ID->addAction(id,QLineEdit::LeadingPosition);
    QIcon maxnum("MaxNum.png");
    ui->MaxNum->addAction(maxnum,QLineEdit::LeadingPosition);


    db = QSqlDatabase::addDatabase("QSQLITE");

    db.setDatabaseName("ums.db");
    db.open();
//    ui->RequiredCourses->insertItem(0,"DS",QVariant(50));
    QSqlQuery query;
    if (query.exec("select code, name from course;")){
        while (query.next()){
            all_courses.push_back(query.value(1).toString());
            ui->RequiredCourses->addItem(query.value(1).toString(),QVariant(counter));
            course_code[query.value(1).toString().toStdString()] = query.value(0).toInt();
            counter+=10;
        }
    }
}

void Add_Course::setAdmin(Admin admin){
    this->admin.login(admin.name, admin.password);
}

Add_Course::~Add_Course()
{
    delete ui;
}


void Add_Course::onAddWidget(QString CourseName){
    courses.push_back(CourseName);

//    selected[CourseName]=1;
    QVBoxLayout* layout = qobject_cast<QVBoxLayout*>(ui->scrollAreaWidgetContents->layout());
    QFrame* frame = new QFrame();
    frames.push_back(frame);
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
    auto u = ui;
    auto &curr = courses;
    QObject::connect(R, &QPushButton::clicked, this, [ frame,  it, &curr, this](){
        frame->hide();
        ui->RequiredCourses->addItem(it,QVariant(counter));
        counter+=10;
        auto tmp = std::find(curr.begin(),curr.end(),it);
        curr.erase(tmp);
    });


    QHBoxLayout* l = new QHBoxLayout(frame);
    l->addWidget(courseName);
    l->addWidget(R);
    layout->insertLayout(0, l);
}


void Add_Course::on_pushButton_39_clicked()
{
    ui->leftMenu->hide();
    ui->widget_11->show();
}


void Add_Course::on_pushButton_45_clicked()
{
    if(ui->leftMenu->isHidden()){
        ui->leftMenu->show();
        ui->widget_11->hide();
    }
    else{
        ui->leftMenu->hide();
    }
}


void Add_Course::on_pushButton_44_clicked()
{
    Login2 L;
    this->hide();
    L.setModal(true);
    L.exec();
}


void Add_Course::on_pushButton_40_clicked()
{
    AdminProfile AP;
    AP.setAdmin(this->admin);
    this->hide();
    AP.setModal(true);
    AP.exec();
}


void Add_Course::on_pushButton_41_clicked()
{
    Add_Student AS;
    AS.setAdmin(this->admin);
    this->hide();
    AS.setModal(true);
    AS.exec();
}


void Add_Course::on_pushButton_43_clicked()
{
    Student_Data SD;
    SD.setAdmin(this->admin);
    this->hide();
    SD.setModal(true);
    SD.exec();
}


void Add_Course::on_pushButton_47_clicked()
{
    Course_Data CD;
    CD.setAdmin(this->admin);
    this->hide();
    CD.setModal(true);
    CD.exec();
}


void Add_Course::on_pushButton_46_clicked()
{
    PendingRequests PR;
    PR.setAdmin(this->admin);
    this->hide();
    PR.setModal(true);
    PR.exec();
}


void Add_Course::on_RequiredCourses_activated(int index)
{
    index = ui->RequiredCourses->currentIndex();
    QMessageBox::information(this,"Course Added", ui->RequiredCourses->itemText(index)+" added successfully");
    onAddWidget(ui->RequiredCourses->itemText(index));
    ui->RequiredCourses->removeItem(index);
    ui->RequiredCourses->setCurrentIndex(0);

}


void Add_Course::on_addCourse_clicked()
{
    QSqlQuery query;
    if (!query.exec("insert into course values("+ui->ID->text()+",'"+ui->Name->text()+"',"+ui->comboBox->currentText()[0]+','+ui->MaxNum->text()+");"))
        qDebug() << query.lastError();
    for (QString &course: this->courses){
        QSqlQuery query2;
        if(!query2.exec("insert into prerequired_courses values("+ui->ID->text()+","+QString::fromStdString(to_string(course_code[course.toStdString()]))+");"))
            qDebug() << query2.lastError()<<"\t"<<ui->ID->text()<<"\t"<<course_code[course.toStdString()];
    }
    courses.clear();
    for (int i=0 ; i<frames.size(); i++)
        frames[i]->hide();
    while(ui->RequiredCourses->count()>0)
        ui->RequiredCourses->removeItem(0);
    ui->Name->setText("");
    ui->ID->setText("");
    ui->comboBox->setCurrentText("0 Hours");
    ui->MaxNum->setText("");
    counter=10;
    mp.clear();
    all_courses.clear();
    course_code.clear();
    for (QString &course:all_courses){
        ui->RequiredCourses->addItem(course, QVariant(counter));
        counter+=10;
    }
    QSqlQuery query2;
    if (query2.exec("select code, name from course;")){
        while (query2.next()){
            all_courses.push_back(query2.value(1).toString());
            ui->RequiredCourses->addItem(query2.value(1).toString(),QVariant(counter));
            course_code[query2.value(1).toString().toStdString()] = query.value(0).toInt();
            counter+=10;
        }
    }
}
