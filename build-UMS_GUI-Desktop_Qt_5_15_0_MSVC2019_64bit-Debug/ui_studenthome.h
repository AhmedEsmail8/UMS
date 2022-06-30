/********************************************************************************
** Form generated from reading UI file 'studenthome.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENTHOME_H
#define UI_STUDENTHOME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_studentHome
{
public:
    QHBoxLayout *horizontalLayout_14;
    QWidget *leftMenu;
    QVBoxLayout *verticalLayout_17;
    QFrame *frame_13;
    QVBoxLayout *verticalLayout_18;
    QFrame *frame_14;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_8;
    QPushButton *pushButton_26;
    QFrame *frame_15;
    QVBoxLayout *verticalLayout_19;
    QFrame *frame_16;
    QVBoxLayout *verticalLayout_20;
    QPushButton *pushButton_27;
    QPushButton *pushButton_28;
    QPushButton *pushButton_29;
    QPushButton *pushButton_30;
    QPushButton *pushButton_31;
    QPushButton *pushButton_32;
    QWidget *mainBody;
    QVBoxLayout *verticalLayout_16;
    QWidget *HeaderFrame_4;
    QHBoxLayout *horizontalLayout_11;
    QWidget *widget_7;
    QHBoxLayout *horizontalLayout_12;
    QPushButton *pushButton_25;
    QLabel *label_7;
    QWidget *widget_8;
    QWidget *mainFrame_4;

    void setupUi(QDialog *studentHome)
    {
        if (studentHome->objectName().isEmpty())
            studentHome->setObjectName(QString::fromUtf8("studentHome"));
        studentHome->resize(1198, 700);
        studentHome->setMinimumSize(QSize(1198, 700));
        studentHome->setMaximumSize(QSize(1198, 700));
        studentHome->setStyleSheet(QString::fromUtf8("border-image: url(C:/Users/Hema/Desktop/Project/white.png);"));
        horizontalLayout_14 = new QHBoxLayout(studentHome);
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        leftMenu = new QWidget(studentHome);
        leftMenu->setObjectName(QString::fromUtf8("leftMenu"));
        leftMenu->setMaximumSize(QSize(270, 16777215));
        leftMenu->setStyleSheet(QString::fromUtf8("border-image: url(C:/Users/Hema/Desktop/Project/blue.png);"));
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
        frame_14->setFrameShape(QFrame::StyledPanel);
        frame_14->setFrameShadow(QFrame::Raised);
        horizontalLayout_13 = new QHBoxLayout(frame_14);
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        label_8 = new QLabel(frame_14);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        QFont font;
        font.setFamily(QString::fromUtf8("Goudy Old Style"));
        font.setPointSize(40);
        font.setBold(true);
        font.setItalic(true);
        label_8->setFont(font);
        label_8->setStyleSheet(QString::fromUtf8("COLOR:rgb(255, 255, 255)"));

        horizontalLayout_13->addWidget(label_8, 0, Qt::AlignHCenter|Qt::AlignTop);

        pushButton_26 = new QPushButton(frame_14);
        pushButton_26->setObjectName(QString::fromUtf8("pushButton_26"));
        pushButton_26->setMinimumSize(QSize(0, 0));
        pushButton_26->setMaximumSize(QSize(35, 35));
        pushButton_26->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_26->setStyleSheet(QString::fromUtf8("border-image:url(C:/Users/Hema/Desktop/Project/close.png);\n"
"border-radius:17px;"));

        horizontalLayout_13->addWidget(pushButton_26);


        verticalLayout_18->addWidget(frame_14, 0, Qt::AlignTop);

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
        frame_16 = new QFrame(frame_15);
        frame_16->setObjectName(QString::fromUtf8("frame_16"));
        frame_16->setEnabled(true);
        frame_16->setFrameShape(QFrame::StyledPanel);
        frame_16->setFrameShadow(QFrame::Raised);
        verticalLayout_20 = new QVBoxLayout(frame_16);
        verticalLayout_20->setSpacing(20);
        verticalLayout_20->setObjectName(QString::fromUtf8("verticalLayout_20"));
        verticalLayout_20->setContentsMargins(25, 0, 0, 0);
        pushButton_27 = new QPushButton(frame_16);
        pushButton_27->setObjectName(QString::fromUtf8("pushButton_27"));
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setItalic(true);
        pushButton_27->setFont(font1);
        pushButton_27->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_27->setStyleSheet(QString::fromUtf8("border-image: url(C:/Users/Hema/Desktop/Project/white.png);\n"
"padding:18px;\n"
"text-align:left;\n"
"border-top-left-radius:30px;\n"
"color:rgb(255, 0, 0)\n"
"\n"
""));
        pushButton_27->setIconSize(QSize(20, 16));

        verticalLayout_20->addWidget(pushButton_27);

        pushButton_28 = new QPushButton(frame_16);
        pushButton_28->setObjectName(QString::fromUtf8("pushButton_28"));
        pushButton_28->setFont(font1);
        pushButton_28->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_28->setStyleSheet(QString::fromUtf8("*{padding:18px;\n"
"text-align:left;\n"
"color:rgb(255, 255, 255);\n"
"}\n"
"\n"
"#pushButton_28::hover{\n"
"border-top-left-radius:30px;\n"
"border-image: url(C:/Users/Hema/Desktop/Project/white.png);\n"
"color:rgb(255, 0, 0);\n"
"}"));

        verticalLayout_20->addWidget(pushButton_28);

        pushButton_29 = new QPushButton(frame_16);
        pushButton_29->setObjectName(QString::fromUtf8("pushButton_29"));
        pushButton_29->setFont(font1);
        pushButton_29->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_29->setStyleSheet(QString::fromUtf8("*{padding:18px;\n"
"text-align:left;\n"
"color:rgb(255, 255, 255);\n"
"}\n"
"\n"
"#pushButton_29::hover{\n"
"border-top-left-radius:30px;\n"
"border-image: url(C:/Users/Hema/Desktop/Project/white.png);\n"
"color:rgb(255, 0, 0);\n"
"}"));

        verticalLayout_20->addWidget(pushButton_29);

        pushButton_30 = new QPushButton(frame_16);
        pushButton_30->setObjectName(QString::fromUtf8("pushButton_30"));
        pushButton_30->setFont(font1);
        pushButton_30->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_30->setStyleSheet(QString::fromUtf8("*{padding:18px;\n"
"text-align:left;\n"
"color:rgb(255, 255, 255);\n"
"}\n"
"\n"
"#pushButton_30::hover{\n"
"border-top-left-radius:30px;\n"
"border-image: url(C:/Users/Hema/Desktop/Project/white.png);\n"
"color:rgb(255, 0, 0);\n"
"}"));

        verticalLayout_20->addWidget(pushButton_30);

        pushButton_31 = new QPushButton(frame_16);
        pushButton_31->setObjectName(QString::fromUtf8("pushButton_31"));
        pushButton_31->setFont(font1);
        pushButton_31->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_31->setStyleSheet(QString::fromUtf8("*{padding:18px;\n"
"text-align:left;\n"
"color:rgb(255, 255, 255);\n"
"}\n"
"\n"
"#pushButton_31::hover{\n"
"border-top-left-radius:30px;\n"
"border-image: url(C:/Users/Hema/Desktop/Project/white.png);\n"
"color:rgb(255, 0, 0);\n"
"}"));

        verticalLayout_20->addWidget(pushButton_31);

        pushButton_32 = new QPushButton(frame_16);
        pushButton_32->setObjectName(QString::fromUtf8("pushButton_32"));
        pushButton_32->setFont(font1);
        pushButton_32->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_32->setStyleSheet(QString::fromUtf8("*{padding:18px;\n"
"text-align:left;\n"
"color:rgb(255, 255, 255);\n"
"}\n"
"\n"
"#pushButton_32::hover{\n"
"border-top-left-radius:30px;\n"
"border-image: url(C:/Users/Hema/Desktop/Project/white.png);\n"
"color:rgb(255, 0, 0);\n"
"}"));

        verticalLayout_20->addWidget(pushButton_32);


        verticalLayout_19->addWidget(frame_16);


        verticalLayout_18->addWidget(frame_15, 0, Qt::AlignTop);


        verticalLayout_17->addWidget(frame_13, 0, Qt::AlignTop);


        horizontalLayout_14->addWidget(leftMenu);

        mainBody = new QWidget(studentHome);
        mainBody->setObjectName(QString::fromUtf8("mainBody"));
        mainBody->setStyleSheet(QString::fromUtf8("border-image: url(C:/Users/Hema/Desktop/Project/white.png);"));
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
        widget_7->setMaximumSize(QSize(220, 16777215));
        horizontalLayout_12 = new QHBoxLayout(widget_7);
        horizontalLayout_12->setSpacing(0);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        horizontalLayout_12->setContentsMargins(0, 0, 0, 0);
        pushButton_25 = new QPushButton(widget_7);
        pushButton_25->setObjectName(QString::fromUtf8("pushButton_25"));
        pushButton_25->setMinimumSize(QSize(10, 20));
        pushButton_25->setMaximumSize(QSize(35, 35));
        pushButton_25->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_25->setStyleSheet(QString::fromUtf8("border-image:url(C:/Users/Hema/Desktop/Project/menubutton.jpg);"));

        horizontalLayout_12->addWidget(pushButton_25);

        label_7 = new QLabel(widget_7);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setMaximumSize(QSize(120, 16777215));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Segoe UI"));
        font2.setPointSize(13);
        font2.setBold(true);
        font2.setItalic(false);
        label_7->setFont(font2);
        label_7->setStyleSheet(QString::fromUtf8("font: 700 13pt \"Segoe UI\";"));

        horizontalLayout_12->addWidget(label_7);


        horizontalLayout_11->addWidget(widget_7);

        widget_8 = new QWidget(HeaderFrame_4);
        widget_8->setObjectName(QString::fromUtf8("widget_8"));

        horizontalLayout_11->addWidget(widget_8);


        verticalLayout_16->addWidget(HeaderFrame_4);

        mainFrame_4 = new QWidget(mainBody);
        mainFrame_4->setObjectName(QString::fromUtf8("mainFrame_4"));
        QFont font3;
        font3.setItalic(true);
        mainFrame_4->setFont(font3);

        verticalLayout_16->addWidget(mainFrame_4);


        horizontalLayout_14->addWidget(mainBody);


        retranslateUi(studentHome);

        QMetaObject::connectSlotsByName(studentHome);
    } // setupUi

    void retranslateUi(QDialog *studentHome)
    {
        studentHome->setWindowTitle(QCoreApplication::translate("studentHome", "Dialog", nullptr));
        label_8->setText(QCoreApplication::translate("studentHome", "UMS", nullptr));
        pushButton_26->setText(QString());
        pushButton_27->setText(QCoreApplication::translate("studentHome", "Home", nullptr));
        pushButton_28->setText(QCoreApplication::translate("studentHome", "Current Cources", nullptr));
        pushButton_29->setText(QCoreApplication::translate("studentHome", "Register Cources", nullptr));
        pushButton_30->setText(QCoreApplication::translate("studentHome", "Finished Cources", nullptr));
        pushButton_31->setText(QCoreApplication::translate("studentHome", "Profile", nullptr));
        pushButton_32->setText(QCoreApplication::translate("studentHome", " Log Out", nullptr));
        pushButton_25->setText(QString());
        label_7->setText(QCoreApplication::translate("studentHome", "Dashboard", nullptr));
    } // retranslateUi

};

namespace Ui {
    class studentHome: public Ui_studentHome {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTHOME_H
