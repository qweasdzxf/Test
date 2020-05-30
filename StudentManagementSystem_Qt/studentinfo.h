#ifndef STUDENTINFO_H
#define STUDENTINFO_H

#include <QDeclarativeItem>
#include <QMainWindow>
#include <QObject>
#include <QQuickItem>
#include <QSharedDataPointer>
#include <QWidget>

class StudentInfoData;

class StudentInfo
{
    Q_OBJECT
public:
    StudentInfo();
    StudentInfo(const StudentInfo &);
    StudentInfo &operator=(const StudentInfo &);
    ~StudentInfo();

private:
    QSharedDataPointer<StudentInfoData> data;
};

#endif // STUDENTINFO_H
