#ifndef DBCONNECT_H
#define DBCONNECT_H

#include <QDialog>

namespace Ui {
class DbConnect;
}

class DbConnect : public QDialog
{
    Q_OBJECT

public:
    explicit DbConnect(QWidget *parent = nullptr);
    ~DbConnect();

    void createDB();
    //建立数据库

private slots:
    void on_submit_clicked();
    //连接槽函数

    void on_cancel_clicked();
    //取消槽函数

private:
    Ui::DbConnect *ui;
};

#endif // DBCONNECT_H
