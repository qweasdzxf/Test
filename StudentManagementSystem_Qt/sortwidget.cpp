#include "sortwidget.h"
#include "ui_sortwidget.h"
#include<algorithm>
#include<QButtonGroup>
#include<student.h>
#include<qvector.h>
#include <QTableWidgetItem>
#include<qstring.h>

SortWidget::SortWidget(QWidget *parent) :
    QWidget(parent),

    ui(new Ui::SortWidget)

{
    ui->setupUi(this);

    sortButtonGroup = new QButtonGroup();
    //实例化一个按钮族群

    sortButtonGroup->addButton(ui->ageradioButton,0);
    //代表年龄的单选框放入第一位并标注id为0

    sortButtonGroup->addButton(ui->gparadioButton,1);

    sortButtonGroup->addButton(ui->sradioButton,2);

    sortButtonGroup->addButton(ui->avgradioButton,3);

    ui->ageradioButton->setChecked(true);

    //年龄默认选中

    ui->tableWidget->setColumnCount(6);

    QStringList headerlabels;

    headerlabels <<tr("姓名")<<tr("学号")<<tr("年龄")<<tr("GPA")<<tr("活动分")<<tr("综合");

    ui->tableWidget->setHorizontalHeaderLabels(headerlabels);
    //设置水平表头标签

    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    //根据当前页面的拉伸幅度确定

    ui->tableWidget->setRowCount(1);
    //初始行列设置为1

}

SortWidget::~SortWidget()
{
    delete ui;
}

void SortWidget::on_returnButton_clicked(){
    emit display(0);
}

bool getStudentInfo(QVector<Student> &StudentInfo){ //用来读取信息的 如果读取成功了则返回1 如果没成功则返回0
    QFile file("student.txt");

    file.open(QIODevice::ReadOnly|QIODevice::Text);

    QTextStream inp(&file);

    if(!file.isOpen()){
        QMessageBox::about(NULL,"反馈","文件打开失败");
        return false;
    }
    while(!inp.atEnd()){
        QString name;

        int id,age,gpa,score;

        inp>>name>>id>>age>>gpa>>score;

        StudentInfo.push_back(Student(name,id,age,gpa,score));
    }
    StudentInfo.pop_back();

    file.close();

    return true;
}

bool cmp_age(Student a,Student b){

    return a.getAge()>b.getAge();
}

bool cmp_gpa(Student a,Student b){

    return a.getGpa()>b.getGpa();
}

bool cmp_score(Student a,Student b){

    return a.getScore()>b.getScore();
}

bool cmp_avg(Student a,Student b){

    return a.getAvg()>b.getAvg();
}

void SortWidget::on_sortButton_clicked(){

    ui->tableWidget->clearContents();
    //清楚除了表头外的所有内容

    int sortTag = sortButtonGroup->checkedId();
    //获得当前选中的单选框的ID

    QVector<Student> StudentInfo;
    //数据类型为student的vector容器

    if(!getStudentInfo(StudentInfo)){
        QMessageBox::about(NULL,"反馈","文件打开失败");
        return;
    }

    if(StudentInfo.empty()){
        QMessageBox::about(NULL,"反馈","未查找到相关信息");
        return;
    }

    switch(sortTag){

        case 0:
        //根据年龄排序
            std::sort(StudentInfo.begin(),StudentInfo.end(),cmp_age);
        break;

        case 1:
        //按照gpa排序
            std::sort(StudentInfo.begin(),StudentInfo.end(),cmp_gpa);
        break;

        case 2:
        //按照score排序
            std::sort(StudentInfo.begin(),StudentInfo.end(),cmp_score);
        break;

        case 3:
            std::sort(StudentInfo.begin(),StudentInfo.end(),cmp_avg);
        break;

    }

    //在这块的时候 studentinfo里面已经是根据switch循环排好序的成员了
    //我们只需要考虑怎么输出就行了

    ui->tableWidget->setRowCount(StudentInfo.size());
    //将表格的行数设置为与学生数量相同的情况

    for (int i=0;i<StudentInfo.size(); i++){
        //QTableWidgetItem是一个类

        ui -> tableWidget ->setItem(i,0,new QTableWidgetItem(StudentInfo[i].getName()));
        //此处I即是行数 又是学生从高到低的排名 一举两得了
        ui -> tableWidget ->setItem(i,1,new QTableWidgetItem(QString::number(StudentInfo[i].getId())));
        ui -> tableWidget ->setItem(i,2,new QTableWidgetItem(QString::number(StudentInfo[i].getAge())));
        ui -> tableWidget ->setItem(i,3,new QTableWidgetItem(QString::number(StudentInfo[i].getGpa())));
        ui -> tableWidget ->setItem(i,4,new QTableWidgetItem(QString::number(StudentInfo[i].getScore())));
        ui -> tableWidget ->setItem(i,5,new QTableWidgetItem(QString::number(StudentInfo[i].getAvg())));
    }
}

//只有qstring类型 能够在qtablewiget里面显示 进行转换
