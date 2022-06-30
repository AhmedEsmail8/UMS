/********************************************************************************
** Form generated from reading UI file 'profile.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROFILE_H
#define UI_PROFILE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Profile
{
public:
    QHBoxLayout *horizontalLayout;
    QWidget *leftMenu;
    QVBoxLayout *verticalLayout_17;
    QFrame *frame_13;
    QVBoxLayout *verticalLayout_18;
    QFrame *frame_14;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_8;
    QPushButton *pushButton_26;
    QPushButton *pushButton_31;
    QPushButton *pushButton_28;
    QPushButton *pushButton_29;
    QPushButton *pushButton_30;
    QPushButton *pushButton_32;
    QSpacerItem *verticalSpacer;
    QFrame *frame_15;
    QVBoxLayout *verticalLayout_19;
    QWidget *mainBody;
    QVBoxLayout *verticalLayout_16;
    QWidget *HeaderFrame_4;
    QHBoxLayout *horizontalLayout_11;
    QWidget *widget_7;
    QHBoxLayout *horizontalLayout_12;
    QPushButton *pushButton_25;
    QLabel *label_2;
    QWidget *widget_8;
    QWidget *mainFrame_4;
    QTextEdit *textEdit;
    QLineEdit *Email;
    QLineEdit *Name;
    QTextEdit *textEdit_2;
    QTextEdit *textEdit_3;
    QLineEdit *ID;
    QTextEdit *textEdit_4;
    QLineEdit *Year;
    QTextEdit *textEdit_5;
    QLineEdit *Title;
    QPushButton *Edit;
    QTextEdit *textEdit_6;
    QLineEdit *Password;
    QPushButton *Done;
    QFrame *frame;

    void setupUi(QDialog *Profile)
    {
        if (Profile->objectName().isEmpty())
            Profile->setObjectName(QString::fromUtf8("Profile"));
        Profile->resize(1177, 683);
        Profile->setMinimumSize(QSize(1177, 683));
        Profile->setMaximumSize(QSize(1177, 683));
        Profile->setStyleSheet(QString::fromUtf8("border-image:url(\"white.png\");"));
        Profile->setSizeGripEnabled(false);
        horizontalLayout = new QHBoxLayout(Profile);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        leftMenu = new QWidget(Profile);
        leftMenu->setObjectName(QString::fromUtf8("leftMenu"));
        leftMenu->setMaximumSize(QSize(270, 678));
        leftMenu->setStyleSheet(QString::fromUtf8("border-image:url(\"22.png\");"));
        verticalLayout_17 = new QVBoxLayout(leftMenu);
        verticalLayout_17->setObjectName(QString::fromUtf8("verticalLayout_17"));
        verticalLayout_17->setContentsMargins(10, 0, 0, 0);
        frame_13 = new QFrame(leftMenu);
        frame_13->setObjectName(QString::fromUtf8("frame_13"));
        frame_13->setFrameShape(QFrame::StyledPanel);
        frame_13->setFrameShadow(QFrame::Raised);
        verticalLayout_18 = new QVBoxLayout(frame_13);
        verticalLayout_18->setObjectName(QString::fromUtf8("verticalLayout_18"));
        verticalLayout_18->setContentsMargins(0, 0, 0, 0);
        frame_14 = new QFrame(frame_13);
        frame_14->setObjectName(QString::fromUtf8("frame_14"));
        frame_14->setStyleSheet(QString::fromUtf8("border-image:url(\"C:/Users/Hema/Desktop/Project/22.png\");"));
        frame_14->setFrameShape(QFrame::StyledPanel);
        frame_14->setFrameShadow(QFrame::Raised);
        horizontalLayout_13 = new QHBoxLayout(frame_14);
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        label_8 = new QLabel(frame_14);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        QFont font;
        font.setFamilies({QString::fromUtf8("Tahoma")});
        font.setPointSize(40);
        font.setBold(true);
        font.setItalic(false);
        label_8->setFont(font);
        label_8->setStyleSheet(QString::fromUtf8("COLOR:rgb(255, 255, 255);\n"
"font: 700 40pt \"Tahoma\";"));

        horizontalLayout_13->addWidget(label_8);

        pushButton_26 = new QPushButton(frame_14);
        pushButton_26->setObjectName(QString::fromUtf8("pushButton_26"));
        pushButton_26->setMaximumSize(QSize(35, 35));
        pushButton_26->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_26->setStyleSheet(QString::fromUtf8("border-image:url(close.png);\n"
"border-radius:17px;"));
        pushButton_26->setIconSize(QSize(20, 20));

        horizontalLayout_13->addWidget(pushButton_26);


        verticalLayout_18->addWidget(frame_14, 0, Qt::AlignTop);

        pushButton_31 = new QPushButton(frame_13);
        pushButton_31->setObjectName(QString::fromUtf8("pushButton_31"));
        pushButton_31->setMinimumSize(QSize(0, 0));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial Black")});
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setItalic(false);
        pushButton_31->setFont(font1);
        pushButton_31->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_31->setStyleSheet(QString::fromUtf8("border-image: url(white.png);\n"
"padding:18px;\n"
"font: 900 11pt \"Arial Black\";\n"
"text-align:left;\n"
"color:rgb(103,58,183);"));

        verticalLayout_18->addWidget(pushButton_31);

        pushButton_28 = new QPushButton(frame_13);
        pushButton_28->setObjectName(QString::fromUtf8("pushButton_28"));
        pushButton_28->setFont(font1);
        pushButton_28->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_28->setStyleSheet(QString::fromUtf8("*{padding:18px;\n"
"text-align:left;\n"
"font: 900 11pt \"Arial Black\";\n"
"color:rgb(255, 255, 255);\n"
"}\n"
"\n"
"#pushButton_28::hover{\n"
"border-image: url(white.png);\n"
"color:rgb(103,58,183);\n"
"}"));

        verticalLayout_18->addWidget(pushButton_28);

        pushButton_29 = new QPushButton(frame_13);
        pushButton_29->setObjectName(QString::fromUtf8("pushButton_29"));
        pushButton_29->setFont(font1);
        pushButton_29->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_29->setStyleSheet(QString::fromUtf8("*{padding:18px;\n"
"text-align:left;\n"
"font: 900 11pt \"Arial Black\";\n"
"color:rgb(255, 255, 255);\n"
"}\n"
"\n"
"#pushButton_29::hover{\n"
"border-image: url(white.png);\n"
"color:rgb(103,58,183);\n"
"}"));

        verticalLayout_18->addWidget(pushButton_29);

        pushButton_30 = new QPushButton(frame_13);
        pushButton_30->setObjectName(QString::fromUtf8("pushButton_30"));
        pushButton_30->setFont(font1);
        pushButton_30->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_30->setStyleSheet(QString::fromUtf8("*{padding:18px;\n"
"text-align:left;\n"
"font: 900 11pt \"Arial Black\";\n"
"color:rgb(255, 255, 255);\n"
"}\n"
"\n"
"#pushButton_30::hover{\n"
"border-image: url(white.png);\n"
"color:rgb(103,58,183);\n"
"}"));

        verticalLayout_18->addWidget(pushButton_30);

        pushButton_32 = new QPushButton(frame_13);
        pushButton_32->setObjectName(QString::fromUtf8("pushButton_32"));
        pushButton_32->setFont(font1);
        pushButton_32->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_32->setStyleSheet(QString::fromUtf8("*{padding:18px;\n"
"text-align:left;\n"
"font: 900 11pt \"Arial Black\";\n"
"color:rgb(255, 255, 255);\n"
"}\n"
"\n"
"#pushButton_32::hover{\n"
"border-image: url(white.png);\n"
"color:rgb(103,58,183);\n"
"}"));

        verticalLayout_18->addWidget(pushButton_32);

        verticalSpacer = new QSpacerItem(20, 70, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_18->addItem(verticalSpacer);

        frame_15 = new QFrame(frame_13);
        frame_15->setObjectName(QString::fromUtf8("frame_15"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame_15->sizePolicy().hasHeightForWidth());
        frame_15->setSizePolicy(sizePolicy);
        frame_15->setFrameShape(QFrame::StyledPanel);
        frame_15->setFrameShadow(QFrame::Raised);
        verticalLayout_19 = new QVBoxLayout(frame_15);
        verticalLayout_19->setSpacing(9);
        verticalLayout_19->setObjectName(QString::fromUtf8("verticalLayout_19"));
        verticalLayout_19->setContentsMargins(0, 0, 0, 0);

        verticalLayout_18->addWidget(frame_15, 0, Qt::AlignTop);


        verticalLayout_17->addWidget(frame_13);


        horizontalLayout->addWidget(leftMenu);

        mainBody = new QWidget(Profile);
        mainBody->setObjectName(QString::fromUtf8("mainBody"));
        mainBody->setMinimumSize(QSize(0, 0));
        mainBody->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_16 = new QVBoxLayout(mainBody);
        verticalLayout_16->setObjectName(QString::fromUtf8("verticalLayout_16"));
        verticalLayout_16->setContentsMargins(0, 0, 0, 0);
        HeaderFrame_4 = new QWidget(mainBody);
        HeaderFrame_4->setObjectName(QString::fromUtf8("HeaderFrame_4"));
        HeaderFrame_4->setMaximumSize(QSize(16777215, 90));
        horizontalLayout_11 = new QHBoxLayout(HeaderFrame_4);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(0, 0, 0, 0);
        widget_7 = new QWidget(HeaderFrame_4);
        widget_7->setObjectName(QString::fromUtf8("widget_7"));
        widget_7->setMaximumSize(QSize(80, 16777215));
        horizontalLayout_12 = new QHBoxLayout(widget_7);
        horizontalLayout_12->setSpacing(0);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        horizontalLayout_12->setContentsMargins(0, 0, 20, 0);
        pushButton_25 = new QPushButton(widget_7);
        pushButton_25->setObjectName(QString::fromUtf8("pushButton_25"));
        pushButton_25->setMinimumSize(QSize(10, 20));
        pushButton_25->setMaximumSize(QSize(35, 35));
        pushButton_25->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_25->setStyleSheet(QString::fromUtf8("border-image:url(menubutton.jpg);"));

        horizontalLayout_12->addWidget(pushButton_25);


        horizontalLayout_11->addWidget(widget_7);

        label_2 = new QLabel(HeaderFrame_4);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Segoe UI")});
        font2.setPointSize(17);
        font2.setBold(true);
        font2.setItalic(false);
        label_2->setFont(font2);
        label_2->setStyleSheet(QString::fromUtf8("*{\n"
"	font: 700 17pt \"Segoe UI\";\n"
"color: rgb(0, 0, 0);\n"
"}"));

        horizontalLayout_11->addWidget(label_2);

        widget_8 = new QWidget(HeaderFrame_4);
        widget_8->setObjectName(QString::fromUtf8("widget_8"));

        horizontalLayout_11->addWidget(widget_8);


        verticalLayout_16->addWidget(HeaderFrame_4);

        mainFrame_4 = new QWidget(mainBody);
        mainFrame_4->setObjectName(QString::fromUtf8("mainFrame_4"));
        QFont font3;
        font3.setItalic(true);
        mainFrame_4->setFont(font3);
        mainFrame_4->setStyleSheet(QString::fromUtf8("border-image: url(white.png);"));
        textEdit = new QTextEdit(mainFrame_4);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setEnabled(false);
        textEdit->setGeometry(QRect(40, 20, 70, 40));
        textEdit->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        Email = new QLineEdit(mainFrame_4);
        Email->setObjectName(QString::fromUtf8("Email"));
        Email->setEnabled(false);
        Email->setGeometry(QRect(50, 50, 340, 40));
        Email->setFocusPolicy(Qt::StrongFocus);
        Email->setContextMenuPolicy(Qt::PreventContextMenu);
        Email->setStyleSheet(QString::fromUtf8("*{\n"
"border-image: url(textfield.png);\n"
"border-radius: 12px;font: 12pt \"Segoe UI\";\n"
"}"));
        Email->setFrame(true);
        Email->setEchoMode(QLineEdit::Normal);
        Email->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        Email->setCursorMoveStyle(Qt::LogicalMoveStyle);
        Email->setClearButtonEnabled(false);
        Name = new QLineEdit(mainFrame_4);
        Name->setObjectName(QString::fromUtf8("Name"));
        Name->setEnabled(false);
        Name->setGeometry(QRect(50, 150, 340, 40));
        Name->setFocusPolicy(Qt::StrongFocus);
        Name->setContextMenuPolicy(Qt::PreventContextMenu);
        Name->setStyleSheet(QString::fromUtf8("*{\n"
"border-image: url(textfield.png);\n"
"border-radius: 12px;font: 12pt \"Segoe UI\";\n"
"}"));
        Name->setFrame(true);
        Name->setEchoMode(QLineEdit::Normal);
        Name->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        Name->setCursorMoveStyle(Qt::LogicalMoveStyle);
        Name->setClearButtonEnabled(false);
        textEdit_2 = new QTextEdit(mainFrame_4);
        textEdit_2->setObjectName(QString::fromUtf8("textEdit_2"));
        textEdit_2->setEnabled(false);
        textEdit_2->setGeometry(QRect(40, 120, 90, 40));
        textEdit_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        textEdit_3 = new QTextEdit(mainFrame_4);
        textEdit_3->setObjectName(QString::fromUtf8("textEdit_3"));
        textEdit_3->setEnabled(false);
        textEdit_3->setGeometry(QRect(40, 220, 70, 40));
        textEdit_3->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        ID = new QLineEdit(mainFrame_4);
        ID->setObjectName(QString::fromUtf8("ID"));
        ID->setEnabled(false);
        ID->setGeometry(QRect(50, 250, 340, 40));
        ID->setFocusPolicy(Qt::StrongFocus);
        ID->setContextMenuPolicy(Qt::PreventContextMenu);
        ID->setStyleSheet(QString::fromUtf8("*{\n"
"border-image: url(textfield.png);\n"
"border-radius: 12px;font: 12pt \"Segoe UI\";\n"
"}"));
        ID->setFrame(true);
        ID->setEchoMode(QLineEdit::Normal);
        ID->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        ID->setCursorMoveStyle(Qt::LogicalMoveStyle);
        ID->setClearButtonEnabled(false);
        textEdit_4 = new QTextEdit(mainFrame_4);
        textEdit_4->setObjectName(QString::fromUtf8("textEdit_4"));
        textEdit_4->setEnabled(false);
        textEdit_4->setGeometry(QRect(490, 20, 181, 40));
        textEdit_4->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        Year = new QLineEdit(mainFrame_4);
        Year->setObjectName(QString::fromUtf8("Year"));
        Year->setEnabled(false);
        Year->setGeometry(QRect(500, 50, 340, 40));
        Year->setFocusPolicy(Qt::StrongFocus);
        Year->setContextMenuPolicy(Qt::PreventContextMenu);
        Year->setStyleSheet(QString::fromUtf8("*{\n"
"border-image: url(textfield.png);\n"
"border-radius: 12px;font: 12pt \"Segoe UI\";\n"
"}"));
        Year->setFrame(true);
        Year->setEchoMode(QLineEdit::Normal);
        Year->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        Year->setCursorMoveStyle(Qt::LogicalMoveStyle);
        Year->setClearButtonEnabled(false);
        textEdit_5 = new QTextEdit(mainFrame_4);
        textEdit_5->setObjectName(QString::fromUtf8("textEdit_5"));
        textEdit_5->setEnabled(false);
        textEdit_5->setGeometry(QRect(490, 120, 200, 40));
        textEdit_5->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        Title = new QLineEdit(mainFrame_4);
        Title->setObjectName(QString::fromUtf8("Title"));
        Title->setEnabled(false);
        Title->setGeometry(QRect(500, 150, 340, 40));
        Title->setFocusPolicy(Qt::StrongFocus);
        Title->setContextMenuPolicy(Qt::PreventContextMenu);
        Title->setStyleSheet(QString::fromUtf8("*{\n"
"border-image: url(textfield.png);\n"
"border-radius: 12px;font: 12pt \"Segoe UI\";\n"
"}"));
        Title->setFrame(true);
        Title->setEchoMode(QLineEdit::Normal);
        Title->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        Title->setCursorMoveStyle(Qt::LogicalMoveStyle);
        Title->setClearButtonEnabled(false);
        Edit = new QPushButton(mainFrame_4);
        Edit->setObjectName(QString::fromUtf8("Edit"));
        Edit->setGeometry(QRect(510, 410, 180, 40));
        Edit->setCursor(QCursor(Qt::PointingHandCursor));
        Edit->setStyleSheet(QString::fromUtf8("*{border-radius: 15px;\n"
"border-image:url(\"22.png\");\n"
"color:rgb(255, 255, 255);\n"
"font: 600 10pt \"Segoe UI\";\n"
"}\n"
"#Edit::hover{\n"
"border-image:url(\"buttom.png\");\n"
"}"));
        textEdit_6 = new QTextEdit(mainFrame_4);
        textEdit_6->setObjectName(QString::fromUtf8("textEdit_6"));
        textEdit_6->setEnabled(false);
        textEdit_6->setGeometry(QRect(490, 220, 200, 40));
        textEdit_6->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        Password = new QLineEdit(mainFrame_4);
        Password->setObjectName(QString::fromUtf8("Password"));
        Password->setEnabled(false);
        Password->setGeometry(QRect(500, 250, 340, 40));
        Password->setFocusPolicy(Qt::StrongFocus);
        Password->setContextMenuPolicy(Qt::PreventContextMenu);
        Password->setStyleSheet(QString::fromUtf8("*{\n"
"border-image: url(textfield.png);\n"
"border-radius: 12px;font: 12pt \"Segoe UI\";\n"
"}"));
        Password->setFrame(true);
        Password->setEchoMode(QLineEdit::Normal);
        Password->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        Password->setCursorMoveStyle(Qt::LogicalMoveStyle);
        Password->setClearButtonEnabled(false);
        Done = new QPushButton(mainFrame_4);
        Done->setObjectName(QString::fromUtf8("Done"));
        Done->setGeometry(QRect(520, 410, 160, 40));
        Done->setCursor(QCursor(Qt::PointingHandCursor));
        Done->setStyleSheet(QString::fromUtf8("*{border-radius: 15px;\n"
"border-image:url(\"22.png\");\n"
"\n"
"color:rgb(255, 255, 255);\n"
"font: 600 10pt \"Segoe UI\";\n"
"}\n"
"\n"
"#Done::hover{\n"
"border-image:url(\"buttom.png\");\n"
"}"));
        frame = new QFrame(mainFrame_4);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setEnabled(false);
        frame->setGeometry(QRect(940, 30, 180, 160));
        frame->setStyleSheet(QString::fromUtf8("border-image:url(\"qrcode.png\");"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        textEdit->raise();
        Email->raise();
        textEdit_2->raise();
        textEdit_3->raise();
        ID->raise();
        textEdit_4->raise();
        Year->raise();
        textEdit_5->raise();
        Title->raise();
        Edit->raise();
        textEdit_6->raise();
        Password->raise();
        Done->raise();
        frame->raise();
        Name->raise();

        verticalLayout_16->addWidget(mainFrame_4);


        horizontalLayout->addWidget(mainBody);


        retranslateUi(Profile);

        QMetaObject::connectSlotsByName(Profile);
    } // setupUi

    void retranslateUi(QDialog *Profile)
    {
        Profile->setWindowTitle(QCoreApplication::translate("Profile", "Dialog", nullptr));
        label_8->setText(QCoreApplication::translate("Profile", "UMS", nullptr));
        pushButton_26->setText(QString());
        pushButton_31->setText(QCoreApplication::translate("Profile", "Profile", nullptr));
        pushButton_28->setText(QCoreApplication::translate("Profile", "Current Courses", nullptr));
        pushButton_29->setText(QCoreApplication::translate("Profile", "Register Courses", nullptr));
        pushButton_30->setText(QCoreApplication::translate("Profile", "Finished Courses", nullptr));
        pushButton_32->setText(QCoreApplication::translate("Profile", " Log Out", nullptr));
        pushButton_25->setText(QString());
        label_2->setText(QCoreApplication::translate("Profile", "Your Profile", nullptr));
        textEdit->setHtml(QCoreApplication::translate("Profile", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; font-weight:696;\">Email</span></p></body></html>", nullptr));
        Email->setInputMask(QString());
        Email->setText(QString());
        Email->setPlaceholderText(QString());
        Name->setInputMask(QString());
        Name->setText(QString());
        Name->setPlaceholderText(QString());
        textEdit_2->setHtml(QCoreApplication::translate("Profile", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; font-weight:696;\">Name</span></p></body></html>", nullptr));
        textEdit_3->setHtml(QCoreApplication::translate("Profile", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; font-weight:696;\">ID</span></p></body></html>", nullptr));
        ID->setInputMask(QString());
        ID->setText(QString());
        ID->setPlaceholderText(QString());
        textEdit_4->setHtml(QCoreApplication::translate("Profile", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; font-weight:696;\">Accademic Year</span></p></body></html>", nullptr));
        Year->setInputMask(QString());
        Year->setText(QString());
        Year->setPlaceholderText(QString());
        textEdit_5->setHtml(QCoreApplication::translate("Profile", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; font-weight:696;\">Profissional Title</span></p></body></html>", nullptr));
        Title->setInputMask(QString());
        Title->setText(QString());
        Title->setPlaceholderText(QString());
        Edit->setText(QCoreApplication::translate("Profile", "Edit Password", nullptr));
        textEdit_6->setHtml(QCoreApplication::translate("Profile", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; font-weight:696;\">Password</span></p></body></html>", nullptr));
        Password->setInputMask(QString());
        Password->setText(QString());
        Password->setPlaceholderText(QString());
        Done->setText(QCoreApplication::translate("Profile", "Save Password", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Profile: public Ui_Profile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROFILE_H
