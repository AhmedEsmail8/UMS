/********************************************************************************
** Form generated from reading UI file 'add_student.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_STUDENT_H
#define UI_ADD_STUDENT_H

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

class Ui_Add_Student
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
    QLineEdit *Name;
    QLineEdit *ID;
    QTextEdit *textEdit_10;
    QTextEdit *textEdit_11;
    QLineEdit *Year;
    QTextEdit *textEdit_12;
    QTextEdit *textEdit_13;
    QComboBox *CurrentCourses;
    QComboBox *FinisheCourses;
    QTextEdit *textEdit_9;
    QTextEdit *Pass;
    QLineEdit *Password;
    QTextEdit *textEdit_14;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QTextEdit *textEdit_15;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDialog *Add_Student)
    {
        if (Add_Student->objectName().isEmpty())
            Add_Student->setObjectName(QString::fromUtf8("Add_Student"));
        Add_Student->resize(1198, 700);
        Add_Student->setMinimumSize(QSize(1198, 700));
        Add_Student->setMaximumSize(QSize(1198, 700));
        Add_Student->setSizeIncrement(QSize(0, 0));
        Add_Student->setStyleSheet(QString::fromUtf8("border-image: url(C:/Users/Hema/Desktop/Project/white.png);"));
        horizontalLayout = new QHBoxLayout(Add_Student);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        leftMenu = new QWidget(Add_Student);
        leftMenu->setObjectName(QString::fromUtf8("leftMenu"));
        leftMenu->setMinimumSize(QSize(280, 0));
        leftMenu->setMaximumSize(QSize(270, 678));
        leftMenu->setStyleSheet(QString::fromUtf8("border-image:url(\"C:/Users/Hema/Desktop/Project/22.png\");"));
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
"border-image: url(C:/Users/Hema/Desktop/Project/white.png);\n"
"border-top-left-radius:30px;\n"
"border-bottom-left-radius:30px;\n"
"color:rgb(103,58,183);\n"
"}"));

        verticalLayout_25->addWidget(pushButton_40);

        pushButton_41 = new QPushButton(frame_19);
        pushButton_41->setObjectName(QString::fromUtf8("pushButton_41"));
        pushButton_41->setFont(font1);
        pushButton_41->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_41->setStyleSheet(QString::fromUtf8("border-image: url(C:/Users/Hema/Desktop/Project/white.png);\n"
"padding:18px;\n"
"font: 900 11pt \"Arial Black\";\n"
"text-align:left;\n"
"border-top-left-radius:30px;\n"
"border-bottom-left-radius:30px;\n"
"color:rgb(103,58,183);"));

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
"border-image: url(C:/Users/Hema/Desktop/Project/white.png);\n"
"border-top-left-radius:30px;\n"
"border-bottom-left-radius:30px;\n"
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
"border-image: url(C:/Users/Hema/Desktop/Project/white.png);\n"
"border-top-left-radius:30px;\n"
"border-bottom-left-radius:30px;\n"
"color:rgb(103,58,183);\n"
"}"));

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
"border-image: url(C:/Users/Hema/Desktop/Project/white.png);\n"
"border-top-left-radius:30px;\n"
"border-bottom-left-radius:30px;\n"
"color:rgb(103,58,183);\n"
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
"border-image: url(C:/Users/Hema/Desktop/Project/white.png);\n"
"border-top-left-radius:30px;\n"
"border-bottom-left-radius:30px;\n"
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
"border-image: url(C:/Users/Hema/Desktop/Project/white.png);\n"
"border-top-left-radius:30px;\n"
"border-bottom-left-radius:30px;\n"
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

        mainBody = new QWidget(Add_Student);
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
        mainFrame_6->setStyleSheet(QString::fromUtf8("border-image: url(C:/Users/Hema/Desktop/Project/white.png);"));
        addCourse = new QPushButton(mainFrame_6);
        addCourse->setObjectName(QString::fromUtf8("addCourse"));
        addCourse->setGeometry(QRect(310, 500, 160, 40));
        addCourse->setCursor(QCursor(Qt::PointingHandCursor));
        addCourse->setStyleSheet(QString::fromUtf8("*{\n"
"border-radius: 15px;\n"
"border-image:url(\"C:/Users/Hema/Desktop/Project/22.png\");\n"
"\n"
"color:rgb(255, 255, 255);\n"
"font: 600 10pt \"Segoe UI\";\n"
"}\n"
"\n"
"#addCourse::hover{\n"
"border-image:url(\"C:/Users/Hema/Desktop/Project/buttom.png\");\n"
"\n"
"}"));
        Name = new QLineEdit(mainFrame_6);
        Name->setObjectName(QString::fromUtf8("Name"));
        Name->setEnabled(true);
        Name->setGeometry(QRect(280, 30, 390, 40));
        Name->setFocusPolicy(Qt::StrongFocus);
        Name->setContextMenuPolicy(Qt::PreventContextMenu);
        Name->setStyleSheet(QString::fromUtf8("*{\n"
"border-image: url(C:/Users/Hema/Desktop/Project/textfield.png);\n"
"border-radius: 12px;font: 12pt \"Segoe UI\";\n"
"}"));
        Name->setFrame(true);
        Name->setEchoMode(QLineEdit::Normal);
        Name->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        Name->setCursorMoveStyle(Qt::LogicalMoveStyle);
        Name->setClearButtonEnabled(false);
        ID = new QLineEdit(mainFrame_6);
        ID->setObjectName(QString::fromUtf8("ID"));
        ID->setEnabled(true);
        ID->setGeometry(QRect(280, 98, 390, 40));
        ID->setFocusPolicy(Qt::StrongFocus);
        ID->setContextMenuPolicy(Qt::PreventContextMenu);
        ID->setStyleSheet(QString::fromUtf8("*{\n"
"border-image: url(C:/Users/Hema/Desktop/Project/textfield.png);\n"
"border-radius: 12px;font: 12pt \"Segoe UI\";\n"
"}"));
        ID->setInputMethodHints(Qt::ImhNone);
        ID->setFrame(true);
        ID->setEchoMode(QLineEdit::Normal);
        ID->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        ID->setCursorMoveStyle(Qt::LogicalMoveStyle);
        ID->setClearButtonEnabled(false);
        textEdit_10 = new QTextEdit(mainFrame_6);
        textEdit_10->setObjectName(QString::fromUtf8("textEdit_10"));
        textEdit_10->setEnabled(false);
        textEdit_10->setGeometry(QRect(40, 100, 150, 40));
        textEdit_10->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 255, 255, 255), stop:1 rgba(255, 255, 255, 255));"));
        textEdit_10->setFrameShape(QFrame::NoFrame);
        textEdit_11 = new QTextEdit(mainFrame_6);
        textEdit_11->setObjectName(QString::fromUtf8("textEdit_11"));
        textEdit_11->setEnabled(false);
        textEdit_11->setGeometry(QRect(40, 172, 170, 40));
        textEdit_11->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 255, 255, 255), stop:1 rgba(255, 255, 255, 255));"));
        textEdit_11->setFrameShape(QFrame::NoFrame);
        Year = new QLineEdit(mainFrame_6);
        Year->setObjectName(QString::fromUtf8("Year"));
        Year->setEnabled(true);
        Year->setGeometry(QRect(280, 170, 390, 40));
        Year->setFocusPolicy(Qt::StrongFocus);
        Year->setContextMenuPolicy(Qt::PreventContextMenu);
        Year->setStyleSheet(QString::fromUtf8("*{\n"
"border-image: url(C:/Users/Hema/Desktop/Project/textfield.png);\n"
"border-radius: 12px;font: 12pt \"Segoe UI\";\n"
"}"));
        Year->setFrame(true);
        Year->setEchoMode(QLineEdit::Normal);
        Year->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        Year->setCursorMoveStyle(Qt::LogicalMoveStyle);
        Year->setClearButtonEnabled(false);
        textEdit_12 = new QTextEdit(mainFrame_6);
        textEdit_12->setObjectName(QString::fromUtf8("textEdit_12"));
        textEdit_12->setEnabled(false);
        textEdit_12->setGeometry(QRect(40, 242, 310, 40));
        textEdit_12->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 255, 255, 255), stop:1 rgba(255, 255, 255, 255));"));
        textEdit_12->setFrameShape(QFrame::NoFrame);
        textEdit_13 = new QTextEdit(mainFrame_6);
        textEdit_13->setObjectName(QString::fromUtf8("textEdit_13"));
        textEdit_13->setEnabled(false);
        textEdit_13->setGeometry(QRect(40, 313, 190, 40));
        textEdit_13->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 255, 255, 255), stop:1 rgba(255, 255, 255, 255));"));
        textEdit_13->setFrameShape(QFrame::NoFrame);
        CurrentCourses = new QComboBox(mainFrame_6);
        CurrentCourses->setObjectName(QString::fromUtf8("CurrentCourses"));
        CurrentCourses->setGeometry(QRect(280, 240, 390, 40));
        CurrentCourses->setStyleSheet(QString::fromUtf8("*{\n"
"border-image: url(C:/Users/Hema/Desktop/Project/textfield.png);\n"
"border-radius: 12px;font: 12pt \"Segoe UI\";\n"
"}"));
        CurrentCourses->setEditable(false);
        CurrentCourses->setInsertPolicy(QComboBox::InsertAtBottom);
        CurrentCourses->setDuplicatesEnabled(false);
        CurrentCourses->setFrame(true);
        FinisheCourses = new QComboBox(mainFrame_6);
        FinisheCourses->setObjectName(QString::fromUtf8("FinisheCourses"));
        FinisheCourses->setGeometry(QRect(280, 310, 390, 40));
        FinisheCourses->setStyleSheet(QString::fromUtf8("*{\n"
"border-image: url(C:/Users/Hema/Desktop/Project/textfield.png);\n"
"border-radius: 12px;font: 12pt \"Segoe UI\";\n"
"}"));
        FinisheCourses->setEditable(false);
        FinisheCourses->setInsertPolicy(QComboBox::InsertAtBottom);
        FinisheCourses->setDuplicatesEnabled(false);
        FinisheCourses->setFrame(true);
        textEdit_9 = new QTextEdit(mainFrame_6);
        textEdit_9->setObjectName(QString::fromUtf8("textEdit_9"));
        textEdit_9->setEnabled(false);
        textEdit_9->setGeometry(QRect(40, 30, 150, 40));
        textEdit_9->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 255, 255, 255), stop:1 rgba(255, 255, 255, 255));\n"
"color: rgb(0, 0, 0);"));
        textEdit_9->setFrameShape(QFrame::NoFrame);
        textEdit_9->setFrameShadow(QFrame::Sunken);
        Pass = new QTextEdit(mainFrame_6);
        Pass->setObjectName(QString::fromUtf8("Pass"));
        Pass->setEnabled(false);
        Pass->setGeometry(QRect(40, 380, 190, 40));
        Pass->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 255, 255, 255), stop:1 rgba(255, 255, 255, 255));"));
        Pass->setFrameShape(QFrame::NoFrame);
        Password = new QLineEdit(mainFrame_6);
        Password->setObjectName(QString::fromUtf8("Password"));
        Password->setEnabled(true);
        Password->setGeometry(QRect(280, 380, 390, 40));
        Password->setFocusPolicy(Qt::StrongFocus);
        Password->setContextMenuPolicy(Qt::PreventContextMenu);
        Password->setStyleSheet(QString::fromUtf8("*{\n"
"border-image: url(C:/Users/Hema/Desktop/Project/textfield.png);\n"
"border-radius: 12px;font: 12pt \"Segoe UI\";\n"
"}"));
        Password->setInputMethodHints(Qt::ImhNoAutoUppercase|Qt::ImhNoPredictiveText|Qt::ImhSensitiveData);
        Password->setFrame(true);
        Password->setEchoMode(QLineEdit::PasswordEchoOnEdit);
        Password->setCursorPosition(0);
        Password->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        Password->setCursorMoveStyle(Qt::LogicalMoveStyle);
        Password->setClearButtonEnabled(false);
        textEdit_14 = new QTextEdit(mainFrame_6);
        textEdit_14->setObjectName(QString::fromUtf8("textEdit_14"));
        textEdit_14->setEnabled(false);
        textEdit_14->setGeometry(QRect(740, 10, 480, 33));
        textEdit_14->setMaximumSize(QSize(16777215, 33));
        textEdit_14->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 255, 255, 255), stop:1 rgba(255, 255, 255, 255));"));
        textEdit_14->setFrameShape(QFrame::NoFrame);
        scrollArea = new QScrollArea(mainFrame_6);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(750, 50, 420, 200));
        scrollArea->setMinimumSize(QSize(250, 100));
        scrollArea->setStyleSheet(QString::fromUtf8("*{border-radius: 23px;\n"
"border-image: url(C:/Users/Hema/Desktop/Project/textfield.png);\n"
"}"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 420, 200));
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer = new QSpacerItem(20, 295, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        scrollArea->setWidget(scrollAreaWidgetContents);
        textEdit_15 = new QTextEdit(mainFrame_6);
        textEdit_15->setObjectName(QString::fromUtf8("textEdit_15"));
        textEdit_15->setEnabled(false);
        textEdit_15->setGeometry(QRect(740, 280, 480, 33));
        textEdit_15->setMaximumSize(QSize(16777215, 33));
        textEdit_15->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 255, 255, 255), stop:1 rgba(255, 255, 255, 255));"));
        textEdit_15->setFrameShape(QFrame::NoFrame);
        scrollArea_2 = new QScrollArea(mainFrame_6);
        scrollArea_2->setObjectName(QString::fromUtf8("scrollArea_2"));
        scrollArea_2->setGeometry(QRect(750, 320, 420, 190));
        scrollArea_2->setMinimumSize(QSize(250, 100));
        scrollArea_2->setStyleSheet(QString::fromUtf8("*{border-radius: 23px;\n"
"border-image: url(C:/Users/Hema/Desktop/Project/textfield.png);\n"
"}"));
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 420, 190));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalSpacer_2 = new QSpacerItem(20, 295, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        scrollArea_2->setWidget(scrollAreaWidgetContents_2);
        addCourse->raise();
        Name->raise();
        ID->raise();
        textEdit_10->raise();
        textEdit_11->raise();
        textEdit_12->raise();
        textEdit_13->raise();
        CurrentCourses->raise();
        Year->raise();
        FinisheCourses->raise();
        textEdit_9->raise();
        Pass->raise();
        Password->raise();
        textEdit_14->raise();
        scrollArea->raise();
        textEdit_15->raise();
        scrollArea_2->raise();

        verticalLayout_27->addWidget(mainFrame_6);


        horizontalLayout->addWidget(mainBody);


        retranslateUi(Add_Student);

        QMetaObject::connectSlotsByName(Add_Student);
    } // setupUi

    void retranslateUi(QDialog *Add_Student)
    {
        Add_Student->setWindowTitle(QCoreApplication::translate("Add_Student", "Dialog", nullptr));
        label_10->setText(QCoreApplication::translate("Add_Student", "UMS", nullptr));
        pushButton_39->setText(QString());
        pushButton_40->setText(QCoreApplication::translate("Add_Student", "Profile", nullptr));
        pushButton_41->setText(QCoreApplication::translate("Add_Student", "Add Student", nullptr));
        pushButton_43->setText(QCoreApplication::translate("Add_Student", "Students Data", nullptr));
        pushButton_42->setText(QCoreApplication::translate("Add_Student", "Add Course", nullptr));
        pushButton_47->setText(QCoreApplication::translate("Add_Student", "Courses Data", nullptr));
        pushButton_46->setText(QCoreApplication::translate("Add_Student", "Pending Requests", nullptr));
        pushButton_44->setText(QCoreApplication::translate("Add_Student", " Log Out", nullptr));
        pushButton_45->setText(QString());
        label_7->setText(QCoreApplication::translate("Add_Student", "Add Student", nullptr));
        addCourse->setText(QCoreApplication::translate("Add_Student", "Add Student", nullptr));
        Name->setInputMask(QString());
        Name->setText(QString());
        Name->setPlaceholderText(QString());
        ID->setInputMask(QString());
        ID->setText(QString());
        ID->setPlaceholderText(QString());
        textEdit_10->setHtml(QCoreApplication::translate("Add_Student", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; font-weight:696;\">Student ID</span></p></body></html>", nullptr));
        textEdit_11->setHtml(QCoreApplication::translate("Add_Student", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; font-weight:696;\">Academic Year</span></p></body></html>", nullptr));
        Year->setInputMask(QString());
        Year->setText(QString());
        Year->setPlaceholderText(QString());
        textEdit_12->setHtml(QCoreApplication::translate("Add_Student", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; font-weight:696;\">Current Courses</span></p></body></html>", nullptr));
        textEdit_13->setHtml(QCoreApplication::translate("Add_Student", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; font-weight:696;\">Finished Courses</span></p></body></html>", nullptr));
        CurrentCourses->setPlaceholderText(QString());
        FinisheCourses->setPlaceholderText(QString());
        textEdit_9->setHtml(QCoreApplication::translate("Add_Student", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; font-weight:696;\">Student Name</span></p></body></html>", nullptr));
        Pass->setHtml(QCoreApplication::translate("Add_Student", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; font-weight:696;\">Password</span></p></body></html>", nullptr));
        Password->setInputMask(QString());
        Password->setText(QString());
        Password->setPlaceholderText(QString());
        textEdit_14->setHtml(QCoreApplication::translate("Add_Student", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; font-weight:696;\">Current Courses</span></p></body></html>", nullptr));
        textEdit_15->setHtml(QCoreApplication::translate("Add_Student", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; font-weight:696;\">Finished Courses</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Add_Student: public Ui_Add_Student {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_STUDENT_H
