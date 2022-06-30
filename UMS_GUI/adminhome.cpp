#include "adminhome.h"
#include "qgroupbox.h"
#include "qlabel.h"
#include "ui_adminhome.h"
#include "courses.h"

adminHome::adminHome(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::adminHome)
{
    ui->setupUi(this);
}

adminHome::~adminHome()
{
    delete ui;
}

void adminHome::add_course(){
    QVBoxLayout* layout = qobject_cast<QVBoxLayout*>(ui->scrollAreaWidgetContents->layout());

    QGroupBox* groupBox = new QGroupBox();
    groupBox->setTitle("Data Structures");
    groupBox->setStyleSheet("background:white;font-size:20px;font-family:700 Segoe UI;");
    groupBox->setMaximumHeight(150);
    layout->insertWidget(0, groupBox);


    //inserting label
    QVBoxLayout* l = new QVBoxLayout(groupBox);
    QLabel* code = new QLabel();
    code->setText("Course Code : #&ss");
    code->setStyleSheet("background:white;font-size:20px;font-family:Segoe UI;");
    code->setFixedHeight(20);


    //inserting label2
    QLabel* hours = new QLabel();
    hours->setText("Course hours : 4");
    hours->setStyleSheet("background:white;font-size:20px;font-family:Segoe UI;");
    hours->setFixedHeight(20);


    //inserting label2
    QLabel* maxNum = new QLabel();
    maxNum->setText("Course Maximum Number of Students : 400");
    maxNum->setStyleSheet("background:white;font-size:20px;font-family:Segoe UI;");
    maxNum->setFixedHeight(20);



    l->addWidget(code);
    l->addWidget(hours);
    l->addWidget(maxNum);
    layout->insertLayout(0, l);


//    QObject::connect(
//                removeCourse, &QPushButton::clicked,
//                this, &courses::onRemoveWidget);
    show();
}

