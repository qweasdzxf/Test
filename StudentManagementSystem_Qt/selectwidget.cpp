#include "selectwidget.h"
#include "ui_selectwidget.h"
#include<student.h>
#include<qstring.h>
#include<QMessageBox>

SelectWidget::SelectWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SelectWidget)
{
    ui->setupUi(this);
}

SelectWidget::~SelectWidget()
{
    delete ui;
}

void SelectWidget::on_returnButton_clicked(){
    emit display(0);

}

void SelectWidget::on_selectButton_clicked(){

    if(ui->lineEdit->text() ==""){

        QMessageBox::about(NULL,"反馈","id不可为空");

        return;
    }

    QFile file("student.txt");

    file.open(QIODevice::ReadOnly|QIODevice::Text);

    if(!file.isOpen()){
        QMessageBox::about(NULL,"反馈","文件未正常打开");
    }

    QTextStream inp(&file);

    QVector<Student> StudentInfo;

    while(!inp.atEnd()){
        QString name;
        int id,age,gpa,score;
        inp>>name>>id>>age>>gpa>>score;
        StudentInfo.push_back(Student(name,id,age,gpa,score));
    }

    StudentInfo.pop_back();

    file.close();

    int id= ui->lineEdit->text().toInt();

    bool flag =false;

    for(auto i :StudentInfo){
        if(i.getId()==id){

            ui->shownameLabel->setText(i.getName());

            ui->showageLabel->setText(QString::number(i.getAge()));

            ui->showgpaLabel->setText(QString::number(i.getGpa()));

            ui->showscoreLabel->setText((QString::number(i.getScore())));

            flag=true;

            break;
        }
}

if(!flag){

    QMessageBox::about(NULL,"反馈","id不存在！");
}

ui->lineEdit->clear();
}
