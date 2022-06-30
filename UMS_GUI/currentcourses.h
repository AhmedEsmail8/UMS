#ifndef CURRENTCOURSES_H
#define CURRENTCOURSES_H

#include <QDialog>
#include "Student.h"

namespace Ui {
class CurrentCourses;
}

class CurrentCourses : public QDialog
{
    Q_OBJECT

public:
    Ui::CurrentCourses* ui;
    Student student;
    void setStudent(Student);
    explicit CurrentCourses(QWidget *parent = nullptr);
    ~CurrentCourses();


private slots:
    void on_pushButton_26_clicked();

    void on_pushButton_25_clicked();

//    void on_pushButton_27_clicked();

    void on_pushButton_29_clicked();

    void on_pushButton_30_clicked();

    void on_pushButton_31_clicked();

    void on_pushButton_32_clicked();

};

#endif // CURRENTCOURSES_H
