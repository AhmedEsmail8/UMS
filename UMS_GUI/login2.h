#ifndef LOGIN2_H
#define LOGIN2_H

#include <QMainWindow>
#include <qsplitter.h>
#include <QDebug>
#include <QMessageBox>
#include "profile.h"
#include "Admin_Profile.h"
#include "Student.h"
#include <sstream>
#include <QtSql>
#include <QSqlDatabase>
#include <sstream>
#include "Student.h"
#include <QDebug>
#include <QtDebug>
#include <QFileInfo>
#include "profile.h"
#include "Admin.h"

QT_BEGIN_NAMESPACE
namespace Ui { class login2; }
QT_END_NAMESPACE

class Login2 : public QDialog
{
    Q_OBJECT

public:
    Ui::login2* ui;
    Profile SH;
    Student s;
    Admin admin;
    Login2(QWidget *parent = nullptr);
    void setStudent(Student);
    ~Login2();

public slots:
    void on_button_clicked();
    
};




#endif // LOGIN_H
