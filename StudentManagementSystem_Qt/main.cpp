#include <QApplication>
#include<QFrame>
#include<login.h>
#include<dbconnect.h>
#include "mainwidget.h"
#include<QtSql>
#include<QtCore>

int main(int argc, char *argv[]){

    QApplication app(argc, argv);
    DbConnect conDialog;
        if(conDialog.exec() != QDialog::Accepted)
            return -1;

    //连接数据库
    Loginwindow w;
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("localhost");
    db.setDatabaseName("test_qt_01");
    db.setUserName("root");
    db.setPort(3306);
    db.setPassword("root1");
    //如果数据库连接成功打开窗口否则退出程序
    if(db.open())
    {
        w.show();
    }
    else
    {
        QMessageBox::warning(NULL,"error","数据库连接失败");
        return 0;
    }

    MainWidget w1 ;
    QPalette palette;
    palette.setColor(QPalette::Background,Qt::lightGray);
    w1.setPalette(palette);
    w1.setAutoFillBackground(true);
    w1.show();


    return app.exec();
}
