#ifndef STUDENT_DATA_H
#define STUDENT_DATA_H

#include <QDialog>
#include <QtSql>
#include <QSqlDatabase>
#include <QFileInfo>
#include <vector>
#include <map>
#include <QPushButton>
//#include <pair>
#include <iterator>
#include "Student.h"
#include <set>
#include "Admin.h"

namespace Ui {
class Student_Data;
}

class Student_Data : public QDialog
{
    Q_OBJECT

public:
    Ui::Student_Data* ui;
    QSqlDatabase db;
    Student student2, student;
    vector <pair<QPushButton*, QFrame* >> buttons;
    map <string,int> course_code;
    vector <QString> all_courses;
    map <QPushButton*, QString> mp;
    map <string, long long> CourseVariant;
    map <string, long long> combo_index;
    vector <QString> current, finished;
    map <QString, vector <QString>::iterator> index;
    vector <QFrame*> frames;
    Admin admin;
    void setAdmin(Admin);
    explicit Student_Data(QWidget *parent = nullptr);
    ~Student_Data();
    void onAddWidget(QString CourseName);
    void onAddFinishedCourse(QString CourseN);
    void currentCourses();
    long long counter=100;

private slots:
    void on_addCourse_clicked();
    void on_pushButton_39_clicked();
    void on_pushButton_45_clicked();
    void on_pushButton_40_clicked();
    void on_pushButton_41_clicked();
    void on_pushButton_42_clicked();
    void on_pushButton_44_clicked();
    void on_pushButton_47_clicked();
    void on_pushButton_46_clicked();
    void on_Show_clicked();
    void on_Edit_clicked();
    void on_Done_clicked();
    void on_CurrentCourses_activated(int index);
    void on_FinishedCourses_activated(int index);
};

#endif // STUDENT_DATA_H
