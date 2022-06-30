#ifndef COURSES_H
#define COURSES_H

#include "Student.h"
#include <QLabel>
#include <QDialog>
#include <QVBoxLayout>
#include <map>
#include <vector>

namespace Ui {
class courses;
}

class courses : public QDialog
{
    Q_OBJECT

public:
    Ui::courses* ui;
    QPushButton* R;
    QLabel* hours;
    QLabel* maxNum;
    QVBoxLayout* l;
    map <string, int> toReg;
    vector <QPushButton*> buttons;
    Student student;
    void setStudent(Student);
    explicit courses(QWidget *parent = nullptr);
    ~courses();

//public slots:
//    void add_course();

private slots:
    void on_pushButton_25_clicked();
//    void register_clicked(string);

    void on_pushButton_26_clicked();

//    void clicked(string);

//    void on_pushButton_27_clicked();

    void on_pushButton_28_clicked();

    void on_pushButton_30_clicked();

    void on_pushButton_31_clicked();

    void on_pushButton_32_clicked();
};

#endif // COURSES_H
