/********************************************************************************
** Form generated from reading UI file 'multilist.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MULTILIST_H
#define UI_MULTILIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MultiList
{
public:

    void setupUi(QWidget *MultiList)
    {
        if (MultiList->objectName().isEmpty())
            MultiList->setObjectName(QString::fromUtf8("MultiList"));
        MultiList->resize(400, 300);

        retranslateUi(MultiList);

        QMetaObject::connectSlotsByName(MultiList);
    } // setupUi

    void retranslateUi(QWidget *MultiList)
    {
        MultiList->setWindowTitle(QCoreApplication::translate("MultiList", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MultiList: public Ui_MultiList {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MULTILIST_H
