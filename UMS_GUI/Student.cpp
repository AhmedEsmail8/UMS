#include "Student.h"

Student::~Student() {
//    db.close();
}

Student::Student() {
    db = QSqlDatabase::addDatabase("QSQLITE");

    db.setDatabaseName("ums.db");
    db.open();
}

Student::Student(QSqlDatabase db){
    this->db=db;
}

bool Student::login(unsigned long long id, string password) {
    string s = to_string(id);
    QString Qstr_id = QString::fromStdString(s);
    QString Qstr_pass = QString::fromStdString(password);
    QSqlQuery query;
    if(query.exec("select * from student where id = " + Qstr_id + " and password = '"+Qstr_pass+"';")){
        bool b=query.first();
        if (!b)
            return 0;
        this->name = query.value(1).toString().toStdString();
        this->id = id;
        this->password = query.value(2).toString().toStdString();
        this->academic_year = query.value(3).toInt();
    }
    if (this->name.empty())
        return 0;
    else{
        cout << "welcome " << this->name << '\n';
        QSqlQuery query2;
        if (query2.exec("select * from in_progress where student_id = " + Qstr_id + ';')){
            vector <int> codes;
            while (query2.next())
                codes.push_back(query2.value(1).toInt());
            for (int &k: codes){
                Course inprogress(k, this->db);
                this->inprogress_courses.push_back(inprogress);
            }
        }
        cout << "courses\n";
        for (Course& k : this->inprogress_courses)
            cout << k.code << ' ' << k.hours << ' ' << k.maxNumOfStudents << ' ' << k.name << '\n';
        QSqlQuery query3;
        if (query3.exec("select * from finished_courses where student_id = " + Qstr_id + ";")){
            vector <int> codes2;
            while (query3.next())
                codes2.push_back(query3.value(1).toInt());
            for (int &k:codes2){
                QString Qstr_k = QString::fromStdString(to_string(k));
                QSqlQuery query4;
                if (query4.exec("select * from course where code = " + Qstr_k + ';')){
                    while(query4.next()){
                        Course finished(query4.value(0).toInt(), this->db);
                        this->finished_courses.push_back(finished);
                    }
                }
            }
        }
        cout << "finished courses\n";
        for (Course& k : this->finished_courses)
            cout << k.code << ' ' << k.hours << ' ' << k.maxNumOfStudents << ' ' << k.name << '\n';
        // pending courses
        QSqlQuery query7;
        if (query7.exec("SELECT * FROM pending_courses WHERE student_id = "+ QString::fromStdString(to_string(this->id))) + ';'){
            while (query7.next()){
                Course course_tmp(query7.value(1).toInt(), this->db);
                this->pending_courses.push_back(course_tmp);
            }
        }
        // available courses
        set <int> available = this->available_courses();
        for (auto it=available.begin(); it!=available.end(); it++){
            Course course_tmp(*it, this->db);
            this->available_coursesVec.push_back(course_tmp);
        }
        return 1;
    }
}

bool Student::admin_login(unsigned long long id) {
    string s = to_string(id);
    QString Qstr_id = QString::fromStdString(s);
    QSqlQuery query;
    if(query.exec("select * from student where id = " + Qstr_id + ";")){
        bool b=query.first();
        if (!b)
            return 0;
        this->name = query.value(1).toString().toStdString();
        this->id = id;
        this->password = query.value(2).toString().toStdString();
        this->academic_year = query.value(3).toInt();
    }
    if (this->name.empty())
        return 0;
    else{
        cout << "welcome " << this->name << '\n';
        QSqlQuery query2;
        if (query2.exec("select * from in_progress where student_id = " + Qstr_id + ';')){
            vector <int> codes;
            while (query2.next())
                codes.push_back(query2.value(1).toInt());
            for (int &k: codes){
                Course inprogress(k, this->db);
                this->inprogress_courses.push_back(inprogress);
            }
        }
        cout << "courses\n";
        for (Course& k : this->inprogress_courses)
            cout << k.code << ' ' << k.hours << ' ' << k.maxNumOfStudents << ' ' << k.name << '\n';
        QSqlQuery query3;
        if (query3.exec("select * from finished_courses where student_id = " + Qstr_id + ';')){
            vector <int> codes2;
            while (query3.next())
                codes2.push_back(query3.value(1).toInt());
            for (int &k:codes2){
                QString Qstr_k = QString::fromStdString(to_string(k));
                QSqlQuery query4;
                if (query4.exec("select * from course where code = " + Qstr_k + ';')){
                    while(query4.next()){
                        Course finished(query4.value(0).toInt(), this->db);
                        this->finished_courses.push_back(finished);
                    }
                }
            }
        }
        cout << "finished courses\n";
        for (Course& k : this->finished_courses)
            cout << k.code << ' ' << k.hours << ' ' << k.maxNumOfStudents << ' ' << k.name << '\n';
        // pending courses
        QSqlQuery query7;
        if (query7.exec("SELECT * FROM pending_courses WHERE student_id = "+ QString::fromStdString(to_string(this->id))) + ';'){
            while (query7.next()){
                Course course_tmp(query7.value(1).toInt(), this->db);
                this->pending_courses.push_back(course_tmp);
            }
        }
        // available courses
        set <int> available = this->available_courses();
        for (auto it=available.begin(); it!=available.end(); it++){
            Course course_tmp(*it, this->db);
            this->available_coursesVec.push_back(course_tmp);
        }
        return 1;
    }
}

Course Student::course_details(int code) {
    Course course(code, this->db);
    return course;
}

