#pragma once
#include "sqlite3.h"
#include<iostream>
#include <sstream>
#include<vector>
#include<queue>
#include <QtSql>
#include <QSqlDatabase>
#include <QFileInfo>
using namespace std;
class Course
{
public:
    QSqlDatabase db;
    string name;
    int maxNumOfStudents, hours, code;
    vector <Course> prerequired_courses;
    Course(int code, QSqlDatabase db);
    Course(int code, QSqlDatabase db, bool *b);
    Course(QSqlDatabase db);
    Course();
    bool operator == (Course const&);
    bool operator == (string const&);
    ~Course();
};
