/********************************************************************************
** Form generated from reading UI file 'pendingrequests.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PENDINGREQUESTS_H
#define UI_PENDINGREQUESTS_H

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

class Ui_PendingRequests
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
    QVBoxLayout *verticalLayout_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_3;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *PendingRequests)
    {
        if (PendingRequests->objectName().isEmpty())
            PendingRequests->setObjectName(QString::fromUtf8("PendingRequests"));
        PendingRequests->resize(1198, 700);
        PendingRequests->setMinimumSize(QSize(1198, 700));
        PendingRequests->setMaximumSize(QSize(1198, 700));
        PendingRequests->setStyleSheet(QString::fromUtf8("border-image: url(white.png);"));
        horizontalLayout = new QHBoxLayout(PendingRequests);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        leftMenu = new QWidget(PendingRequests);
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
        pushButton_47->setStyleSheet(QString::fromUtf8("*{padding:18px;\n"
"text-align:left;\n"
"font: 900 11pt \"Arial Black\";\n"
"color:rgb(255, 255, 255);\n"
"}\n"
"\n"
"#pushButton_47::hover{\n"
"border-image: url(white.png);\n"
"color:rgb(103,58,183);\n"
"}"));

        verticalLayout_25->addWidget(pushButton_47);

        pushButton_46 = new QPushButton(frame_19);
        pushButton_46->setObjectName(QString::fromUtf8("pushButton_46"));
        pushButton_46->setFont(font1);
        pushButton_46->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_46->setStyleSheet(QString::fromUtf8("border-image: url(white.png);\n"
"padding:18px;\n"
"font: 900 11pt \"Arial Black\";\n"
"text-align:left;\n"
"color:rgb(103,58,183);"));

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

        mainBody = new QWidget(PendingRequests);
        mainBody->setObjectName(QString::fromUtf8("mainBody"));
        mainBody->setMinimumSize(QSize(0, 0));
        mainBody->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_27 = new QVBoxLayout(mainBody);
        verticalLayout_27->setObjectName(QString::fromUtf8("verticalLayout_27"));
        verticalLayout_27->setContentsMargins(0, 0, 0, 0);
        HeaderFrame_6 = new QWidget(mainBody);
        HeaderFrame_6->setObjectName(QString::fromUtf8("HeaderFrame_6"));
        HeaderFrame_6->setMinimumSize(QSize(0, 90));
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
        verticalLayout_2 = new QVBoxLayout(mainFrame_6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        scrollArea = new QScrollArea(mainFrame_6);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setMinimumSize(QSize(740, 580));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_3"));
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 874, 578));
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents_3);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer = new QSpacerItem(20, 555, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        scrollArea->setWidget(scrollAreaWidgetContents_3);

        verticalLayout_2->addWidget(scrollArea);


        verticalLayout_27->addWidget(mainFrame_6);


        horizontalLayout->addWidget(mainBody);


        retranslateUi(PendingRequests);

        QMetaObject::connectSlotsByName(PendingRequests);
    } // setupUi

    void retranslateUi(QDialog *PendingRequests)
    {
        PendingRequests->setWindowTitle(QCoreApplication::translate("PendingRequests", "Dialog", nullptr));
        label_10->setText(QCoreApplication::translate("PendingRequests", "UMS", nullptr));
        pushButton_39->setText(QString());
        pushButton_40->setText(QCoreApplication::translate("PendingRequests", "Profile", nullptr));
        pushButton_41->setText(QCoreApplication::translate("PendingRequests", "Add Student", nullptr));
        pushButton_43->setText(QCoreApplication::translate("PendingRequests", "Students Data", nullptr));
        pushButton_42->setText(QCoreApplication::translate("PendingRequests", "Add Course", nullptr));
        pushButton_47->setText(QCoreApplication::translate("PendingRequests", "Courses Data", nullptr));
        pushButton_46->setText(QCoreApplication::translate("PendingRequests", "Pending Requests", nullptr));
        pushButton_44->setText(QCoreApplication::translate("PendingRequests", " Log Out", nullptr));
        pushButton_45->setText(QString());
        label_7->setText(QCoreApplication::translate("PendingRequests", "Pending Requests", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PendingRequests: public Ui_PendingRequests {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PENDINGREQUESTS_H
