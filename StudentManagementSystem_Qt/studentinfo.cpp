#include "studentinfo.h"

class StudentInfoData : public QSharedData
{
public:

};

StudentInfo::StudentInfo() : data(new StudentInfoData)
{

}

StudentInfo::StudentInfo(const StudentInfo &rhs) : data(rhs.data)
{

}

StudentInfo &StudentInfo::operator=(const StudentInfo &rhs)
{
    if (this != &rhs)
        data.operator=(rhs.data);
    return *this;
}

StudentInfo::~StudentInfo()
{

}
