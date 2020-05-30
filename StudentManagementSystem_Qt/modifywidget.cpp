#include "modifywidget.h"
#include "ui_modifywidget.h"
#include"student.h"
#include <QMessageBox>
#include<addstudentwidget.h>
#include"addstudentwidget.h"
#include <QWidget>



ModifyWidget::ModifyWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ModifyWidget)
{
    ui->setupUi(this);

}

ModifyWidget::~ModifyWidget()
{
    delete ui;
}

void ModifyWidget::on_returnButton_clicked(){
    emit display(0);
}

void ModifyWidget::on_deleteButton_clicked(){
    QVector<Student>StudentInfo;

    if(ui->idlineEdit->text()==""){
        QMessageBox::about(NULL,"反馈","id不为空");
        return;
    }

    QFile file("student.txt");

    file.open(QIODevice::ReadOnly|QIODevice::Text);
    //只读方式打开文件

    if(!file.isOpen()){
        QMessageBox::about(NULL,"反馈","数据文件打开失败");
        return;
    }

    QTextStream inp(&file);
    //建立文本流

    while(!inp.atEnd()){
        QString name;

        int age,id,gpa,score;

        inp >> name>> id>> age>> gpa>> score;

        StudentInfo.push_back(Student(name,id,age,gpa,score));
        //实例化一个对象并将其加入vector中

    }

    StudentInfo.pop_back();
    //跳出最后一个不需要的数据

    file.close();

    int id = ui->idlineEdit->text().toInt();
    //获取用户输入的id

    bool flag = false;
    //接下来的思路是对于studentinfo来说 已经存入了所有构造的学生对象，所以我们需要用迭代器结合之前的id
    //进行遍历操作，如果有遍历的id符合我们所需要的id的话 则进行erase操作
    //同时 再删除操作后 flag会切换成true 如果为true的额话 再次调用一个while循环 用qmessagebox再进行相应的提示、
    //如果 进行过删除的话 更新相应的文件
    //更新文件时思路则利用 qt的I/O流进行输出

    for(QVector<Student>::iterator it=StudentInfo.begin();it!=StudentInfo.end();it++){
        if(it->getId()==id){
            StudentInfo.erase(it);
            flag=true;
            break;
        }
    }

    if(flag){
        QMessageBox::about(NULL,"反馈结果","成功进行删除");
        //这一步完了以后准备进行文本覆盖

        file.open(QIODevice::WriteOnly|QIODevice::Text|QIODevice::Truncate); //truncate按照网上对的说法就是覆盖重写必须要加的，我也不知道为啥其实
        if(!file.isOpen()){
            QMessageBox::about(NULL,"反馈结果","数据文件打开失败");
            return;
        }

        QTextStream out(&file);

        for(auto i:StudentInfo){
            out<<i.getName()<<" "<<i.getId()<<" "<<i.getAge()<<" "<<i.getGpa()<<" "<<i.getScore()<<endl;

        }

        file.close();

    }

    else{
        QMessageBox::about(NULL,"反馈","查无此人！");
    }

    ui->idlineEdit->clear();

}

void ModifyWidget::on_modifyButton_clicked(){

    if(ui->namelineEdit->text()==""||ui->idlineEdit->text()==""||ui->agelineEdit->text()==""||ui->gpalineEdit->text()==""||ui->scorelineEdit->text()==""){
        QMessageBox::about(NULL,"反馈","存在空项");
        return;

    }
    QVector<Student>StudentInfo; //数据类型为student的Qvector容器

    QFile file("student.txt");

    file.open(QIODevice::ReadOnly|QIODevice::Text);

    if(!file.isOpen()){
        QMessageBox::about(NULL,"反馈","数据文件打开失败");
        return;
    }

    QTextStream inp(&file); //建立以file为基础的文本流

    while(!inp.atEnd()){
        QString name;

        int id,gpa,score,age;

        inp>>name>>id>>age>>gpa>>score;

        StudentInfo.push_back(Student(name,id,age,gpa,score));

    }
    //调用构造函数实例化一个student同时append进vector容器里面

    StudentInfo.pop_back();
    //文件最后会多读一个无意义的数据,将其直接弹出

    file.close();

    int id = ui->idlineEdit->text().toInt();
    // 获取用户的id

    QString name = ui->namelineEdit->text();

    int age=ui->agelineEdit->text().toInt();

    int gpa=ui->gpalineEdit->text().toInt();

    int score =ui->scorelineEdit->text().toInt();

    bool flag = false;
    //记录是否进行过删除

    for(QVector<Student>::iterator it=StudentInfo.begin();it != StudentInfo.end();it++){
        if(it->getId()==id){
            it->setName(name);
            it->setId(id);
            it->setAge(age);
            it->setGpa(gpa);
            it->setScore(score);
            flag=true;
        }
    }

    if(flag){
        //删除后进行判断，如果删除了，则弹出相应的数据

        QMessageBox::about(NULL,"反馈","修改成功");

        file.open(QIODevice::WriteOnly|QIODevice::Text|QIODevice::Truncate);
        //Truncate 以重写的方式打开，在写入新的数据时会将原有覆盖

        if(!file.isOpen()){

            QMessageBox::about(NULL,"反馈","数据文件打开失败");

            return;
        }
        QTextStream out(&file);

        for(auto i:StudentInfo){
            //auto的意思是任意变量 可以自定 为了适应int和string混杂的类型

            out<<i.getName()<<" "<<i.getId()<<" "<<i.getAge()<<" "<<i.getGpa()<<" "<<i.getScore()<<endl;

        }

        file.close();

    }else{

        QMessageBox::about(NULL,"反馈","id不存在");
    }
    ui->idlineEdit->clear();
    //清空id输入框

    ui->agelineEdit->clear();

    ui->namelineEdit->clear();

    ui->gpalineEdit->clear();

    ui->scorelineEdit->clear();

}

