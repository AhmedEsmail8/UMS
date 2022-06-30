#ifndef FINISHEDCOURSES_H
#define FINISHEDCOURSES_H

#include "Student.h"
#include <QDialog>

namespace Ui {
class FinishedCourses;
}

class FinishedCourses : public QDialog
{
    Q_OBJECT

public:
    Ui::FinishedCourses* ui;
    Student student;
    void setStudent(Student);
    explicit FinishedCourses(QWidget *parent = nullptr);
    ~FinishedCourses();

private slots:
//    void on_pushButton_27_clicked();

    void on_pushButton_28_clicked();

    void on_pushButton_29_clicked();

    void on_pushButton_31_clicked();

    void on_pushButton_32_clicked();

    void on_pushButton_26_clicked();

    void on_pushButton_25_clicked();
};

#endif // FINISHEDCOURSES_H
