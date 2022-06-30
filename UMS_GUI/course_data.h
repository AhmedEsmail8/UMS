#ifndef COURSE_DATA_H
#define COURSE_DATA_H

#include <QDialog>
#include "Course.h"
#include <map>
#include <vector>
#include "Admin.h"

namespace Ui {
class Course_Data;
}

class Course_Data : public QDialog
{
    Q_OBJECT

public:
    Ui::Course_Data* ui;
    long long counter=10;
    QSqlDatabase db;
    vector <QString> courses;
    vector <QFrame*> frames;
    map <QPushButton*, QString> mp;
    map <string,int> course_code;
    map <QString, bool> selected;
    vector <QString> all_courses;
    explicit Course_Data(QWidget *parent = nullptr);
    void handleCourses();
    Course course;
    ~Course_Data();
    void onAddWidget(QString CourseName);
    void setAdmin(Admin);
    Admin admin;

private slots:
    void on_pushButton_39_clicked();

    void on_pushButton_45_clicked();

    void on_pushButton_40_clicked();

    void on_pushButton_41_clicked();

    void on_pushButton_43_clicked();

    void on_pushButton_42_clicked();

    void on_pushButton_44_clicked();

    void on_Edit_clicked();

    void on_pushButton_46_clicked();

    void on_Done_clicked();

    void on_RequiredCourses_activated(int index);

    
};

#endif // COURSE_DATA_H
