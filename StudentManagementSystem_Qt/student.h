#ifndef STUDENTINFO_H
#define STUDENTINFO_H


#include <QMainWindow>
#include <QObject>
#include <QQuickItem>
#include <QSharedDataPointer>
#include <QWidget>
#include<qvector.h>
#include<QtCore>
class Student
{


public:
    Student();

    Student(QString tname,int tid,int tage,int tgpa,int tscore){
        name=tname;
        id=tid;
        age=tage;
        score=tscore;
        gpa=tgpa;
        avg=(gpa*0.9+score*0.1);
    }

    int getId(){
        return id;
    };

    QString getName(){
        return name;
    };

    int getScore(){
        return score;
    };

    int getGpa(){
        return gpa;
    };

    double getAvg(){
        return avg;
    };

    int getAge(){
        return age;
    }

    void setId(int tid){
        id=tid;
    }

    void setName(QString tname){
        name=tname;
    }

    void setAge(int tage){
        age=tage;
    }

    void setGpa(int tgpa){
        gpa=tgpa;
        avg=(gpa*0.9+score*0.1);
    }

    void setScore(int tscore){
        score=tscore;
        avg=(gpa*0.9+score*0.1);
    }

    ~Student(){

    };

private:

    QString name;
    int id,score,gpa,age;
    double avg;
};

#endif // STUDENT_H
