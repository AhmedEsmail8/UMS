/********************************************************************************
** Form generated from reading UI file 'adminhome.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINHOME_H
#define UI_ADMINHOME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_adminHome
{
public:
    QVBoxLayout *verticalLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_5;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *adminHome)
    {
        if (adminHome->objectName().isEmpty())
            adminHome->setObjectName(QString::fromUtf8("adminHome"));
        adminHome->resize(1021, 583);
        verticalLayout = new QVBoxLayout(adminHome);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        scrollArea = new QScrollArea(adminHome);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 997, 559));
        verticalLayout_5 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_5->setSpacing(25);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);


        retranslateUi(adminHome);

        QMetaObject::connectSlotsByName(adminHome);
    } // setupUi

    void retranslateUi(QDialog *adminHome)
    {
        adminHome->setWindowTitle(QCoreApplication::translate("adminHome", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class adminHome: public Ui_adminHome {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINHOME_H
