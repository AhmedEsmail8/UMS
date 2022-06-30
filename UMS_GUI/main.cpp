#include "login2.h"
#include "Student.h"
#include "Admin_Profile.h"
#include <QApplication>
#include <sstream>
#include <QSplashScreen>
#include <QTimer>
#include <QThread>
#include <QMovie>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QPixmap P("splash.png");
    QSplashScreen *S =new QSplashScreen;
    S->setPixmap(P);
    S->show();
    a.thread()->sleep(1);
    a.processEvents();

    Login2 w;
    w.show();
    S->finish(&w);
    return a.exec();
}
