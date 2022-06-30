#include "profile.h"
#include "ui_profile.h"
#include "login2.h"
#include "Student.h"
#include "Admin_Profile.h"
#include "currentcourses.h"
#include "finishedcourses.h"
#include <QEvent>
#include <QObject>


Profile::Profile(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Profile)
{
    ui->setupUi(this);
    ui->leftMenu->hide();
    ui->Done->hide();
    ui->textEdit_6->hide();
    ui->Password->hide();
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

    QIcon email("Email.png");
    ui->Email->addAction(email,QLineEdit::LeadingPosition);
    QIcon user("usernameicon.png");
    ui->Name->addAction(user,QLineEdit::LeadingPosition);
    QIcon id("ID.jpg");
    ui->ID->addAction(id,QLineEdit::LeadingPosition);
    QIcon year("year.png");
    ui->Year->addAction(year,QLineEdit::LeadingPosition);
    QIcon title("title.png");
    ui->Title->addAction(title,QLineEdit::LeadingPosition);
    QIcon pass("passwordicon1.png");
    ui->Password->addAction(pass,QLineEdit::LeadingPosition);

}


Profile::~Profile()
{
    delete ui;
}







void Profile::on_pushButton_25_clicked()
{
    if(ui->leftMenu->isHidden()){
        ui->leftMenu->show();
        ui->widget_7->hide();
    }
    else{
        ui->leftMenu->hide();
    }
}

void Profile::on_pushButton_32_clicked()
{
    Login2 L;
    this->hide();
    L.setModal(true);
    L.exec();
}


void Profile::on_pushButton_26_clicked()
{
    ui->leftMenu->hide();
    ui->widget_7->show();
}


void Profile::on_Edit_clicked()
{
    ui->textEdit_6->show();
    ui->Password->show();
    ui->Password->setEnabled(true);
    ui->Edit->hide();
    ui->Done->show();
}


void Profile::on_Done_clicked()
{
    ui->textEdit_6->hide();
    ui->Password->hide();
    ui->Password->setEnabled(false);
    ui->Edit->show();
    ui->Done->hide();

    QString S = ui->Password->text();
    bool Space = false;
    for (int i = 0; i < S.length(); i++){
        if(S[i] == QString::fromStdString(" ") ){
            Space = true;
            break;
        }
    }


    if(ui->Password->text()=="" || Space == true){
        ui->Password->setText(QString::fromStdString(this->student.password));
        QMessageBox::information(this,"Error", "Invalid Password");
    }
    else{
        unsigned long long tmp = this->student.id;
        this->student.Edit_password(ui->Password->text().toStdString());
        this->student.login(tmp, ui->Password->text().toStdString());
    }
}





void Profile::on_pushButton_29_clicked()
{
    this->hide();
    C.setStudent(this->student);
    C.setModal(true);
    C.exec();
}


void Profile::on_pushButton_30_clicked()
{
    FinishedCourses FC;
    this->hide();
    FC.setStudent(this->student);
    FC.setModal(true);
    FC.exec();
}


void Profile::setStudent(Student student){
    this->student.login(student.id, student.password);
    QString Qstr_name = QString::fromStdString(student.name);
    ui->Name->setText(Qstr_name);
    QString Qstr_id = QString::fromStdString(to_string(student.id));
    ui->Email->setText(Qstr_id+"@cis.asu.edu.eg");
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
    ui->ID->setText(Qstr_id);
    ui->Title->setText("Student");
    ui->Password->setText(QString::fromStdString(student.password));
    qDebug()<<this->student.id;
}

void Profile::on_pushButton_28_clicked()
{
    this->hide();
    CC.setStudent(this->student);
    CC.setModal(true);
    CC.exec();
}

