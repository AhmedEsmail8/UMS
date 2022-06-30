/********************************************************************************
** Form generated from reading UI file 'adminpage.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINPAGE_H
#define UI_ADMINPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_adminpage
{
public:
    QHBoxLayout *horizontalLayout;
    QWidget *leftMenu;
    QVBoxLayout *verticalLayout_24;
    QFrame *frame_19;
    QVBoxLayout *verticalLayout_25;
    QFrame *frame_20;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_10;
    QPushButton *pushButton_39;
    QPushButton *pushButton_40;
    QPushButton *pushButton_41;
    QPushButton *pushButton_43;
    QPushButton *pushButton_42;
    QPushButton *pushButton_47;
    QPushButton *pushButton_46;
    QPushButton *pushButton_44;
    QFrame *frame_21;
    QVBoxLayout *verticalLayout_26;
    QWidget *mainBody;
    QVBoxLayout *verticalLayout_27;
    QWidget *HeaderFrame_6;
    QHBoxLayout *horizontalLayout_18;
    QWidget *widget_11;
    QHBoxLayout *horizontalLayout_19;
    QPushButton *pushButton_45;
    QLabel *label_7;
    QWidget *widget_12;
    QWidget *mainFrame_6;
    QPushButton *addCourse;
    QPushButton *removeCourse;
    QLineEdit *Email_9;
    QLineEdit *Email_10;
    QTextEdit *textEdit_10;
    QTextEdit *textEdit_11;
    QLineEdit *Email_12;
    QTextEdit *textEdit_12;
    QTextEdit *textEdit_13;
    QComboBox *comboBox;
    QComboBox *comboBox_2;
    QFrame *frame;
    QTextEdit *textEdit_9;

    void setupUi(QDialog *adminpage)
    {
        if (adminpage->objectName().isEmpty())
            adminpage->setObjectName(QString::fromUtf8("adminpage"));
        adminpage->resize(1198, 700);
        adminpage->setMinimumSize(QSize(1198, 700));
        adminpage->setMaximumSize(QSize(1198, 700));
        adminpage->setStyleSheet(QString::fromUtf8("border-image: url(C:/Users/Hema/Desktop/Project/white.png);"));
        horizontalLayout = new QHBoxLayout(adminpage);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        leftMenu = new QWidget(adminpage);
        leftMenu->setObjectName(QString::fromUtf8("leftMenu"));
        leftMenu->setMinimumSize(QSize(280, 0));
        leftMenu->setMaximumSize(QSize(270, 678));
        leftMenu->setStyleSheet(QString::fromUtf8("border-image:url(\"C:/Users/Hema/Desktop/Project/buttom.png\");"));
        verticalLayout_24 = new QVBoxLayout(leftMenu);
        verticalLayout_24->setObjectName(QString::fromUtf8("verticalLayout_24"));
        verticalLayout_24->setContentsMargins(10, 0, 0, 0);
        frame_19 = new QFrame(leftMenu);
        frame_19->setObjectName(QString::fromUtf8("frame_19"));
        frame_19->setFrameShape(QFrame::StyledPanel);
        frame_19->setFrameShadow(QFrame::Raised);
        verticalLayout_25 = new QVBoxLayout(frame_19);
        verticalLayout_25->setObjectName(QString::fromUtf8("verticalLayout_25"));
        verticalLayout_25->setContentsMargins(0, 0, 0, 0);
        frame_20 = new QFrame(frame_19);
        frame_20->setObjectName(QString::fromUtf8("frame_20"));
        frame_20->setStyleSheet(QString::fromUtf8("border-image:url(\"C:/Users/Hema/Desktop/Project/buttom.png\");"));
        frame_20->setFrameShape(QFrame::StyledPanel);
        frame_20->setFrameShadow(QFrame::Raised);
        horizontalLayout_17 = new QHBoxLayout(frame_20);
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        label_10 = new QLabel(frame_20);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        QFont font;
        font.setFamily(QString::fromUtf8("Tahoma"));
        font.setPointSize(40);
        font.setBold(true);
        font.setItalic(false);
        label_10->setFont(font);
        label_10->setStyleSheet(QString::fromUtf8("COLOR:rgb(255, 255, 255);\n"
"font: 700 40pt \"Tahoma\";"));

        horizontalLayout_17->addWidget(label_10);

        pushButton_39 = new QPushButton(frame_20);
        pushButton_39->setObjectName(QString::fromUtf8("pushButton_39"));
        pushButton_39->setMaximumSize(QSize(35, 35));
        pushButton_39->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_39->setStyleSheet(QString::fromUtf8("border-image:url(C:/Users/Hema/Desktop/Project/close.png);\n"
"border-radius:17px;"));
        pushButton_39->setIconSize(QSize(20, 20));

        horizontalLayout_17->addWidget(pushButton_39);


        verticalLayout_25->addWidget(frame_20, 0, Qt::AlignTop);

        pushButton_40 = new QPushButton(frame_19);
        pushButton_40->setObjectName(QString::fromUtf8("pushButton_40"));
        pushButton_40->setMinimumSize(QSize(0, 0));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial Black"));
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setItalic(false);
        pushButton_40->setFont(font1);
        pushButton_40->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_40->setStyleSheet(QString::fromUtf8("*{padding:18px;\n"
"text-align:left;\n"
"font: 900 11pt \"Arial Black\";\n"
"color:rgb(255, 255, 255);\n"
"}\n"
"\n"
"#pushButton_40::hover{\n"
"color:rgb(161, 161, 161);\n"
"}"));

        verticalLayout_25->addWidget(pushButton_40);

        pushButton_41 = new QPushButton(frame_19);
        pushButton_41->setObjectName(QString::fromUtf8("pushButton_41"));
        pushButton_41->setFont(font1);
        pushButton_41->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_41->setStyleSheet(QString::fromUtf8("*{padding:18px;\n"
"text-align:left;\n"
"font: 900 11pt \"Arial Black\";\n"
"color:rgb(255, 255, 255);\n"
"}\n"
"\n"
"#pushButton_41::hover{\n"
"color:rgb(161, 161, 161);\n"
"}"));

        verticalLayout_25->addWidget(pushButton_41);

        pushButton_43 = new QPushButton(frame_19);
        pushButton_43->setObjectName(QString::fromUtf8("pushButton_43"));
        pushButton_43->setFont(font1);
        pushButton_43->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_43->setStyleSheet(QString::fromUtf8("*{padding:18px;\n"
"	font: 900 11pt \"Arial Black\";\n"
"text-align:left;\n"
"color:rgb(255, 255, 255);\n"
"}\n"
"\n"
"#pushButton_43::hover{\n"
"\n"
"color:rgb(161, 161, 161);\n"
"}"));

        verticalLayout_25->addWidget(pushButton_43);

        pushButton_42 = new QPushButton(frame_19);
        pushButton_42->setObjectName(QString::fromUtf8("pushButton_42"));
        pushButton_42->setFont(font1);
        pushButton_42->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_42->setStyleSheet(QString::fromUtf8("border-image: url(C:/Users/Hema/Desktop/Project/white.png);\n"
"padding:18px;\n"
"font: 900 11pt \"Arial Black\";\n"
"text-align:left;\n"
"border-top-left-radius:30px;\n"
"color:rgb(255, 0, 0);"));

        verticalLayout_25->addWidget(pushButton_42);

        pushButton_47 = new QPushButton(frame_19);
        pushButton_47->setObjectName(QString::fromUtf8("pushButton_47"));
        pushButton_47->setFont(font1);
        pushButton_47->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_47->setStyleSheet(QString::fromUtf8("*{padding:18px;\n"
"text-align:left;\n"
"font: 900 11pt \"Arial Black\";\n"
"color:rgb(255, 255, 255);\n"
"}\n"
"\n"
"#pushButton_47::hover{\n"
"color:rgb(161, 161, 161);\n"
"}"));

        verticalLayout_25->addWidget(pushButton_47);

        pushButton_46 = new QPushButton(frame_19);
        pushButton_46->setObjectName(QString::fromUtf8("pushButton_46"));
        pushButton_46->setFont(font1);
        pushButton_46->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_46->setStyleSheet(QString::fromUtf8("*{padding:18px;\n"
"text-align:left;\n"
"font: 900 11pt \"Arial Black\";\n"
"color:rgb(255, 255, 255);\n"
"}\n"
"\n"
"#pushButton_46::hover{\n"
"color:rgb(161, 161, 161);\n"
"}"));

        verticalLayout_25->addWidget(pushButton_46);

        pushButton_44 = new QPushButton(frame_19);
        pushButton_44->setObjectName(QString::fromUtf8("pushButton_44"));
        pushButton_44->setFont(font1);
        pushButton_44->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_44->setStyleSheet(QString::fromUtf8("*{padding:18px;\n"
"text-align:left;\n"
"font: 900 11pt \"Arial Black\";\n"
"color:rgb(255, 255, 255);\n"
"}\n"
"\n"
"#pushButton_44::hover{\n"
"color:rgb(161, 161, 161);\n"
"}"));

        verticalLayout_25->addWidget(pushButton_44);

        frame_21 = new QFrame(frame_19);
        frame_21->setObjectName(QString::fromUtf8("frame_21"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame_21->sizePolicy().hasHeightForWidth());
        frame_21->setSizePolicy(sizePolicy);
        frame_21->setFrameShape(QFrame::StyledPanel);
        frame_21->setFrameShadow(QFrame::Raised);
        verticalLayout_26 = new QVBoxLayout(frame_21);
        verticalLayout_26->setSpacing(9);
        verticalLayout_26->setObjectName(QString::fromUtf8("verticalLayout_26"));
        verticalLayout_26->setContentsMargins(0, 0, 0, 0);

        verticalLayout_25->addWidget(frame_21, 0, Qt::AlignTop);


        verticalLayout_24->addWidget(frame_19);


        horizontalLayout->addWidget(leftMenu);

        mainBody = new QWidget(adminpage);
        mainBody->setObjectName(QString::fromUtf8("mainBody"));
        mainBody->setMinimumSize(QSize(0, 0));
        mainBody->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_27 = new QVBoxLayout(mainBody);
        verticalLayout_27->setObjectName(QString::fromUtf8("verticalLayout_27"));
        verticalLayout_27->setContentsMargins(0, 0, 0, 0);
        HeaderFrame_6 = new QWidget(mainBody);
        HeaderFrame_6->setObjectName(QString::fromUtf8("HeaderFrame_6"));
        HeaderFrame_6->setMaximumSize(QSize(16777215, 90));
        horizontalLayout_18 = new QHBoxLayout(HeaderFrame_6);
        horizontalLayout_18->setObjectName(QString::fromUtf8("horizontalLayout_18"));
        horizontalLayout_18->setContentsMargins(0, 0, 0, 0);
        widget_11 = new QWidget(HeaderFrame_6);
        widget_11->setObjectName(QString::fromUtf8("widget_11"));
        widget_11->setMaximumSize(QSize(80, 16777215));
        horizontalLayout_19 = new QHBoxLayout(widget_11);
        horizontalLayout_19->setSpacing(0);
        horizontalLayout_19->setObjectName(QString::fromUtf8("horizontalLayout_19"));
        horizontalLayout_19->setContentsMargins(0, 0, 20, 0);
        pushButton_45 = new QPushButton(widget_11);
        pushButton_45->setObjectName(QString::fromUtf8("pushButton_45"));
        pushButton_45->setMinimumSize(QSize(10, 20));
        pushButton_45->setMaximumSize(QSize(35, 35));
        pushButton_45->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_45->setStyleSheet(QString::fromUtf8("border-image:url(C:/Users/Hema/Desktop/Project/menubutton.jpg);"));

        horizontalLayout_19->addWidget(pushButton_45);


        horizontalLayout_18->addWidget(widget_11);

        label_7 = new QLabel(HeaderFrame_6);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Segoe UI"));
        font2.setPointSize(17);
        font2.setBold(true);
        font2.setItalic(false);
        label_7->setFont(font2);
        label_7->setStyleSheet(QString::fromUtf8("*{\n"
"	font: 700 17pt \"Segoe UI\";\n"
"color: rgb(0, 0, 0);\n"
"}"));

        horizontalLayout_18->addWidget(label_7);

        widget_12 = new QWidget(HeaderFrame_6);
        widget_12->setObjectName(QString::fromUtf8("widget_12"));

        horizontalLayout_18->addWidget(widget_12);


        verticalLayout_27->addWidget(HeaderFrame_6);

        mainFrame_6 = new QWidget(mainBody);
        mainFrame_6->setObjectName(QString::fromUtf8("mainFrame_6"));
        mainFrame_6->setMinimumSize(QSize(0, 0));
        QFont font3;
        font3.setItalic(true);
        mainFrame_6->setFont(font3);
        mainFrame_6->setStyleSheet(QString::fromUtf8("border-image: url(C:/Users/Hema/Desktop/Project/white.jpg);"));
        addCourse = new QPushButton(mainFrame_6);
        addCourse->setObjectName(QString::fromUtf8("addCourse"));
        addCourse->setGeometry(QRect(310, 460, 160, 40));
        addCourse->setCursor(QCursor(Qt::PointingHandCursor));
        addCourse->setStyleSheet(QString::fromUtf8("*{\n"
"border-radius: 15px;\n"
"border-image:url(\"C:/Users/Hema/Desktop/Project/buttom.png\");\n"
"\n"
"color:rgb(255, 255, 255);\n"
"font: 600 10pt \"Segoe UI\";\n"
"}\n"
"\n"
"#addCourse::hover{\n"
"color:rgb(161, 161, 161);\n"
"}"));
        removeCourse = new QPushButton(mainFrame_6);
        removeCourse->setObjectName(QString::fromUtf8("removeCourse"));
        removeCourse->setGeometry(QRect(80, 520, 120, 29));
        Email_9 = new QLineEdit(mainFrame_6);
        Email_9->setObjectName(QString::fromUtf8("Email_9"));
        Email_9->setEnabled(false);
        Email_9->setGeometry(QRect(350, 50, 390, 40));
        Email_9->setFocusPolicy(Qt::StrongFocus);
        Email_9->setContextMenuPolicy(Qt::PreventContextMenu);
        Email_9->setStyleSheet(QString::fromUtf8("*{\n"
"border-image: url(C:/Users/Hema/Desktop/Project/textfield.png);\n"
"border-radius: 12px;font: 12pt \"Segoe UI\";\n"
"}"));
        Email_9->setFrame(true);
        Email_9->setEchoMode(QLineEdit::Normal);
        Email_9->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        Email_9->setCursorMoveStyle(Qt::LogicalMoveStyle);
        Email_9->setClearButtonEnabled(false);
        Email_10 = new QLineEdit(mainFrame_6);
        Email_10->setObjectName(QString::fromUtf8("Email_10"));
        Email_10->setEnabled(false);
        Email_10->setGeometry(QRect(350, 118, 390, 40));
        Email_10->setFocusPolicy(Qt::StrongFocus);
        Email_10->setContextMenuPolicy(Qt::PreventContextMenu);
        Email_10->setStyleSheet(QString::fromUtf8("*{\n"
"border-image: url(C:/Users/Hema/Desktop/Project/textfield.png);\n"
"border-radius: 12px;font: 12pt \"Segoe UI\";\n"
"}"));
        Email_10->setFrame(true);
        Email_10->setEchoMode(QLineEdit::Normal);
        Email_10->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        Email_10->setCursorMoveStyle(Qt::LogicalMoveStyle);
        Email_10->setClearButtonEnabled(false);
        textEdit_10 = new QTextEdit(mainFrame_6);
        textEdit_10->setObjectName(QString::fromUtf8("textEdit_10"));
        textEdit_10->setEnabled(false);
        textEdit_10->setGeometry(QRect(40, 120, 150, 40));
        textEdit_10->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 255, 255, 255), stop:1 rgba(255, 255, 255, 255));"));
        textEdit_10->setFrameShape(QFrame::NoFrame);
        textEdit_11 = new QTextEdit(mainFrame_6);
        textEdit_11->setObjectName(QString::fromUtf8("textEdit_11"));
        textEdit_11->setEnabled(false);
        textEdit_11->setGeometry(QRect(40, 192, 170, 40));
        textEdit_11->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 255, 255, 255), stop:1 rgba(255, 255, 255, 255));"));
        textEdit_11->setFrameShape(QFrame::NoFrame);
        Email_12 = new QLineEdit(mainFrame_6);
        Email_12->setObjectName(QString::fromUtf8("Email_12"));
        Email_12->setEnabled(false);
        Email_12->setGeometry(QRect(350, 260, 390, 40));
        Email_12->setFocusPolicy(Qt::StrongFocus);
        Email_12->setContextMenuPolicy(Qt::PreventContextMenu);
        Email_12->setStyleSheet(QString::fromUtf8("*{\n"
"border-image: url(C:/Users/Hema/Desktop/Project/textfield.png);\n"
"border-radius: 12px;font: 12pt \"Segoe UI\";\n"
"}"));
        Email_12->setFrame(true);
        Email_12->setEchoMode(QLineEdit::Normal);
        Email_12->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        Email_12->setCursorMoveStyle(Qt::LogicalMoveStyle);
        Email_12->setClearButtonEnabled(false);
        textEdit_12 = new QTextEdit(mainFrame_6);
        textEdit_12->setObjectName(QString::fromUtf8("textEdit_12"));
        textEdit_12->setEnabled(false);
        textEdit_12->setGeometry(QRect(40, 262, 310, 40));
        textEdit_12->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 255, 255, 255), stop:1 rgba(255, 255, 255, 255));"));
        textEdit_12->setFrameShape(QFrame::NoFrame);
        textEdit_13 = new QTextEdit(mainFrame_6);
        textEdit_13->setObjectName(QString::fromUtf8("textEdit_13"));
        textEdit_13->setEnabled(false);
        textEdit_13->setGeometry(QRect(40, 333, 190, 40));
        textEdit_13->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 255, 255, 255), stop:1 rgba(255, 255, 255, 255));"));
        textEdit_13->setFrameShape(QFrame::NoFrame);
        comboBox = new QComboBox(mainFrame_6);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(350, 190, 390, 40));
        comboBox->setStyleSheet(QString::fromUtf8("*{\n"
"border-image: url(C:/Users/Hema/Desktop/Project/textfield.png);\n"
"border-radius: 12px;font: 12pt \"Segoe UI\";\n"
"}"));
        comboBox->setEditable(false);
        comboBox->setInsertPolicy(QComboBox::InsertAtBottom);
        comboBox->setDuplicatesEnabled(false);
        comboBox->setFrame(true);
        comboBox_2 = new QComboBox(mainFrame_6);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setGeometry(QRect(350, 330, 390, 40));
        comboBox_2->setStyleSheet(QString::fromUtf8("*{\n"
"border-image: url(C:/Users/Hema/Desktop/Project/textfield.png);\n"
"border-radius: 12px;font: 12pt \"Segoe UI\";\n"
"}"));
        comboBox_2->setEditable(false);
        comboBox_2->setInsertPolicy(QComboBox::InsertAtBottom);
        comboBox_2->setDuplicatesEnabled(false);
        comboBox_2->setFrame(true);
        frame = new QFrame(mainFrame_6);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(750, 0, 600, 580));
        frame->setStyleSheet(QString::fromUtf8("border-image: url(C:/Users/Hema/Desktop/Project/Admin.jpg);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        textEdit_9 = new QTextEdit(mainFrame_6);
        textEdit_9->setObjectName(QString::fromUtf8("textEdit_9"));
        textEdit_9->setEnabled(false);
        textEdit_9->setGeometry(QRect(40, 50, 150, 40));
        textEdit_9->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 255, 255, 255), stop:1 rgba(255, 255, 255, 255));\n"
"color: rgb(0, 0, 0);"));
        textEdit_9->setFrameShape(QFrame::NoFrame);
        textEdit_9->setFrameShadow(QFrame::Sunken);
        addCourse->raise();
        removeCourse->raise();
        Email_9->raise();
        Email_10->raise();
        textEdit_10->raise();
        textEdit_11->raise();
        textEdit_12->raise();
        textEdit_13->raise();
        comboBox->raise();
        Email_12->raise();
        comboBox_2->raise();
        frame->raise();
        textEdit_9->raise();

        verticalLayout_27->addWidget(mainFrame_6);


        horizontalLayout->addWidget(mainBody);


        retranslateUi(adminpage);
        QObject::connect(removeCourse, SIGNAL(clicked()), adminpage, SLOT(close()));

        QMetaObject::connectSlotsByName(adminpage);
    } // setupUi

    void retranslateUi(QDialog *adminpage)
    {
        adminpage->setWindowTitle(QCoreApplication::translate("adminpage", "Dialog", nullptr));
        label_10->setText(QCoreApplication::translate("adminpage", "UMS", nullptr));
        pushButton_39->setText(QString());
        pushButton_40->setText(QCoreApplication::translate("adminpage", "Profile", nullptr));
        pushButton_41->setText(QCoreApplication::translate("adminpage", "Add Student", nullptr));
        pushButton_43->setText(QCoreApplication::translate("adminpage", "Students Data", nullptr));
        pushButton_42->setText(QCoreApplication::translate("adminpage", "Add Course", nullptr));
        pushButton_47->setText(QCoreApplication::translate("adminpage", "Courses Data", nullptr));
        pushButton_46->setText(QCoreApplication::translate("adminpage", "Courses Prerequistes", nullptr));
        pushButton_44->setText(QCoreApplication::translate("adminpage", " Log Out", nullptr));
        pushButton_45->setText(QString());
        label_7->setText(QCoreApplication::translate("adminpage", "Add Course", nullptr));
        addCourse->setText(QCoreApplication::translate("adminpage", "Add Course", nullptr));
        removeCourse->setText(QCoreApplication::translate("adminpage", "Remove Course", nullptr));
        Email_9->setInputMask(QString());
        Email_9->setText(QString());
        Email_9->setPlaceholderText(QString());
        Email_10->setInputMask(QString());
        Email_10->setText(QString());
        Email_10->setPlaceholderText(QString());
        textEdit_10->setHtml(QCoreApplication::translate("adminpage", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; font-weight:696;\">Course Code</span></p></body></html>", nullptr));
        textEdit_11->setHtml(QCoreApplication::translate("adminpage", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; font-weight:696;\">Course Hours</span></p></body></html>", nullptr));
        Email_12->setInputMask(QString());
        Email_12->setText(QString());
        Email_12->setPlaceholderText(QString());
        textEdit_12->setHtml(QCoreApplication::translate("adminpage", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; font-weight:696;\">Maximum Number of Students</span></p></body></html>", nullptr));
        textEdit_13->setHtml(QCoreApplication::translate("adminpage", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; font-weight:696;\">Required Courses</span></p></body></html>", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("adminpage", "0 Hours", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("adminpage", "1 Hour", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("adminpage", "2 Hours", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("adminpage", "3 Hours", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("adminpage", "4 Hours", nullptr));

        comboBox->setPlaceholderText(QString());
        comboBox_2->setItemText(0, QCoreApplication::translate("adminpage", "OOP", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("adminpage", "Data Structure", nullptr));
        comboBox_2->setItemText(2, QCoreApplication::translate("adminpage", "English", nullptr));
        comboBox_2->setItemText(3, QCoreApplication::translate("adminpage", "Business", nullptr));
        comboBox_2->setItemText(4, QCoreApplication::translate("adminpage", "AI", nullptr));
        comboBox_2->setItemText(5, QCoreApplication::translate("adminpage", "Introduction to computer science", nullptr));
        comboBox_2->setItemText(6, QCoreApplication::translate("adminpage", "Logic Design", nullptr));
        comboBox_2->setItemText(7, QCoreApplication::translate("adminpage", "Electronics", nullptr));

        comboBox_2->setPlaceholderText(QString());
        textEdit_9->setHtml(QCoreApplication::translate("adminpage", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; font-weight:696;\">Course Name</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class adminpage: public Ui_adminpage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINPAGE_H
