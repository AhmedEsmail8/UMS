#ifndef HOMESTUDENT_H
#define HOMESTUDENT_H

#include <QDialog>

namespace Ui {
class homeStudent;
}

class homeStudent : public QDialog
{
    Q_OBJECT

public:
    explicit homeStudent(QWidget *parent = nullptr);
    ~homeStudent();


private slots:

    void on_pushButton_clicked();
    void on_pushButton_2_clicked();

private:
    Ui::homeStudent *ui;
};

#endif // HOMESTUDENT_H








