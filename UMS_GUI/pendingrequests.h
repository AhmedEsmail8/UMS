#ifndef PENDINGREQUESTS_H
#define PENDINGREQUESTS_H

#include <QDialog>
#include "Admin.h"
#include <vector>
#include <map>
#include <QtSql>
#include <QSqlDatabase>
#include <QFileInfo>

namespace Ui {
class PendingRequests;
}

class PendingRequests : public QDialog
{
    Q_OBJECT

public:
    Ui::PendingRequests* ui;
    explicit PendingRequests(QWidget *parent = nullptr);
    ~PendingRequests();
    Admin admin;
    void setAdmin(Admin);
    QSqlDatabase db;
    vector <QFrame *> frames;
    map <QPushButton*, pair<int,unsigned long long>> mp;


public slots:
    void add_course();

private slots:
    void on_pushButton_40_clicked();

    void on_pushButton_39_clicked();

    void on_pushButton_45_clicked();

    void on_pushButton_41_clicked();

    void on_pushButton_43_clicked();

    void on_pushButton_42_clicked();

    void on_pushButton_47_clicked();

    void on_pushButton_44_clicked();

};

#endif // PENDINGREQUESTS_H
