#ifndef LOGIN_H
#define LOGIN_H

#include <QMainWindow>
#include <qsplitter.h>
#include <QDebug>
#include <QMessageBox>
#include "profile.h"
#include "studenthome.h"
#include "Student.h"
#include <sstream>
#include <QtSql>
#include <QSqlDatabase>
#include <sstream>
#include "Student.h"
#include <QDebug>
#include <QtDebug>
#include <QFileInfo>



QT_BEGIN_NAMESPACE
namespace Ui { class Login; }
QT_END_NAMESPACE

class Login : public QMainWindow
{
    Q_OBJECT

public:
    Login(QWidget *parent = nullptr);
    //QString username , password;
    ~Login();

public slots:
    void on_button_clicked();

private:
    Ui::Login *ui;
    studentHome SH;
    QSqlDatabase db;

};




#endif // LOGIN_H
