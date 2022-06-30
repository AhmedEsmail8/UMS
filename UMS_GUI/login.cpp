#include "login.h"
#include "ui_login.h"

Login::Login(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Login)
{

    ui->setupUi(this);
    QIcon user("C:/Users/Hema/Desktop/Project/usernameicon.png");
    ui->username->addAction(user,QLineEdit::LeadingPosition);

    QIcon pass("C:/Users/Hema/Desktop/Project/passwordicon1.png");
    ui->password->addAction(pass,QLineEdit::LeadingPosition);


}



Login::~Login()
{
    delete ui;
}




void Login::on_button_clicked()
{
    this->hide();
    SH.setModal(true);
    SH.exec();


    //Student s;
//    stringstream ss;
//    ss<<ui->username->text().toStdString();
//    unsigned long long id;
//    ss>>id;
//    string pass = ui->password->text().toStdString();
//    pass.pop_back();
//    pass.erase(pass.begin());
    //qDebug()<<s.admin_login(20201700024);
//    s.ahmed();
//    QQmlEngine::setObjectOwnership(s, QQmlEngine::CppOwnership);

//    bool b = true;
//    qDebug() << b;
//    if(b==true)
//        qDebug() << "a7a";
//    QMessageBox::information(this,"Name",ui->username->text());





//    username = ui->username->text();
//    password = ui->password->text();


//    unsigned long long id;
//    std::string pass;
//    pass = password.toStdString();
//    stringstream ss ;
//    ss<<username.toStdString();
//    ss>>id;
//    qDebug() << id;
//    QString z2 = QString::fromStdString(pass);
//    qDebug() << z2;

//    Student S1(id , pass);

//    QString z = QString::fromStdString(S1.name);





}

