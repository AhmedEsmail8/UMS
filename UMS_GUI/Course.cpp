#include "Course.h"

Course::Course(QSqlDatabase db) {
    this->db = db;
}

Course::~Course() {
//    db.close();
}

Course::Course(int code, QSqlDatabase x) {
    db = x;
    QSqlQuery query;
    QString Qstr_code = QString::fromStdString(to_string(code));
    if (query.exec("select * from course where code = " + Qstr_code + ';')){
        bool b=query.first();
        if (!b)
            cout<<"no courses\n";
        else{
            this->code = code;
            this->name = query.value(1).toString().toStdString();
            this->maxNumOfStudents = query.value(3).toInt();
            this->hours = query.value(2).toInt();
            QSqlQuery query2;
            if (query2.exec("select * from prerequired_courses where code = " + Qstr_code + ';')){
                while (query2.next()){
                    int required_code;
                    required_code = query2.value(1).toInt();
                    QString Qstr_requiredCode = QString::fromStdString(to_string(required_code));
                    QSqlQuery query3;
                    if (query3.exec("select * from course where code = " + Qstr_requiredCode + ';')){
                        if (query3.first()){
                            Course required_course(x);
                            required_course.code = query3.value(0).toInt();
                            required_course.name = query3.value(1).toString().toStdString();
                            required_course.maxNumOfStudents = query3.value(3).toInt();
                            required_course.hours = query3.value(2).toInt();
                            this->prerequired_courses.push_back(required_course);
                        }
                    }
                }
            }
        }

    }
}

Course::Course(){

}

Course::Course(int code, QSqlDatabase x, bool *b) {
    *b = 1;
    db = x;
    QSqlQuery query;
    QString Qstr_code = QString::fromStdString(to_string(code));
    if (query.exec("select * from course where code = " + Qstr_code + ';')){
        if (!query.first())
            *b = 0;
        else{
            this->code = code;
            this->name = query.value(1).toString().toStdString();
            this->maxNumOfStudents = query.value(3).toInt();
            this->hours = query.value(2).toInt();
            QSqlQuery query2;
            if (query2.exec("select * from prerequired_courses where code = " + Qstr_code + ';')){
                while (query2.next()){
                    int required_code;
                    required_code = query2.value(1).toInt();
                    QString Qstr_requiredCode = QString::fromStdString(to_string(required_code));
                    QSqlQuery query3;
                    if (query3.exec("select * from course where code = " + Qstr_requiredCode + ';')){
                        if (query3.first()){
                            Course required_course(x);
                            required_course.code = query3.value(0).toInt();
                            required_course.name = query3.value(1).toString().toStdString();
                            required_course.maxNumOfStudents = query3.value(3).toInt();
                            required_course.hours = query3.value(2).toInt();
                            this->prerequired_courses.push_back(required_course);
                        }
                    }
                }
            }
        }

    }
}


bool Course::operator==(Course const& course){
    return (this->name==course.name) && (this->code==course.code);
}

bool Course::operator==(string const& course){
    return (this->name==course);
}
