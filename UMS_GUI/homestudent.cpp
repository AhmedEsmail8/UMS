#include "homestudent.h"
#include "ui_homestudent.h"

homeStudent::homeStudent(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::homeStudent)
{
    ui->setupUi(this);
    ui->leftMenu->hide();
}

homeStudent::~homeStudent()
{
    delete ui;
}








void homeStudent::on_pushButton_clicked()
{

    if(ui->leftMenu->isHidden()){
        ui->leftMenu->show();
        ui->widget->hide();
    }
    else{
        ui->leftMenu->hide();
    }
}



void homeStudent::on_pushButton_2_clicked()
{
    ui->leftMenu->hide();
    ui->widget->show();

}

