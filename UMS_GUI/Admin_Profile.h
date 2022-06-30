#ifndef ADMIN_PROFILE_H
#define ADMIN_PROFILE_H

#include <QDialog>
#include "profile.h"
#include "currentcourses.h"
#include "courses.h"
#include "Add_Course.h"
#include "Admin.h"

namespace Ui {
class AdminProfile;
}

class AdminProfile : public QDialog
{
    Q_OBJECT

public:
    Ui::AdminProfile* ui;
    Add_Course AC;
    Admin admin;
    void setAdmin(Admin);
    explicit AdminProfile(QWidget *parent = nullptr);
    ~AdminProfile();


private slots:

    void on_pushButton_25_clicked();
    void on_pushButton_26_clicked();
//    void on_pushButton_31_clicked();
    void on_pushButton_32_clicked();

//    void on_pushButton_28_clicked();

    void on_pushButton_29_clicked();

//    void on_pushButton_30_clicked();

    void on_Edit_clicked();

    void on_pushButton_28_clicked();

    void on_pushButton_30_clicked();

    void on_pushButton_34_clicked();

    void on_pushButton_33_clicked();

    void on_Done_clicked();

};

#endif // ADMIN_PROFILE_H
