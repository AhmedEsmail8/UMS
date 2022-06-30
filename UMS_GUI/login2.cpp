#include "login2.h"
#include "ui_login2.h"
#include "Add_Course.h"

Login2::Login2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::login2)
{
    ui->setupUi(this);
    QIcon user("usernameicon.png");
    ui->username->addAction(user,QLineEdit::LeadingPosition);

    QIcon pass("passwordicon1.png");
    ui->password->addAction(pass,QLineEdit::LeadingPosition);

}

Login2::~Login2()
{
    delete ui;
}

void Login2::on_button_clicked()
{


        try{
            stringstream ss;
            ss<<ui->username->text().toStdString();
            unsigned long long id;
            ss>>id;
            string pass = ui->password->text().toStdString();
            if (s.login(id, pass)){
                this->hide();
                SH.setModal(true);
                SH.setStudent(this->s);
                SH.exec();
            }
            else
                throw 505;
        }catch(...){
            if (admin.login(ui->username->text().toStdString(), ui->password->text().toStdString())){
                AdminProfile AP;
                this->hide();
                AP.setAdmin(admin);
                AP.setModal(true);
                AP.exec();
            }
            else
                QMessageBox::information(this,"Error", "Unknown Account");
        }

}

void Login2::setStudent(Student student){
    student.login(this->s.id, this->s.password);
}
