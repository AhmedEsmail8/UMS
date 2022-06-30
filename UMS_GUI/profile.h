#ifndef PROFILE_H
#define PROFILE_H

#include <QDialog>
#include "Add_Course.h"
#include "Student.h"
#include "Add_Course.h"
#include "courses.h"
#include "currentcourses.h"
#include "QMessageBox"


namespace Ui {
class Profile;
}

class Profile : public QDialog
{
    Q_OBJECT

public:
    Ui::Profile* ui;
    courses C;
    CurrentCourses CC;
    Student student;
    void setStudent(Student);
    explicit Profile(QWidget *parent = nullptr);
    QString edited_username , edited_id , edited_year;
    ~Profile();


private slots:
    void on_pushButton_25_clicked();
    void on_pushButton_32_clicked();
    void on_pushButton_26_clicked();
    void on_Edit_clicked();
    void on_Done_clicked();
//    void on_pushButton_27_clicked();

    void on_pushButton_29_clicked();

    void on_pushButton_30_clicked();

    void on_pushButton_28_clicked();

    

    
};

#endif // PROFILE_H
