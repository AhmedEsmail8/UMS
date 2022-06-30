/********************************************************************************
** Form generated from reading UI file 'homestudent.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOMESTUDENT_H
#define UI_HOMESTUDENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QWidget *leftMenu;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame;
    QVBoxLayout *verticalLayout_3;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QPushButton *pushButton_2;
    QFrame *frame_3;
    QVBoxLayout *verticalLayout_5;
    QFrame *frame_4;
    QVBoxLayout *verticalLayout_4;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QWidget *mainBody;
    QVBoxLayout *verticalLayout;
    QWidget *HeaderFrame;
    QHBoxLayout *horizontalLayout_2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton;
    QLabel *label;
    QWidget *widget_2;
    QWidget *mainFrame;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1198, 700);
        MainWindow->setMinimumSize(QSize(1198, 700));
        MainWindow->setMaximumSize(QSize(1198, 700));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8("*{\n"
"color:#000;\n"
"}\n"
"#mainBody{\n"
"background-color:#ffffff;\n"
"}\n"
"\n"
"#leftMenu{\n"
"background-color :#9c9c9c;\n"
"}\n"
"#label{\n"
"color:#00007f\n"
"}"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        leftMenu = new QWidget(centralwidget);
        leftMenu->setObjectName(QString::fromUtf8("leftMenu"));
        leftMenu->setMaximumSize(QSize(350, 16777215));
        verticalLayout_2 = new QVBoxLayout(leftMenu);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(10, 0, 0, 0);
        frame = new QFrame(leftMenu);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(frame);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        frame_2 = new QFrame(frame);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout_4 = new QHBoxLayout(frame_2);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_2 = new QLabel(frame_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font;
        font.setFamily(QString::fromUtf8("Goudy Old Style"));
        font.setPointSize(40);
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("COLOR:#000000"));

        horizontalLayout_4->addWidget(label_2, 0, Qt::AlignHCenter|Qt::AlignTop);

        pushButton_2 = new QPushButton(frame_2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setMaximumSize(QSize(38, 38));
        pushButton_2->setStyleSheet(QString::fromUtf8("border-image:url(D:anass2020/3ab3az-material/icons/icons8-cancel-32);"));

        horizontalLayout_4->addWidget(pushButton_2);


        verticalLayout_3->addWidget(frame_2, 0, Qt::AlignTop);

        frame_3 = new QFrame(frame);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame_3->sizePolicy().hasHeightForWidth());
        frame_3->setSizePolicy(sizePolicy);
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        verticalLayout_5 = new QVBoxLayout(frame_3);
        verticalLayout_5->setSpacing(9);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        frame_4 = new QFrame(frame_3);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setEnabled(true);
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(frame_4);
        verticalLayout_4->setSpacing(20);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(25, 0, 0, 0);
        pushButton_3 = new QPushButton(frame_4);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        QFont font1;
        font1.setBold(true);
        font1.setItalic(true);
        font1.setWeight(75);
        pushButton_3->setFont(font1);
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color:#ffffff;\n"
"padding:18px;\n"
"text-align:left;\n"
"border-top-left-radius:30px;\n"
"\n"
""));
        pushButton_3->setIconSize(QSize(20, 16));

        verticalLayout_4->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(frame_4);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setFont(font1);
        pushButton_4->setStyleSheet(QString::fromUtf8("*{padding:18px;\n"
"text-align:left;\n"
"\n"
"}\n"
"\n"
"#pushButton_4::hover{\n"
"border-top-left-radius:30px;\n"
"background-color:#ffffff;\n"
"\n"
"}"));

        verticalLayout_4->addWidget(pushButton_4);

        pushButton_7 = new QPushButton(frame_4);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setFont(font1);
        pushButton_7->setStyleSheet(QString::fromUtf8("*{padding:18px;\n"
"text-align:left;\n"
"}\n"
"\n"
"#pushButton_7::hover{\n"
"border-top-left-radius:30px;\n"
"background-color:#ffffff;\n"
"\n"
"}"));

        verticalLayout_4->addWidget(pushButton_7);

        pushButton_8 = new QPushButton(frame_4);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setFont(font1);
        pushButton_8->setStyleSheet(QString::fromUtf8("*{padding:18px;\n"
"text-align:left;\n"
"}\n"
"\n"
"#pushButton_8::hover{\n"
"border-top-left-radius:30px;\n"
"background-color:#ffffff;\n"
"\n"
"}"));

        verticalLayout_4->addWidget(pushButton_8);

        pushButton_5 = new QPushButton(frame_4);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setFont(font1);
        pushButton_5->setStyleSheet(QString::fromUtf8("*{padding:18px;\n"
"text-align:left;\n"
"}\n"
"\n"
"#pushButton_5::hover{\n"
"border-top-left-radius:30px;\n"
"background-color:#ffffff;\n"
"\n"
"}"));

        verticalLayout_4->addWidget(pushButton_5);

        pushButton_6 = new QPushButton(frame_4);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setFont(font1);
        pushButton_6->setStyleSheet(QString::fromUtf8("*{padding:18px;\n"
"text-align:left;\n"
"}\n"
"\n"
"#pushButton_6::hover{\n"
"border-top-left-radius:30px;\n"
"background-color:#ffffff;\n"
"\n"
"}"));

        verticalLayout_4->addWidget(pushButton_6);


        verticalLayout_5->addWidget(frame_4);


        verticalLayout_3->addWidget(frame_3, 0, Qt::AlignTop);


        verticalLayout_2->addWidget(frame, 0, Qt::AlignTop);


        horizontalLayout->addWidget(leftMenu);

        mainBody = new QWidget(centralwidget);
        mainBody->setObjectName(QString::fromUtf8("mainBody"));
        verticalLayout = new QVBoxLayout(mainBody);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        HeaderFrame = new QWidget(mainBody);
        HeaderFrame->setObjectName(QString::fromUtf8("HeaderFrame"));
        HeaderFrame->setMaximumSize(QSize(16777215, 90));
        horizontalLayout_2 = new QHBoxLayout(HeaderFrame);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(HeaderFrame);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setMaximumSize(QSize(220, 16777215));
        horizontalLayout_3 = new QHBoxLayout(widget);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(10, 20));
        pushButton->setMaximumSize(QSize(45, 45));
        pushButton->setStyleSheet(QString::fromUtf8("border-image:url(D:anass2020/3ab3az-material/icons/icons8-menu-64);"));

        horizontalLayout_3->addWidget(pushButton);

        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMaximumSize(QSize(120, 16777215));
        QFont font2;
        font2.setPointSize(15);
        font2.setBold(true);
        font2.setWeight(75);
        label->setFont(font2);

        horizontalLayout_3->addWidget(label);


        horizontalLayout_2->addWidget(widget);

        widget_2 = new QWidget(HeaderFrame);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));

        horizontalLayout_2->addWidget(widget_2);


        verticalLayout->addWidget(HeaderFrame);

        mainFrame = new QWidget(mainBody);
        mainFrame->setObjectName(QString::fromUtf8("mainFrame"));
        QFont font3;
        font3.setItalic(true);
        mainFrame->setFont(font3);

        verticalLayout->addWidget(mainFrame);


        horizontalLayout->addWidget(mainBody);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1198, 20));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "UMS", nullptr));
        pushButton_2->setText(QString());
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Home", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "Current Cources", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "Register Cources", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "Finished Cources", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "Profile", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", " Log Out", nullptr));
        pushButton->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "Dashboard", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOMESTUDENT_H
