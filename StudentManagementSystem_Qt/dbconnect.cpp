#include "dbconnect.h"
#include "ui_dbconnect.h"
#include<QSqlDatabase>
#include<QMessageBox>
#include<QSqlError>
#include<QtDebug>
#include<QSqlQuery>

DbConnect::DbConnect(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DbConnect)

{
    ui->setupUi(this);
    QStringList drivers = QSqlDatabase::drivers();
    //返回所有可用数据库驱动的清单

    ui->dbComboBox->addItems(drivers);
    ui->status_Label->setText(tr("状态："));

}

DbConnect::~DbConnect()
{
    delete ui;
}

void DbConnect::on_submit_clicked()//连接槽函数
{
    if(ui->dbComboBox->currentText().isEmpty())
    {
        ui->status_Label->setText(tr("Please choose a sql driver"));
        ui->dbComboBox->setFocus();
        //键盘焦点
    }

    else if(ui->dbComboBox->currentText()=="QSQLITE")
        //使用 sqlite数据库
    {
        createDB();
        accept();
    }

    else{
        QMessageBox::about(NULL,"反馈","数据库未成功建立");
    }
}

void DbConnect::createDB()
{
    QSqlError err;
    QSqlDatabase db = QSqlDatabase::addDatabase(("QSQLITE"));
    db.setDatabaseName("student.db");
    db.open();

    if(!db.open())
     {
        err= db.lastError();
        QMessageBox::about(NULL,"警告","数据库打开失败");
    }

    else{
        ui->status_Label->setText(tr("Create sqlite successfully!"));
    }


    QSqlQuery q;
    //执行数据库语句

    bool success = q.exec("create the table");
    if(success){
        QMessageBox::about(NULL,"反馈","已成功创建数据库");
    }
}

void DbConnect::on_cancel_clicked(){
    close();
}
