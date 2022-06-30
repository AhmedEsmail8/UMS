/********************************************************************************
** Form generated from reading UI file 'course_data.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COURSE_DATA_H
#define UI_COURSE_DATA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Course_Data
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
    QLineEdit *Hours;
    QLineEdit *Name;
    QTextEdit *id;
    QLineEdit *ID;
    QLineEdit *MaxNum;
    QTextEdit *name;
    QTextEdit *requiredcourses;
    QTextEdit *hours;
    QTextEdit *maxnum;
    QComboBox *RequiredCourses;
    QPushButton *Edit;
    QPushButton *Done;
    QTextEdit *textEdit_14;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_3;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer_3;

    void setupUi(QDialog *Course_Data)
    {
        if (Course_Data->objectName().isEmpty())
            Course_Data->setObjectName(QString::fromUtf8("Course_Data"));
        Course_Data->resize(1198, 700);
        Course_Data->setMinimumSize(QSize(1198, 700));
        Course_Data->setMaximumSize(QSize(1198, 700));
        Course_Data->setStyleSheet(QString::fromUtf8("border-image: url(white.png);"));
        horizontalLayout = new QHBoxLayout(Course_Data);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        leftMenu = new QWidget(Course_Data);
        leftMenu->setObjectName(QString::fromUtf8("leftMenu"));
        leftMenu->setMinimumSize(QSize(280, 0));
        leftMenu->setMaximumSize(QSize(270, 678));
        leftMenu->setStyleSheet(QString::fromUtf8("border-image:url(\"22.png\");"));
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
        frame_20->setStyleSheet(QString::fromUtf8("border-image:url(\"C:/Users/Hema/Desktop/Project/22.png\");"));
        frame_20->setFrameShape(QFrame::StyledPanel);
        frame_20->setFrameShadow(QFrame::Raised);
        horizontalLayout_17 = new QHBoxLayout(frame_20);
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        label_10 = new QLabel(frame_20);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        QFont font;
        font.setFamilies({QString::fromUtf8("Tahoma")});
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
        pushButton_39->setStyleSheet(QString::fromUtf8("border-image:url(close.png);\n"
"border-radius:17px;"));
        pushButton_39->setIconSize(QSize(20, 20));

        horizontalLayout_17->addWidget(pushButton_39);


        verticalLayout_25->addWidget(frame_20, 0, Qt::AlignTop);

        pushButton_40 = new QPushButton(frame_19);
        pushButton_40->setObjectName(QString::fromUtf8("pushButton_40"));
        pushButton_40->setMinimumSize(QSize(0, 0));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial Black")});
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
"border-image: url(white.png);\n"
"color:rgb(103,58,183);\n"
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
"border-image: url(white.png);\n"
"color:rgb(103,58,183);\n"
"}"));

        verticalLayout_25->addWidget(pushButton_41);

        pushButton_43 = new QPushButton(frame_19);
        pushButton_43->setObjectName(QString::fromUtf8("pushButton_43"));
        pushButton_43->setFont(font1);
        pushButton_43->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_43->setStyleSheet(QString::fromUtf8("*{padding:18px;\n"
"text-align:left;\n"
"font: 900 11pt \"Arial Black\";\n"
"color:rgb(255, 255, 255);\n"
"}\n"
"\n"
"#pushButton_43::hover{\n"
"border-image: url(white.png);\n"
"color:rgb(103,58,183);\n"
"}"));

        verticalLayout_25->addWidget(pushButton_43);

        pushButton_42 = new QPushButton(frame_19);
        pushButton_42->setObjectName(QString::fromUtf8("pushButton_42"));
        pushButton_42->setFont(font1);
        pushButton_42->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_42->setStyleSheet(QString::fromUtf8("*{padding:18px;\n"
"text-align:left;\n"
"font: 900 11pt \"Arial Black\";\n"
"color:rgb(255, 255, 255);\n"
"}\n"
"\n"
"#pushButton_42::hover{\n"
"border-image: url(white.png);\n"
"color:rgb(103,58,183);\n"
"}"));

        verticalLayout_25->addWidget(pushButton_42);

        pushButton_47 = new QPushButton(frame_19);
        pushButton_47->setObjectName(QString::fromUtf8("pushButton_47"));
        pushButton_47->setFont(font1);
        pushButton_47->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_47->setStyleSheet(QString::fromUtf8("border-image: url(white.png);\n"
"padding:18px;\n"
"font: 900 11pt \"Arial Black\";\n"
"text-align:left;\n"
"color:rgb(103,58,183);"));

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
"border-image: url(white.png);\n"
"color:rgb(103,58,183);\n"
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
"border-image: url(white.png);\n"
"color:rgb(103,58,183);\n"
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

        mainBody = new QWidget(Course_Data);
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
        pushButton_45->setStyleSheet(QString::fromUtf8("border-image:url(menubutton.jpg);"));

        horizontalLayout_19->addWidget(pushButton_45);


        horizontalLayout_18->addWidget(widget_11);

        label_7 = new QLabel(HeaderFrame_6);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Segoe UI")});
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
        mainFrame_6->setStyleSheet(QString::fromUtf8("border-image: url(white.png);"));
        Hours = new QLineEdit(mainFrame_6);
        Hours->setObjectName(QString::fromUtf8("Hours"));
        Hours->setEnabled(false);
        Hours->setGeometry(QRect(310, 180, 390, 40));
        Hours->setFocusPolicy(Qt::StrongFocus);
        Hours->setContextMenuPolicy(Qt::PreventContextMenu);
        Hours->setStyleSheet(QString::fromUtf8("*{\n"
"border-image: url(textfield.png);\n"
"border-radius: 12px;font: 12pt \"Segoe UI\";\n"
"}"));
        Hours->setFrame(true);
        Hours->setEchoMode(QLineEdit::Normal);
        Hours->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        Hours->setCursorMoveStyle(Qt::LogicalMoveStyle);
        Hours->setClearButtonEnabled(false);
        Name = new QLineEdit(mainFrame_6);
        Name->setObjectName(QString::fromUtf8("Name"));
        Name->setEnabled(false);
        Name->setGeometry(QRect(310, 108, 390, 40));
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
        id = new QTextEdit(mainFrame_6);
        id->setObjectName(QString::fromUtf8("id"));
        id->setEnabled(false);
        id->setGeometry(QRect(20, 40, 150, 40));
        id->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 255, 255, 255), stop:1 rgba(255, 255, 255, 255));"));
        id->setFrameShape(QFrame::NoFrame);
        ID = new QLineEdit(mainFrame_6);
        ID->setObjectName(QString::fromUtf8("ID"));
        ID->setEnabled(true);
        ID->setGeometry(QRect(310, 40, 390, 40));
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
        MaxNum = new QLineEdit(mainFrame_6);
        MaxNum->setObjectName(QString::fromUtf8("MaxNum"));
        MaxNum->setEnabled(false);
        MaxNum->setGeometry(QRect(310, 250, 390, 40));
        MaxNum->setFocusPolicy(Qt::StrongFocus);
        MaxNum->setContextMenuPolicy(Qt::PreventContextMenu);
        MaxNum->setStyleSheet(QString::fromUtf8("*{\n"
"border-image: url(textfield.png);\n"
"border-radius: 12px;font: 12pt \"Segoe UI\";\n"
"}"));
        MaxNum->setFrame(true);
        MaxNum->setEchoMode(QLineEdit::Normal);
        MaxNum->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        MaxNum->setCursorMoveStyle(Qt::LogicalMoveStyle);
        MaxNum->setClearButtonEnabled(false);
        name = new QTextEdit(mainFrame_6);
        name->setObjectName(QString::fromUtf8("name"));
        name->setEnabled(false);
        name->setGeometry(QRect(20, 110, 150, 40));
        name->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 255, 255, 255), stop:1 rgba(255, 255, 255, 255));\n"
"color: rgb(0, 0, 0);"));
        name->setFrameShape(QFrame::NoFrame);
        name->setFrameShadow(QFrame::Sunken);
        requiredcourses = new QTextEdit(mainFrame_6);
        requiredcourses->setObjectName(QString::fromUtf8("requiredcourses"));
        requiredcourses->setEnabled(false);
        requiredcourses->setGeometry(QRect(20, 323, 190, 40));
        requiredcourses->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 255, 255, 255), stop:1 rgba(255, 255, 255, 255));"));
        requiredcourses->setFrameShape(QFrame::NoFrame);
        hours = new QTextEdit(mainFrame_6);
        hours->setObjectName(QString::fromUtf8("hours"));
        hours->setEnabled(false);
        hours->setGeometry(QRect(20, 182, 310, 40));
        hours->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 255, 255, 255), stop:1 rgba(255, 255, 255, 255));"));
        hours->setFrameShape(QFrame::NoFrame);
        maxnum = new QTextEdit(mainFrame_6);
        maxnum->setObjectName(QString::fromUtf8("maxnum"));
        maxnum->setEnabled(false);
        maxnum->setGeometry(QRect(20, 252, 310, 40));
        maxnum->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 255, 255, 255), stop:1 rgba(255, 255, 255, 255));"));
        maxnum->setFrameShape(QFrame::NoFrame);
        RequiredCourses = new QComboBox(mainFrame_6);
        RequiredCourses->setObjectName(QString::fromUtf8("RequiredCourses"));
        RequiredCourses->setEnabled(false);
        RequiredCourses->setGeometry(QRect(310, 320, 390, 40));
        RequiredCourses->setStyleSheet(QString::fromUtf8("*{\n"
"border-image: url(textfield.png);\n"
"border-radius: 12px;font: 12pt \"Segoe UI\";\n"
"}"));
        RequiredCourses->setEditable(false);
        RequiredCourses->setInsertPolicy(QComboBox::InsertAtBottom);
        RequiredCourses->setDuplicatesEnabled(false);
        RequiredCourses->setFrame(true);
        Edit = new QPushButton(mainFrame_6);
        Edit->setObjectName(QString::fromUtf8("Edit"));
        Edit->setGeometry(QRect(300, 460, 160, 40));
        Edit->setCursor(QCursor(Qt::PointingHandCursor));
        Edit->setStyleSheet(QString::fromUtf8("*{\n"
"border-radius: 15px;\n"
"border-image:url(\"22.png\");\n"
"\n"
"color:rgb(255, 255, 255);\n"
"font: 600 10pt \"Segoe UI\";\n"
"}\n"
"\n"
"#Edit::hover{\n"
"border-image:url(\"buttom.png\");\n"
"\n"
"}"));
        Done = new QPushButton(mainFrame_6);
        Done->setObjectName(QString::fromUtf8("Done"));
        Done->setGeometry(QRect(310, 460, 140, 40));
        Done->setCursor(QCursor(Qt::PointingHandCursor));
        Done->setStyleSheet(QString::fromUtf8("*{\n"
"border-radius: 15px;\n"
"border-image:url(\"22.png\");\n"
"\n"
"color:rgb(255, 255, 255);\n"
"font: 600 10pt \"Segoe UI\";\n"
"}\n"
"\n"
"#Done::hover{\n"
"border-image:url(\"buttom.png\");\n"
"\n"
"}"));
        textEdit_14 = new QTextEdit(mainFrame_6);
        textEdit_14->setObjectName(QString::fromUtf8("textEdit_14"));
        textEdit_14->setEnabled(false);
        textEdit_14->setGeometry(QRect(755, 30, 480, 33));
        textEdit_14->setMaximumSize(QSize(16777215, 33));
        textEdit_14->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 255, 255, 255), stop:1 rgba(255, 255, 255, 255));"));
        textEdit_14->setFrameShape(QFrame::NoFrame);
        scrollArea = new QScrollArea(mainFrame_6);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(760, 60, 400, 320));
        scrollArea->setMinimumSize(QSize(250, 100));
        scrollArea->setStyleSheet(QString::fromUtf8("*{border-radius: 23px;\n"
"border-image: url(textfield.png);\n"
"}"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_3"));
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 400, 320));
        verticalLayout_3 = new QVBoxLayout(scrollAreaWidgetContents_3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalSpacer_3 = new QSpacerItem(20, 295, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_3);

        scrollArea->setWidget(scrollAreaWidgetContents_3);
        Name->raise();
        id->raise();
        ID->raise();
        name->raise();
        requiredcourses->raise();
        hours->raise();
        maxnum->raise();
        RequiredCourses->raise();
        Hours->raise();
        MaxNum->raise();
        Edit->raise();
        Done->raise();
        textEdit_14->raise();
        scrollArea->raise();

        verticalLayout_27->addWidget(mainFrame_6);


        horizontalLayout->addWidget(mainBody);


        retranslateUi(Course_Data);

        QMetaObject::connectSlotsByName(Course_Data);
    } // setupUi

    void retranslateUi(QDialog *Course_Data)
    {
        Course_Data->setWindowTitle(QCoreApplication::translate("Course_Data", "Dialog", nullptr));
        label_10->setText(QCoreApplication::translate("Course_Data", "UMS", nullptr));
        pushButton_39->setText(QString());
        pushButton_40->setText(QCoreApplication::translate("Course_Data", "Profile", nullptr));
        pushButton_41->setText(QCoreApplication::translate("Course_Data", "Add Student", nullptr));
        pushButton_43->setText(QCoreApplication::translate("Course_Data", "Students Data", nullptr));
        pushButton_42->setText(QCoreApplication::translate("Course_Data", "Add Course", nullptr));
        pushButton_47->setText(QCoreApplication::translate("Course_Data", "Courses Data", nullptr));
        pushButton_46->setText(QCoreApplication::translate("Course_Data", "Pending Requests", nullptr));
        pushButton_44->setText(QCoreApplication::translate("Course_Data", " Log Out", nullptr));
        pushButton_45->setText(QString());
        label_7->setText(QCoreApplication::translate("Course_Data", "Course Data", nullptr));
        Hours->setInputMask(QString());
        Hours->setText(QString());
        Hours->setPlaceholderText(QString());
        Name->setInputMask(QString());
        Name->setText(QString());
        Name->setPlaceholderText(QString());
        id->setHtml(QCoreApplication::translate("Course_Data", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; font-weight:696;\">Course Code</span></p></body></html>", nullptr));
        ID->setInputMask(QString());
        ID->setText(QString());
        ID->setPlaceholderText(QString());
        MaxNum->setInputMask(QString());
        MaxNum->setText(QString());
        MaxNum->setPlaceholderText(QString());
        name->setHtml(QCoreApplication::translate("Course_Data", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; font-weight:696;\">Course Name</span></p></body></html>", nullptr));
        requiredcourses->setHtml(QCoreApplication::translate("Course_Data", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; font-weight:696;\">Required Courses</span></p></body></html>", nullptr));
        hours->setHtml(QCoreApplication::translate("Course_Data", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; font-weight:696;\">Hours</span></p></body></html>", nullptr));
        maxnum->setHtml(QCoreApplication::translate("Course_Data", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; font-weight:696;\">Maximium Number of Students </span></p></body></html>", nullptr));
        RequiredCourses->setPlaceholderText(QString());
        Edit->setText(QCoreApplication::translate("Course_Data", "Edit Course", nullptr));
        Done->setText(QCoreApplication::translate("Course_Data", "Done", nullptr));
        textEdit_14->setHtml(QCoreApplication::translate("Course_Data", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; font-weight:696;\">Required Courses</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Course_Data: public Ui_Course_Data {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COURSE_DATA_H
