/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QWidget *centralwidget;
    QFrame *frame;
    QFrame *frame_2;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *button;
    QTextEdit *textEdit;
    QLineEdit *username;
    QLineEdit *password;
    QTextEdit *textEdit_2;
    QCheckBox *checkBox;
    QMenuBar *menubar;

    void setupUi(QMainWindow *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QString::fromUtf8("Login"));
        Login->resize(1198, 700);
        Login->setMinimumSize(QSize(1198, 700));
        Login->setMaximumSize(QSize(1198, 700));
        Login->setAutoFillBackground(true);
        Login->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(Login);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, -50, 611, 787));
        frame->setStyleSheet(QString::fromUtf8("*{\n"
"border-image: url(C:/Users/Hema/Desktop/Project/background.jpg);\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        frame_2 = new QFrame(centralwidget);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(610, 0, 591, 700));
        frame_2->setStyleSheet(QString::fromUtf8("*{\n"
"border-image: url(C:/Users/Hema/Desktop/Project/white.png);\n"
"}\n"
"\n"
""));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        label_2 = new QLabel(frame_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(80, 80, 130, 50));
        label_2->setStyleSheet(QString::fromUtf8("*{\n"
"	font: 700 20pt \"Segoe UI\";\n"
"color: rgb(0, 0, 0);\n"
"}"));
        label_3 = new QLabel(frame_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(80, 130, 231, 31));
        label_3->setStyleSheet(QString::fromUtf8("*{\n"
"	font:  12pt \"Segoe UI\";\n"
"color:rgb(0, 0, 0);\n"
"}"));
        button = new QPushButton(frame_2);
        button->setObjectName(QString::fromUtf8("button"));
        button->setGeometry(QRect(180, 519, 191, 61));
        button->setCursor(QCursor(Qt::PointingHandCursor));
        button->setAutoFillBackground(false);
        button->setStyleSheet(QString::fromUtf8("#button{\n"
"color:rgb(255, 255, 255);\n"
"font: 12pt \"Segoe UI\";\n"
"border-image: url(C:/Users/Hema/Desktop/Project/buttom.png);\n"
"border-radius:20px;\n"
"}\n"
"\n"
"#button:hover\n"
"{\n"
"color:rgb(0, 0, 0);border-image: url(C:/Users/Hema/Desktop/Project/textfield.png);\n"
"\n"
"}\n"
"\n"
""));
        textEdit = new QTextEdit(frame_2);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setEnabled(false);
        textEdit->setGeometry(QRect(80, 190, 121, 40));
        textEdit->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        username = new QLineEdit(frame_2);
        username->setObjectName(QString::fromUtf8("username"));
        username->setGeometry(QRect(80, 230, 450, 50));
        username->setFocusPolicy(Qt::StrongFocus);
        username->setContextMenuPolicy(Qt::PreventContextMenu);
        username->setStyleSheet(QString::fromUtf8("*{\n"
"border-image: url(C:/Users/Hema/Desktop/Project/textfield.png);\n"
"border-radius: 12px;font: 12pt \"Segoe UI\";\n"
"}"));
        username->setFrame(true);
        username->setEchoMode(QLineEdit::Normal);
        username->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        username->setCursorMoveStyle(Qt::LogicalMoveStyle);
        username->setClearButtonEnabled(true);
        password = new QLineEdit(frame_2);
        password->setObjectName(QString::fromUtf8("password"));
        password->setGeometry(QRect(80, 330, 450, 50));
        password->setStyleSheet(QString::fromUtf8("*{\n"
"border-image: url(C:/Users/Hema/Desktop/Project/textfield.png);\n"
"border-radius: 12px;\n"
"font: 12pt \"Segoe UI\";\n"
"\n"
"}\n"
"\n"
""));
        password->setEchoMode(QLineEdit::PasswordEchoOnEdit);
        password->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        password->setClearButtonEnabled(true);
        textEdit_2 = new QTextEdit(frame_2);
        textEdit_2->setObjectName(QString::fromUtf8("textEdit_2"));
        textEdit_2->setEnabled(false);
        textEdit_2->setGeometry(QRect(80, 290, 121, 40));
        textEdit_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        checkBox = new QCheckBox(frame_2);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(90, 380, 171, 41));
        checkBox->setCursor(QCursor(Qt::PointingHandCursor));
        checkBox->setStyleSheet(QString::fromUtf8("font:  10pt;\n"
"color:rgb(0, 0, 0);"));
        QIcon icon;
        QString iconThemeName = QString::fromUtf8("person");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QString::fromUtf8("../../../../.designer/backup"), QSize(), QIcon::Normal, QIcon::Off);
        }
        checkBox->setIcon(icon);
        checkBox->setChecked(false);
        checkBox->setTristate(false);
        label_2->raise();
        label_3->raise();
        button->raise();
        textEdit->raise();
        username->raise();
        checkBox->raise();
        textEdit_2->raise();
        password->raise();
        Login->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Login);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1198, 26));
        Login->setMenuBar(menubar);

        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QMainWindow *Login)
    {
        Login->setWindowTitle(QCoreApplication::translate("Login", "Login", nullptr));
        label_2->setText(QCoreApplication::translate("Login", "Sign In", nullptr));
        label_3->setText(QCoreApplication::translate("Login", "Welcome to UMS", nullptr));
        button->setText(QCoreApplication::translate("Login", "Sign In", nullptr));
        textEdit->setHtml(QCoreApplication::translate("Login", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; font-weight:696;\">Username</span></p></body></html>", nullptr));
        username->setInputMask(QString());
        username->setText(QString());
        username->setPlaceholderText(QCoreApplication::translate("Login", "Enter your username", nullptr));
        password->setPlaceholderText(QCoreApplication::translate("Login", "Enter your password", nullptr));
        textEdit_2->setHtml(QCoreApplication::translate("Login", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; font-weight:696;\">Passward</span></p></body></html>", nullptr));
        checkBox->setText(QCoreApplication::translate("Login", "Remember me", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
