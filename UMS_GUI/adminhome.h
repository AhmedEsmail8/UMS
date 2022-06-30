#ifndef ADMINHOME_H
#define ADMINHOME_H

#include <QDialog>

namespace Ui {
class adminHome;
}

class adminHome : public QDialog
{
    Q_OBJECT

public:
    explicit adminHome(QWidget *parent = nullptr);
    ~adminHome();

public slots:
    void add_course();

private:
    Ui::adminHome *ui;
};

#endif // ADMINHOME_H
