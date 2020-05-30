#include "addstudentwidget.h"
#include "ui_addstudentwidget.h"

AddStudentWidget::AddStudentWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AddStudentWidget)
{
    ui->setupUi(this);
}

AddStudentWidget::~AddStudentWidget()
{
    delete ui;
}

void AddStudentWidget::on_returnButton_clicked(){
    emit display(0);

}//主菜单按钮点击 发送了
//一旦按下这个按钮，则槽函数emit一个display（0）传到信号里对应头文件中的display(int number)
//根据信号与槽函数 这个信号发出了以后 在stacklayout里根据相应的数字 设置相应的页面

void AddStudentWidget::on_addButton_clicked(){
    QString name = ui->namelineEdit->text();
    //将用户输入的姓名用相应的框取出

    int id = ui->idlineEdit->text().toInt();
    //将用户输入的学号用相应的框取出

    int gpa = ui->gpalineEdit->text().toInt();
    //将用户输入的成绩用相应的框取出

    int score =ui->scorelineEdit->text().toInt();
    //将用户输入的活动分用相应的框取出

    int age=ui->agelineEdit->text().toInt();
    //将用户输入的年龄用相应的框取出

    if(ui->namelineEdit->text()==""||ui->agelineEdit->text()==""||ui->scorelineEdit->text()==""||ui->gpalineEdit->text()==""||ui->idlineEdit->text()=="")
            QMessageBox::about(NULL,"注意","别输入空项");
            //不能输入为空 否则会弹出窗口about 提醒

     QFile file("student.txt");//作为数据文件
     file.open(QIODevice::WriteOnly|QIODevice::Append|QIODevice::Text);
     //只写方式打开 text代表打开的是文本文件 text：When reading, the end-of-line terminators are translated to '\n'. When writing, the end-of-line terminators are translated to the local encoding, for example '\r\n' for Win32.
     //意思就是会对文本的末尾结束符进行本地转译操作
     //apend意思是在末尾追加

     if(!file.isOpen()){ //没打开的话怎么办
         QMessageBox::about(NULL,"注意","文件打开失败");
        return;
     }

     QTextStream out(&file);

     out<<name<<" "<<id<<" "<<age<<" "<<gpa<<" "<<score;//将数据插入文件里

     file.close();

     QMessageBox::about(NULL,"反馈","插入成功");

     ui->namelineEdit->clear();

     ui->idlineEdit->clear();

     ui->gpalineEdit->clear();

     ui->scorelineEdit->clear();

     ui->agelineEdit->clear();//将用户的数据清空




}

