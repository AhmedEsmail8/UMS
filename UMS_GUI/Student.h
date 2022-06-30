#pragma once
#include <iostream>
#include <iterator>
#include <set>
#include <map>
#include <vector>
#include <sstream>
#include "sqlite3.h"
#include "Course.h"
#include <string>
#include <QtSql>
#include <QSqlDatabase>
#include <QFileInfo>
#include <map>
using namespace std;
class Student
{
public:
    string name, password;
    QSqlDatabase db;
    int academic_year;
    unsigned long long id;
    vector <Course> finished_courses, inprogress_courses, available_coursesVec, pending_courses;
    Student();
    Student(QSqlDatabase);
    void Edit_password(string password);
    set <int> available_courses();
    Course course_details(int code);
    bool all_in(vector <int>, vector <int>);
    void register_course(int code);
    bool login(unsigned long long id, string password);
    bool admin_login(unsigned long long id);
    void removeFinishedCourse(int code);
    void removeCurrentCourse(int code);
    void editGrade(int);
    void editName(string);
    void addCurrentCourse(int code);
    void addFinishedCourse(int);
    void reset();
    ~Student();
};
