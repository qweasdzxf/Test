#include "timeswidget.h"
#include "ui_timeswidget.h"
#include<QTimer>
#include<QDateTime>

TimesWidget::TimesWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TimesWidget)
{
    ui->setupUi(this);
    QTimer *timer = new QTimer(this);
       connect(timer,SIGNAL(timeout()),this,SLOT(timerUpdate()));
       timer->start(1000);
}

TimesWidget::~TimesWidget()
{
    delete ui;
}


void TimesWidget::timeUpdate(){
    QDateTime time = QDateTime::currentDateTime();
      QString str = time.toString("yyyy-MM-dd hh:mm:ss dddd");
      ui->textlabel->setText(str);
}

void TimesWidget::on_returnButton_clicked(){
    emit display(0);
}
