#ifndef ADD_COURSE_H
#define ADD_COURSE_H

#include <QDialog>
#include "courses.h"
#include <map>
#include <vector>
#include "Admin.h"


namespace Ui {
class Add_Course;
}

class Add_Course : public QDialog
{
    Q_OBJECT

public:
    Ui::Add_Course* ui;
    long long counter=10;
    QSqlDatabase db;
    vector <QString> courses;
    vector <QFrame*> frames;
    map <QPushButton*, QString> mp;
    map <string,int> course_code;
    vector <QString> all_courses;
    explicit Add_Course(QWidget *parent = nullptr);
    ~Add_Course();
    Admin admin;
    void setAdmin(Admin);
    void onAddWidget(QString CourseName);
//    void onRemoveWidget();


private slots:
    void on_pushButton_39_clicked();

    void on_pushButton_45_clicked();

    void on_pushButton_44_clicked();

    void on_pushButton_40_clicked();

    void on_pushButton_41_clicked();

    void on_pushButton_43_clicked();

    void on_pushButton_47_clicked();

    void on_pushButton_46_clicked();

    void on_RequiredCourses_activated(int index);

    void on_addCourse_clicked();

};

#endif // ADD_COURSE_H
