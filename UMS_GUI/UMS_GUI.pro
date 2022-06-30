QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Add_Course.cpp \
    Admin.cpp \
    Admin_Profile.cpp \
    Course.cpp \
    Student.cpp \
    add_student.cpp \
    course_data.cpp \
    courses.cpp \
    coursestree.cpp \
    currentcourses.cpp \
    finishedcourses.cpp \
    login2.cpp \
    main.cpp \
    pendingrequests.cpp \
    profile.cpp \
    shell.c \
    sqlite3.c \
    student_data.cpp

HEADERS += \
    Add_Course.h \
    Admin.h \
    Admin_Profile.h \
    Course.h \
    Student.h \
    add_student.h \
    course_data.h \
    courses.h \
    coursestree.h \
    currentcourses.h \
    finishedcourses.h \
    login2.h \
    pendingrequests.h \
    profile.h \
    resource.h \
    sqlite3.h \
    sqlite3ext.h \
    student_data.h \
    ui_login.h

FORMS += \
    Add_Course.ui \
    Admin_Profile.ui \
    add_student.ui \
    course_data.ui \
    courses.ui \
    coursestree.ui \
    currentcourses.ui \
    finishedcourses.ui \
    login2.ui \
    pendingrequests.ui \
    profile.ui \
    student_data.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    ums.db
