/********************************************************************************
** Form generated from reading UI file 'student_data.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENT_DATA_H
#define UI_STUDENT_DATA_H

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

class Ui_Student_Data
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
    QPushButton *Show;
    QLineEdit *Year;
    QLineEdit *Name;
    QTextEdit *password;
    QTextEdit *textEdit_10;
    QLineEdit *ID;
    QComboBox *CurrentCourses;
    QLineEdit *Password;
    QTextEdit *name;
    QTextEdit *finishedcourses;
    QTextEdit *year;
    QTextEdit *currrentcourses;
    QComboBox *FinishedCourses;
    QPushButton *Edit;
    QPushButton *Done;
    QTextEdit *textEdit_17;
    QTextEdit *textEdit_18;
    QScrollArea *scrollArea_3;
    QWidget *scrollAreaWidgetContents_3;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer_3;
    QScrollArea *scrollArea_4;
    QWidget *scrollAreaWidgetContents_4;
    QVBoxLayout *verticalLayout_4;
    QSpacerItem *verticalSpacer_4;

    void setupUi(QDialog *Student_Data)
    {
        if (Student_Data->objectName().isEmpty())
            Student_Data->setObjectName(QString::fromUtf8("Student_Data"));
        Student_Data->resize(1198, 700);
        Student_Data->setMinimumSize(QSize(1198, 700));
        Student_Data->setMaximumSize(QSize(1198, 700));
        Student_Data->setStyleSheet(QString::fromUtf8("border-image: url(C:/Users/Hema/Desktop/Project/white.png);"));
        horizontalLayout = new QHBoxLayout(Student_Data);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        leftMenu = new QWidget(Student_Data);
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
        pushButton_41->setStyleSheet(QString::fromUtf8("*{padding:18px;\n"
"text-align:left;\n"
"font: 900 11pt \"Arial Black\";\n"
"color:rgb(255, 255, 255);\n"
"}\n"
"\n"
"#pushButton_41::hover{\n"
"border-image: url(C:/Users/Hema/Desktop/Project/white.png);\n"
"border-top-left-radius:30px;\n"
"border-bottom-left-radius:30px;\n"
"color:rgb(103,58,183);\n"
"}"));

        verticalLayout_25->addWidget(pushButton_41);

        pushButton_43 = new QPushButton(frame_19);
        pushButton_43->setObjectName(QString::fromUtf8("pushButton_43"));
        pushButton_43->setFont(font1);
        pushButton_43->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_43->setStyleSheet(QString::fromUtf8("border-image: url(C:/Users/Hema/Desktop/Project/white.png);\n"
"padding:18px;\n"
"font: 900 11pt \"Arial Black\";\n"
"text-align:left;\n"
"border-top-left-radius:30px;\n"
"border-bottom-left-radius:30px;\n"
"color:rgb(103,58,183);"));

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

        mainBody = new QWidget(Student_Data);
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
        Show = new QPushButton(mainFrame_6);
        Show->setObjectName(QString::fromUtf8("Show"));
        Show->setGeometry(QRect(310, 500, 160, 40));
        Show->setCursor(QCursor(Qt::PointingHandCursor));
        Show->setStyleSheet(QString::fromUtf8("*{\n"
"border-radius: 15px;\n"
"border-image:url(\"C:/Users/Hema/Desktop/Project/22.png\");\n"
"\n"
"color:rgb(255, 255, 255);\n"
"font: 600 10pt \"Segoe UI\";\n"
"}\n"
"\n"
"#Show::hover{\n"
"border-image:url(\"C:/Users/Hema/Desktop/Project/buttom.png\");\n"
"\n"
"}"));
        Year = new QLineEdit(mainFrame_6);
        Year->setObjectName(QString::fromUtf8("Year"));
        Year->setEnabled(false);
        Year->setGeometry(QRect(280, 180, 390, 40));
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
        Name = new QLineEdit(mainFrame_6);
        Name->setObjectName(QString::fromUtf8("Name"));
        Name->setEnabled(false);
        Name->setGeometry(QRect(280, 108, 390, 40));
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
        password = new QTextEdit(mainFrame_6);
        password->setObjectName(QString::fromUtf8("password"));
        password->setEnabled(false);
        password->setGeometry(QRect(40, 390, 190, 40));
        password->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 255, 255, 255), stop:1 rgba(255, 255, 255, 255));"));
        password->setFrameShape(QFrame::NoFrame);
        textEdit_10 = new QTextEdit(mainFrame_6);
        textEdit_10->setObjectName(QString::fromUtf8("textEdit_10"));
        textEdit_10->setEnabled(false);
        textEdit_10->setGeometry(QRect(40, 40, 150, 40));
        textEdit_10->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 255, 255, 255), stop:1 rgba(255, 255, 255, 255));"));
        textEdit_10->setFrameShape(QFrame::NoFrame);
        ID = new QLineEdit(mainFrame_6);
        ID->setObjectName(QString::fromUtf8("ID"));
        ID->setEnabled(true);
        ID->setGeometry(QRect(280, 40, 390, 40));
        ID->setFocusPolicy(Qt::StrongFocus);
        ID->setContextMenuPolicy(Qt::PreventContextMenu);
        ID->setStyleSheet(QString::fromUtf8("*{\n"
"border-image: url(C:/Users/Hema/Desktop/Project/textfield.png);\n"
"border-radius: 12px;font: 12pt \"Segoe UI\";\n"
"}"));
        ID->setFrame(true);
        ID->setEchoMode(QLineEdit::Normal);
        ID->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        ID->setCursorMoveStyle(Qt::LogicalMoveStyle);
        ID->setClearButtonEnabled(false);
        CurrentCourses = new QComboBox(mainFrame_6);
        CurrentCourses->addItem(QString());
        CurrentCourses->addItem(QString());
        CurrentCourses->addItem(QString());
        CurrentCourses->addItem(QString());
        CurrentCourses->addItem(QString());
        CurrentCourses->setObjectName(QString::fromUtf8("CurrentCourses"));
        CurrentCourses->setEnabled(false);
        CurrentCourses->setGeometry(QRect(280, 250, 390, 40));
        CurrentCourses->setStyleSheet(QString::fromUtf8("*{\n"
"border-image: url(C:/Users/Hema/Desktop/Project/textfield.png);\n"
"border-radius: 12px;font: 12pt \"Segoe UI\";\n"
"}"));
        CurrentCourses->setEditable(false);
        CurrentCourses->setInsertPolicy(QComboBox::InsertAtBottom);
        CurrentCourses->setDuplicatesEnabled(false);
        CurrentCourses->setFrame(true);
        Password = new QLineEdit(mainFrame_6);
        Password->setObjectName(QString::fromUtf8("Password"));
        Password->setEnabled(false);
        Password->setGeometry(QRect(280, 390, 390, 40));
        Password->setFocusPolicy(Qt::StrongFocus);
        Password->setContextMenuPolicy(Qt::PreventContextMenu);
        Password->setStyleSheet(QString::fromUtf8("*{\n"
"border-image: url(C:/Users/Hema/Desktop/Project/textfield.png);\n"
"border-radius: 12px;font: 12pt \"Segoe UI\";\n"
"}"));
        Password->setFrame(true);
        Password->setEchoMode(QLineEdit::Normal);
        Password->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        Password->setCursorMoveStyle(Qt::LogicalMoveStyle);
        Password->setClearButtonEnabled(false);
        name = new QTextEdit(mainFrame_6);
        name->setObjectName(QString::fromUtf8("name"));
        name->setEnabled(false);
        name->setGeometry(QRect(40, 110, 150, 40));
        name->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 255, 255, 255), stop:1 rgba(255, 255, 255, 255));\n"
"color: rgb(0, 0, 0);"));
        name->setFrameShape(QFrame::NoFrame);
        name->setFrameShadow(QFrame::Sunken);
        finishedcourses = new QTextEdit(mainFrame_6);
        finishedcourses->setObjectName(QString::fromUtf8("finishedcourses"));
        finishedcourses->setEnabled(false);
        finishedcourses->setGeometry(QRect(40, 323, 190, 40));
        finishedcourses->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 255, 255, 255), stop:1 rgba(255, 255, 255, 255));"));
        finishedcourses->setFrameShape(QFrame::NoFrame);
        year = new QTextEdit(mainFrame_6);
        year->setObjectName(QString::fromUtf8("year"));
        year->setEnabled(false);
        year->setGeometry(QRect(40, 182, 170, 40));
        year->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 255, 255, 255), stop:1 rgba(255, 255, 255, 255));"));
        year->setFrameShape(QFrame::NoFrame);
        currrentcourses = new QTextEdit(mainFrame_6);
        currrentcourses->setObjectName(QString::fromUtf8("currrentcourses"));
        currrentcourses->setEnabled(false);
        currrentcourses->setGeometry(QRect(40, 252, 220, 40));
        currrentcourses->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 255, 255, 255), stop:1 rgba(255, 255, 255, 255));"));
        currrentcourses->setFrameShape(QFrame::NoFrame);
        FinishedCourses = new QComboBox(mainFrame_6);
        FinishedCourses->addItem(QString());
        FinishedCourses->addItem(QString());
        FinishedCourses->addItem(QString());
        FinishedCourses->addItem(QString());
        FinishedCourses->addItem(QString());
        FinishedCourses->addItem(QString());
        FinishedCourses->addItem(QString());
        FinishedCourses->addItem(QString());
        FinishedCourses->setObjectName(QString::fromUtf8("FinishedCourses"));
        FinishedCourses->setEnabled(false);
        FinishedCourses->setGeometry(QRect(280, 320, 390, 40));
        FinishedCourses->setStyleSheet(QString::fromUtf8("*{\n"
"border-image: url(C:/Users/Hema/Desktop/Project/textfield.png);\n"
"border-radius: 12px;font: 12pt \"Segoe UI\";\n"
"}"));
        FinishedCourses->setEditable(false);
        FinishedCourses->setInsertPolicy(QComboBox::InsertAtBottom);
        FinishedCourses->setDuplicatesEnabled(false);
        FinishedCourses->setFrame(true);
        Edit = new QPushButton(mainFrame_6);
        Edit->setObjectName(QString::fromUtf8("Edit"));
        Edit->setGeometry(QRect(320, 500, 140, 40));
        Edit->setCursor(QCursor(Qt::PointingHandCursor));
        Edit->setStyleSheet(QString::fromUtf8("*{\n"
"border-radius: 15px;\n"
"border-image:url(\"C:/Users/Hema/Desktop/Project/22.png\");\n"
"\n"
"color:rgb(255, 255, 255);\n"
"font: 600 10pt \"Segoe UI\";\n"
"}\n"
"\n"
"#Edit::hover{\n"
"border-image:url(\"C:/Users/Hema/Desktop/Project/buttom.png\");\n"
"\n"
"}"));
        Done = new QPushButton(mainFrame_6);
        Done->setObjectName(QString::fromUtf8("Done"));
        Done->setGeometry(QRect(330, 500, 120, 40));
        Done->setCursor(QCursor(Qt::PointingHandCursor));
        Done->setStyleSheet(QString::fromUtf8("*{\n"
"border-radius: 15px;\n"
"border-image:url(\"C:/Users/Hema/Desktop/Project/22.png\");\n"
"\n"
"color:rgb(255, 255, 255);\n"
"font: 600 10pt \"Segoe UI\";\n"
"}\n"
"\n"
"#Done::hover{\n"
"border-image:url(\"C:/Users/Hema/Desktop/Project/buttom.png\");\n"
"\n"
"}"));
        textEdit_17 = new QTextEdit(mainFrame_6);
        textEdit_17->setObjectName(QString::fromUtf8("textEdit_17"));
        textEdit_17->setEnabled(false);
        textEdit_17->setGeometry(QRect(740, 290, 480, 33));
        textEdit_17->setMaximumSize(QSize(16777215, 33));
        textEdit_17->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 255, 255, 255), stop:1 rgba(255, 255, 255, 255));"));
        textEdit_17->setFrameShape(QFrame::NoFrame);
        textEdit_18 = new QTextEdit(mainFrame_6);
        textEdit_18->setObjectName(QString::fromUtf8("textEdit_18"));
        textEdit_18->setEnabled(false);
        textEdit_18->setGeometry(QRect(740, 20, 480, 33));
        textEdit_18->setMaximumSize(QSize(16777215, 33));
        textEdit_18->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 255, 255, 255), stop:1 rgba(255, 255, 255, 255));"));
        textEdit_18->setFrameShape(QFrame::NoFrame);
        scrollArea_3 = new QScrollArea(mainFrame_6);
        scrollArea_3->setObjectName(QString::fromUtf8("scrollArea_3"));
        scrollArea_3->setGeometry(QRect(750, 60, 420, 200));
        scrollArea_3->setMinimumSize(QSize(250, 100));
        scrollArea_3->setStyleSheet(QString::fromUtf8("*{border-radius: 23px;\n"
"border-image: url(C:/Users/Hema/Desktop/Project/textfield.png);\n"
"}"));
        scrollArea_3->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_3"));
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 420, 200));
        verticalLayout_3 = new QVBoxLayout(scrollAreaWidgetContents_3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalSpacer_3 = new QSpacerItem(20, 295, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_3);

        scrollArea_3->setWidget(scrollAreaWidgetContents_3);
        scrollArea_4 = new QScrollArea(mainFrame_6);
        scrollArea_4->setObjectName(QString::fromUtf8("scrollArea_4"));
        scrollArea_4->setGeometry(QRect(750, 330, 420, 190));
        scrollArea_4->setMinimumSize(QSize(250, 100));
        scrollArea_4->setStyleSheet(QString::fromUtf8("*{border-radius: 23px;\n"
"border-image: url(C:/Users/Hema/Desktop/Project/textfield.png);\n"
"}"));
        scrollArea_4->setWidgetResizable(true);
        scrollAreaWidgetContents_4 = new QWidget();
        scrollAreaWidgetContents_4->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_4"));
        scrollAreaWidgetContents_4->setGeometry(QRect(0, 0, 420, 190));
        verticalLayout_4 = new QVBoxLayout(scrollAreaWidgetContents_4);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalSpacer_4 = new QSpacerItem(20, 295, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_4);

        scrollArea_4->setWidget(scrollAreaWidgetContents_4);

        verticalLayout_27->addWidget(mainFrame_6);


        horizontalLayout->addWidget(mainBody);


        retranslateUi(Student_Data);

        QMetaObject::connectSlotsByName(Student_Data);
    } // setupUi

    void retranslateUi(QDialog *Student_Data)
    {
        Student_Data->setWindowTitle(QCoreApplication::translate("Student_Data", "Dialog", nullptr));
        label_10->setText(QCoreApplication::translate("Student_Data", "UMS", nullptr));
        pushButton_39->setText(QString());
        pushButton_40->setText(QCoreApplication::translate("Student_Data", "Profile", nullptr));
        pushButton_41->setText(QCoreApplication::translate("Student_Data", "Add Student", nullptr));
        pushButton_43->setText(QCoreApplication::translate("Student_Data", "Students Data", nullptr));
        pushButton_42->setText(QCoreApplication::translate("Student_Data", "Add Course", nullptr));
        pushButton_47->setText(QCoreApplication::translate("Student_Data", "Courses Data", nullptr));
        pushButton_46->setText(QCoreApplication::translate("Student_Data", "Pending Requests", nullptr));
        pushButton_44->setText(QCoreApplication::translate("Student_Data", " Log Out", nullptr));
        pushButton_45->setText(QString());
        label_7->setText(QCoreApplication::translate("Student_Data", "Students Data", nullptr));
        Show->setText(QCoreApplication::translate("Student_Data", "Show Student", nullptr));
        Year->setInputMask(QString());
        Year->setText(QString());
        Year->setPlaceholderText(QString());
        Name->setInputMask(QString());
        Name->setText(QString());
        Name->setPlaceholderText(QString());
        password->setHtml(QCoreApplication::translate("Student_Data", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; font-weight:696;\">Password</span></p></body></html>", nullptr));
        textEdit_10->setHtml(QCoreApplication::translate("Student_Data", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; font-weight:696;\">Student ID</span></p></body></html>", nullptr));
        ID->setInputMask(QString());
        ID->setText(QString());
        ID->setPlaceholderText(QString());
        CurrentCourses->setItemText(0, QCoreApplication::translate("Student_Data", "0 Hours", nullptr));
        CurrentCourses->setItemText(1, QCoreApplication::translate("Student_Data", "1 Hour", nullptr));
        CurrentCourses->setItemText(2, QCoreApplication::translate("Student_Data", "2 Hours", nullptr));
        CurrentCourses->setItemText(3, QCoreApplication::translate("Student_Data", "3 Hours", nullptr));
        CurrentCourses->setItemText(4, QCoreApplication::translate("Student_Data", "4 Hours", nullptr));

        CurrentCourses->setPlaceholderText(QString());
        Password->setInputMask(QString());
        Password->setText(QString());
        Password->setPlaceholderText(QString());
        name->setHtml(QCoreApplication::translate("Student_Data", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; font-weight:696;\">Student Name</span></p></body></html>", nullptr));
        finishedcourses->setHtml(QCoreApplication::translate("Student_Data", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; font-weight:696;\">Finished Courses</span></p></body></html>", nullptr));
        year->setHtml(QCoreApplication::translate("Student_Data", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; font-weight:696;\">Academic Year</span></p></body></html>", nullptr));
        currrentcourses->setHtml(QCoreApplication::translate("Student_Data", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; font-weight:696;\">Current Courses</span></p></body></html>", nullptr));
        FinishedCourses->setItemText(0, QCoreApplication::translate("Student_Data", "OOP", nullptr));
        FinishedCourses->setItemText(1, QCoreApplication::translate("Student_Data", "Data Structure", nullptr));
        FinishedCourses->setItemText(2, QCoreApplication::translate("Student_Data", "English", nullptr));
        FinishedCourses->setItemText(3, QCoreApplication::translate("Student_Data", "Business", nullptr));
        FinishedCourses->setItemText(4, QCoreApplication::translate("Student_Data", "AI", nullptr));
        FinishedCourses->setItemText(5, QCoreApplication::translate("Student_Data", "Introduction to computer science", nullptr));
        FinishedCourses->setItemText(6, QCoreApplication::translate("Student_Data", "Logic Design", nullptr));
        FinishedCourses->setItemText(7, QCoreApplication::translate("Student_Data", "Electronics", nullptr));

        FinishedCourses->setPlaceholderText(QString());
        Edit->setText(QCoreApplication::translate("Student_Data", "Edit", nullptr));
        Done->setText(QCoreApplication::translate("Student_Data", "Done", nullptr));
        textEdit_17->setHtml(QCoreApplication::translate("Student_Data", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; font-weight:696;\">Finished Courses</span></p></body></html>", nullptr));
        textEdit_18->setHtml(QCoreApplication::translate("Student_Data", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; font-weight:696;\">Current Courses</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Student_Data: public Ui_Student_Data {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENT_DATA_H
