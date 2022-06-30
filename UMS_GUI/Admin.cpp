#include "Admin.h"
#include <iostream>
using namespace std;

Admin::Admin(){
    db = QSqlDatabase::addDatabase("QSQLITE");

    db.setDatabaseName("ums.db");
    db.open();
}

Admin::~Admin(){
//    db.close();
}

bool Admin::login(string name, string password) {
    QSqlQuery query;
    if (query.exec("select * from admin where name = '" + QString::fromStdString(name) + "' and password = '" + QString::fromStdString(password) + "';")){
        if (query.first()){
            this->name = name;
            this->password = password;
        }
        else
            return 0;
    }
    return 1;
}


void Admin::edit_password(string newpassword)
{
    QSqlQuery query;
    if (!query.exec("UPDATE admin SET password = '" + QString::fromStdString(newpassword) + "' WHERE name= '" + QString::fromStdString(this->name) + "';"))
        qDebug() << query.lastError() << '\n';
}

void Admin::add_student(Student student) {
    QSqlQuery query;
    if (query.exec("insert into student values(" + QString::fromStdString(to_string(student.id)) + ",'" + QString::fromStdString(student.name) + "'," + QString::fromStdString(student.password) + ',' + QString::fromStdString(to_string(student.academic_year)) + ");")){
        for (Course &course:student.finished_courses)
            student.addFinishedCourse(course.code);

        for (Course &course:student.inprogress_courses)
            student.addCurrentCourse(course.code);
    }
}