void Student::Edit_password(string newpassword)
{
    QString Qstr_pass = QString::fromStdString(newpassword);
    qDebug()<<Qstr_pass;
    QString Qstr_id = QString::fromStdString(to_string(this->id));
    QSqlQuery query;
    bool b = query.exec("UPDATE Student SET password = '" + Qstr_pass + "' WHERE id = " + Qstr_id + ";");
    if (!b)
        qDebug() << query.lastError() << '\n';
}

set <int> Student::available_courses() {
    map <int, bool> my_courses;
    for (Course& course : this->finished_courses)
        my_courses[course.code] = 1;
    for (Course& course : this->inprogress_courses)
        my_courses[course.code] = 1;
    for (Course& course : this->pending_courses)
        my_courses[course.code] = 1;
    set <int> ans;
    for (Course& course : this->finished_courses) {
        QString Qstr_code = QString::fromStdString(to_string(course.code));
        QSqlQuery query;
        if (query.exec("SELECT * FROM prerequired_courses WHERE required_code = " + Qstr_code + ';')){
            while(query.next()){
                int code = query.value(0).toInt();
                if (!my_courses[code])
                    ans.insert(code);
            }
        }
    }
    QSqlQuery query2;
    if (query2.exec("select course.code from course LEFT JOIN prerequired_courses ON prerequired_courses.code = course.code WHERE prerequired_courses.code IS NULL")){
        while(query2.next()){
            int code = query2.value(0).toInt();
            if (!my_courses[code])
                ans.insert(code);
        }
    }
    vector <int> codes2;
    for (Course& course : this->finished_courses)
        codes2.push_back(course.code);
    for (auto it = ans.begin(); it != ans.end(); it++) {
        Course tmp(*it, this->db);
        vector <int> codes;
        for (Course& course : tmp.prerequired_courses)
            codes.push_back(course.code);
        if (!all_in(codes, codes2))
            ans.erase(it);
    }
    return ans;
}

bool Student::all_in(vector <int> v1, vector <int> v2) {
    for (int& code : v1) {
        if (find(v2.begin(), v2.end(), code) == v2.end())
            return 0;
    }
    return 1;
}

void Student::register_course(int code)
{
    QString Qstr_code = QString::fromStdString(to_string(code));
    QString Qstr_id = QString::fromStdString(to_string(this->id));
    QSqlQuery query;
    bool b = query.exec("insert into pending_courses values (" + Qstr_id + "," + Qstr_code + ") ;");
    if (!b)
        qDebug() << query.lastError() << '\n';
}

void Student::removeCurrentCourse(int code){
    QSqlQuery query;
    if (!query.exec("DELETE FROM in_progress WHERE student_id = "+QString::fromStdString(to_string(this->id))+" AND course_code = "+QString::fromStdString(to_string(code))))
        qDebug()<<(query.lastError());
    this->inprogress_courses.clear();
    QSqlQuery query2;
    if (query2.exec("select * from in_progress where student_id = " + QString::fromStdString(to_string(this->id)) + ';')){
        vector <int> codes;
        while (query2.next())
            codes.push_back(query2.value(1).toInt());
        for (int &k: codes){
            Course inprogress(k, this->db);
            this->inprogress_courses.push_back(inprogress);
        }
    }
}

void Student::removeFinishedCourse(int code){
    QSqlQuery query;
    if (!query.exec("DELETE FROM finished_courses WHERE student_id = "+QString::fromStdString(to_string(this->id))+" AND course_code = "+QString::fromStdString(to_string(code))))
        qDebug()<<(query.lastError());
    this->finished_courses.clear();
    QSqlQuery query3;
    if (query3.exec("select * from finished_courses where student_id = " + QString::fromStdString(to_string(this->id)) + ";")){
        vector <int> codes2;
        while (query3.next())
            codes2.push_back(query3.value(1).toInt());
        for (int &k:codes2){
            QString Qstr_k = QString::fromStdString(to_string(k));
            QSqlQuery query4;
            if (query4.exec("select * from course where code = " + Qstr_k + ';')){
                while(query4.next()){
                    Course finished(query4.value(0).toInt(), this->db);
                    this->finished_courses.push_back(finished);
                }
            }
        }
    }
}

void Student::addCurrentCourse(int code){
    QSqlQuery query;
    if (!query.exec("INSERT INTO in_progress VALUES("+QString::fromStdString(to_string(this->id))+", "+QString::fromStdString(to_string(code))+");"))
        qDebug()<<(query.lastError());
    Course tmp(code,db);
    this->inprogress_courses.push_back(tmp);
}

void Student::addFinishedCourse(int code){
    QSqlQuery query;
    if (!query.exec("INSERT INTO finished_courses VALUES("+QString::fromStdString(to_string(this->id))+", "+QString::fromStdString(to_string(code))+");"))
        qDebug()<<(query.lastError());
    Course tmp(code,db);
    this->finished_courses.push_back(tmp);
}

void Student::editGrade(int year){
    QSqlQuery query;
    if (!query.exec("UPDATE student SET academic_year = "+QString::fromStdString(to_string(year))+" WHERE id = "+QString::fromStdString(to_string(this->id))+";"))
        qDebug()<<(query.lastError());
    this->academic_year=year;
}

void Student::editName(string newName){
    QSqlQuery query;
    if (!query.exec("UPDATE student SET name = "+QString::fromStdString(newName)+" WHERE id = "+QString::fromStdString(to_string(this->id))+";"))
        qDebug()<<(query.lastError());
    this->name=newName;
}

void Student::reset(){
   this->inprogress_courses.clear();
   this->finished_courses.clear();
   this->available_coursesVec.clear();
   this->pending_courses.clear();
}


