#pragma once
#include <iostream>
#include "Course.h"
#include <vector>
#include "sqlite3.h"
#include "Student.h"
using namespace std;
class Admin
{
public:
    string name, password;
    QSqlDatabase db;
    Admin();
    ~Admin();
    bool login(string name, string password);
    void edit_password(string newpassword);
    void accept_course(unsigned long long student_id, int course_code);
    // to mark in progress course as finished
    void markAsFinished(unsigned long long student_id, int course_code);
    void add_student(Student);
    void add_course(Course);


    // 0 for edit name
    // 1 for edit hours
    // 2 for edit prerequired courses
    // 3 edit maximum number of students
    void edit_course(int course_code, vector <int> edit_case);
    vector <Student> studentsOfCourse(int code);
    void edit_courseName(string, int);

    // fun = 0 if in progress
    // fun = 1 if finished
    void courseOfStudent(unsigned long long id, bool fun, vector <Course>* courseOfStudent_vec, bool* status);
};
