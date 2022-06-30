#include "Admin_Profile.h"
#include "add_student.h"
#include "course_data.h"
#include "pendingrequests.h"
#include "student_data.h"
#include "ui_Admin_Profile.h"
#include "login2.h"
#include "Admin.h"

AdminProfile::AdminProfile(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdminProfile)
{
    ui->setupUi(this);
    ui->leftMenu->hide();
    ui->textEdit_6->hide();
    ui->Password->hide();
    ui->Done->hide();

    ui->pushButton_31->setIcon(QIcon("profile.png"));
    ui->pushButton_31->setIconSize(QSize(30,30));
    ui->pushButton_28->setIcon(QIcon("addstudent.png"));
    ui->pushButton_28->setIconSize(QSize(20,20));
    ui->pushButton_29->setIcon(QIcon("register.png"));
    ui->pushButton_29->setIconSize(QSize(18,18));
    ui->pushButton_30->setIcon(QIcon("studentdata.png"));
    ui->pushButton_30->setIconSize(QSize(18,18));
    ui->pushButton_32->setIcon(QIcon("logout.png"));
    ui->pushButton_32->setIconSize(QSize(18,18));
    ui->pushButton_33->setIcon(QIcon("request.png"));
    ui->pushButton_33->setIconSize(QSize(18,18));
    ui->pushButton_34->setIcon(QIcon("courses.png"));
    ui->pushButton_34->setIconSize(QSize(18,18));

    QIcon email("Email.png");
    ui->Email->addAction(email,QLineEdit::LeadingPosition);
    QIcon name("admin.png");
    ui->Name->addAction(name,QLineEdit::LeadingPosition);
    QIcon title("title.png");
    ui->Title->addAction(title,QLineEdit::LeadingPosition);
    QIcon password("passwordicon1.png");
    ui->Password->addAction(password,QLineEdit::LeadingPosition);
}

AdminProfile::~AdminProfile()
{
    delete ui;
}


void AdminProfile::on_pushButton_25_clicked()
{

    if(ui->leftMenu->isHidden()){
        ui->leftMenu->show();
        ui->widget_7->hide();
    }
    else{
        ui->leftMenu->hide();
    }
}


void AdminProfile::on_pushButton_26_clicked()
{
    ui->leftMenu->hide();
    ui->widget_7->show();
}


void AdminProfile::on_pushButton_32_clicked()
{
    Login2 L;
    this->hide();
    L.setModal(true);
    L.exec();
}


//void AdminProfile::on_pushButton_28_clicked()
//{
//    this->hide();
//    CC.setModal(true);
//    CC.exec();
//}


void AdminProfile::on_pushButton_29_clicked()
{
    this->hide();
    AC.setModal(true);
    AC.exec();
}


//void AdminProfile::on_pushButton_30_clicked()
//{
//    FinishedCourses FC;
//    this->hide();
//    FC.setModal(true);
//    FC.exec();
//}


void AdminProfile::setAdmin(Admin admin){
    this->admin.login(admin.name, admin.password);
    string tmp_name = admin.name;
    replace(tmp_name.begin(), tmp_name.end(), ' ', '_');
    ui->Email->setText(QString::fromStdString(tmp_name)+"@cis.asu.edu.eg");
    ui->Name->setText(QString::fromStdString(admin.name));
    ui->Password->setText(QString::fromStdString(admin.password));
}


void AdminProfile::on_Edit_clicked()
{
    ui->textEdit_6->show();
    ui->Password->show();
    ui->Password->setEnabled(true);
    ui->Edit->hide();
    ui->Done->show();
}


void AdminProfile::on_pushButton_28_clicked()
{
    Add_Student AS;
    AS.setAdmin(this->admin);
    this->hide();
    AS.setModal(true);
    AS.exec();
}


void AdminProfile::on_pushButton_30_clicked()
{
    Student_Data SD;
    SD.setAdmin(this->admin);
    this->hide();
    SD.setModal(true);
    SD.exec();
}


void AdminProfile::on_pushButton_34_clicked()
{
    Course_Data CD;
    CD.setAdmin(this->admin);
    this->hide();
    CD.setModal(true);
    CD.exec();
}


void AdminProfile::on_pushButton_33_clicked()
{
    PendingRequests PR;
    PR.setAdmin(this->admin);
    this->hide();
    PR.setModal(true);
    PR.exec();
}


void AdminProfile::on_Done_clicked()
{
    ui->Done->hide();
    ui->Edit->show();
    ui->textEdit_6->hide();
    string tmp_name = this->admin.name;
    this->admin.edit_password(ui->Password->text().toStdString());
    this->admin.login(tmp_name, ui->Password->text().toStdString());
    this->setAdmin(this->admin);
    ui->Password->hide();
}

