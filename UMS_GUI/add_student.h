#ifndef ADD_STUDENT_H
#define ADD_STUDENT_H

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

using namespace std;

namespace Ui {
class Add_Student;
}

class Add_Student : public QDialog
{
    Q_OBJECT

public:
    Ui::Add_Student* ui;
    QSqlDatabase db;
    Student student,tmp;
    //vector <pair<QPushButton*, QFrame* >> buttons;
    map <string,int> course_code;
    map <QPushButton*, QString> mp;
    map <string, long long> CourseVariant;
    vector <QString> current, finished;
    vector < QPushButton*> buttons;
    map <QString, vector <QString>::iterator> index;
    explicit Add_Student(QWidget *parent = nullptr);
    ~Add_Student();
    void onAddWidget(QString CourseName);
    void onAddFinishedCourse(QString CourseN);
    void currentCourses();
    long long counter=100;
    Admin admin;
    void setAdmin(Admin);

private slots:
    void on_pushButton_39_clicked();

    void on_pushButton_45_clicked();

    void on_pushButton_40_clicked();

    void on_pushButton_42_clicked();

    void on_pushButton_43_clicked();

    void on_pushButton_44_clicked();

    void on_pushButton_47_clicked();

    void on_pushButton_46_clicked();

    void on_CurrentCourses_activated(int index);

    void on_FinisheCourses_activated(int index);

    void on_addCourse_clicked();
};

#endif // ADD_STUDENT_H
