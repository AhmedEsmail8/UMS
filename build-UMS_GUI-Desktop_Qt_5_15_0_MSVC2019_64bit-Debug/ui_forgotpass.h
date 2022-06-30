/********************************************************************************
** Form generated from reading UI file 'forgotpass.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORGOTPASS_H
#define UI_FORGOTPASS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ForgotPass
{
public:
    QPushButton *pushButton;

    void setupUi(QDialog *ForgotPass)
    {
        if (ForgotPass->objectName().isEmpty())
            ForgotPass->setObjectName(QString::fromUtf8("ForgotPass"));
        ForgotPass->resize(1199, 606);
        ForgotPass->setMaximumSize(QSize(1199, 606));
        pushButton = new QPushButton(ForgotPass);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(450, 170, 93, 29));

        retranslateUi(ForgotPass);

        QMetaObject::connectSlotsByName(ForgotPass);
    } // setupUi

    void retranslateUi(QDialog *ForgotPass)
    {
        ForgotPass->setWindowTitle(QCoreApplication::translate("ForgotPass", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("ForgotPass", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ForgotPass: public Ui_ForgotPass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORGOTPASS_H
