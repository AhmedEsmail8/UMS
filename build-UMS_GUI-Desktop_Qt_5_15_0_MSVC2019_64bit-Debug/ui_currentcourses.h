/********************************************************************************
** Form generated from reading UI file 'currentcourses.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CURRENTCOURSES_H
#define UI_CURRENTCOURSES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CurrentCourses
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
    QSpacerItem *verticalSpacer_2;
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
    QVBoxLayout *verticalLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *CurrentCourses)
    {
        if (CurrentCourses->objectName().isEmpty())
            CurrentCourses->setObjectName(QString::fromUtf8("CurrentCourses"));
        CurrentCourses->resize(1198, 700);
        CurrentCourses->setMinimumSize(QSize(1198, 700));
        CurrentCourses->setMaximumSize(QSize(1198, 700));
        CurrentCourses->setStyleSheet(QString::fromUtf8("border-image: url(C:/Users/Hema/Desktop/Project/white.png);"));
        horizontalLayout = new QHBoxLayout(CurrentCourses);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        leftMenu = new QWidget(CurrentCourses);
        leftMenu->setObjectName(QString::fromUtf8("leftMenu"));
        leftMenu->setMinimumSize(QSize(270, 0));
        leftMenu->setMaximumSize(QSize(270, 16777215));
        leftMenu->setStyleSheet(QString::fromUtf8("border-image: url(C:/Users/Hema/Desktop/Project/22.png);"));
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
        frame_14->setStyleSheet(QString::fromUtf8(""));
        frame_14->setFrameShape(QFrame::StyledPanel);
        frame_14->setFrameShadow(QFrame::Raised);
        horizontalLayout_13 = new QHBoxLayout(frame_14);
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        label_8 = new QLabel(frame_14);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        QFont font;
        font.setFamily(QString::fromUtf8("Tahoma"));
        font.setPointSize(40);
        font.setBold(true);
        font.setItalic(false);
        label_8->setFont(font);
        label_8->setStyleSheet(QString::fromUtf8("COLOR:rgb(255, 255, 255);\n"
"font: 700 40pt \"Tahoma\";"));

        horizontalLayout_13->addWidget(label_8, 0, Qt::AlignHCenter|Qt::AlignTop);

        pushButton_26 = new QPushButton(frame_14);
        pushButton_26->setObjectName(QString::fromUtf8("pushButton_26"));
        pushButton_26->setMaximumSize(QSize(35, 35));
        pushButton_26->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_26->setStyleSheet(QString::fromUtf8("border-image:url(C:/Users/Hema/Desktop/Project/close.png);\n"
"border-radius:17px;"));
        pushButton_26->setIconSize(QSize(20, 20));

        horizontalLayout_13->addWidget(pushButton_26);


        verticalLayout_18->addWidget(frame_14, 0, Qt::AlignTop);

        pushButton_31 = new QPushButton(frame_13);
        pushButton_31->setObjectName(QString::fromUtf8("pushButton_31"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial Black"));
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setItalic(false);
        pushButton_31->setFont(font1);
        pushButton_31->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_31->setStyleSheet(QString::fromUtf8("*{padding:18px;\n"
"text-align:left;\n"
"font: 900 11pt \"Arial Black\";\n"
"color:rgb(255, 255, 255);\n"
"}\n"
"\n"
"#pushButton_31::hover{\n"
"border-image: url(C:/Users/Hema/Desktop/Project/white.png);\n"
"border-top-left-radius:30px;\n"
"border-bottom-left-radius:30px;\n"
"color:rgb(103,58,183);\n"
"}"));

        verticalLayout_18->addWidget(pushButton_31);

        pushButton_28 = new QPushButton(frame_13);
        pushButton_28->setObjectName(QString::fromUtf8("pushButton_28"));
        pushButton_28->setFont(font1);
        pushButton_28->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_28->setStyleSheet(QString::fromUtf8("border-image: url(C:/Users/Hema/Desktop/Project/white.png);\n"
"padding:18px;\n"
"font: 900 11pt \"Arial Black\";\n"
"text-align:left;\n"
"border-top-left-radius:30px;\n"
"border-bottom-left-radius:30px;\n"
"color:rgb(103,58,183);"));

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
"border-image: url(C:/Users/Hema/Desktop/Project/white.png);\n"
"border-top-left-radius:30px;\n"
"border-bottom-left-radius:30px;\n"
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
"border-image: url(C:/Users/Hema/Desktop/Project/white.png);\n"
"border-top-left-radius:30px;\n"
"border-bottom-left-radius:30px;\n"
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
"border-image: url(C:/Users/Hema/Desktop/Project/white.png);\n"
"border-top-left-radius:30px;\n"
"border-bottom-left-radius:30px;\n"
"color:rgb(103,58,183);\n"
"}"));

        verticalLayout_18->addWidget(pushButton_32);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_18->addItem(verticalSpacer_2);

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

        mainBody = new QWidget(CurrentCourses);
        mainBody->setObjectName(QString::fromUtf8("mainBody"));
        mainBody->setMinimumSize(QSize(0, 0));
        mainBody->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_16 = new QVBoxLayout(mainBody);
        verticalLayout_16->setObjectName(QString::fromUtf8("verticalLayout_16"));
        verticalLayout_16->setContentsMargins(0, 0, 0, 0);
        HeaderFrame_4 = new QWidget(mainBody);
        HeaderFrame_4->setObjectName(QString::fromUtf8("HeaderFrame_4"));
        HeaderFrame_4->setMinimumSize(QSize(0, 90));
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
        pushButton_25->setStyleSheet(QString::fromUtf8("border-image:url(C:/Users/Hema/Desktop/Project/menubutton.jpg);"));

        horizontalLayout_12->addWidget(pushButton_25);


        horizontalLayout_11->addWidget(widget_7);

        label_2 = new QLabel(HeaderFrame_4);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Segoe UI"));
        font2.setPointSize(15);
        font2.setBold(true);
        font2.setItalic(false);
        label_2->setFont(font2);
        label_2->setStyleSheet(QString::fromUtf8("*{\n"
"	font: 700 15pt \"Segoe UI\";\n"
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
        mainFrame_4->setStyleSheet(QString::fromUtf8("border-image: url(C:/Users/Hema/Desktop/Project/white.png);"));
        verticalLayout = new QVBoxLayout(mainFrame_4);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        scrollArea = new QScrollArea(mainFrame_4);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 877, 559));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalSpacer = new QSpacerItem(20, 534, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);


        verticalLayout_16->addWidget(mainFrame_4);


        horizontalLayout->addWidget(mainBody);


        retranslateUi(CurrentCourses);

        QMetaObject::connectSlotsByName(CurrentCourses);
    } // setupUi

    void retranslateUi(QDialog *CurrentCourses)
    {
        CurrentCourses->setWindowTitle(QCoreApplication::translate("CurrentCourses", "Dialog", nullptr));
        label_8->setText(QCoreApplication::translate("CurrentCourses", "UMS", nullptr));
        pushButton_26->setText(QString());
        pushButton_31->setText(QCoreApplication::translate("CurrentCourses", "Profile", nullptr));
        pushButton_28->setText(QCoreApplication::translate("CurrentCourses", "Current Courses", nullptr));
        pushButton_29->setText(QCoreApplication::translate("CurrentCourses", "Register Courses", nullptr));
        pushButton_30->setText(QCoreApplication::translate("CurrentCourses", "Finished Courses", nullptr));
        pushButton_32->setText(QCoreApplication::translate("CurrentCourses", " Log Out", nullptr));
        pushButton_25->setText(QString());
        label_2->setText(QCoreApplication::translate("CurrentCourses", "Current Course", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CurrentCourses: public Ui_CurrentCourses {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CURRENTCOURSES_H
