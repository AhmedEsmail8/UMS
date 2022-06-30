/********************************************************************************
** Form generated from reading UI file 'coursestree.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COURSESTREE_H
#define UI_COURSESTREE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_CoursesTree
{
public:

    void setupUi(QDialog *CoursesTree)
    {
        if (CoursesTree->objectName().isEmpty())
            CoursesTree->setObjectName(QString::fromUtf8("CoursesTree"));
        CoursesTree->resize(1198, 700);
        CoursesTree->setMinimumSize(QSize(1198, 700));
        CoursesTree->setMaximumSize(QSize(1198, 700));

        retranslateUi(CoursesTree);

        QMetaObject::connectSlotsByName(CoursesTree);
    } // setupUi

    void retranslateUi(QDialog *CoursesTree)
    {
        CoursesTree->setWindowTitle(QCoreApplication::translate("CoursesTree", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CoursesTree: public Ui_CoursesTree {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COURSESTREE_H
