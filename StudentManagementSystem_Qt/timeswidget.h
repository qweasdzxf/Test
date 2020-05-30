#ifndef TIMESWIDGET_H
#define TIMESWIDGET_H

#include <QWidget>

namespace Ui {
class TimesWidget;
}

class TimesWidget : public QWidget
{
    Q_OBJECT

public:
    explicit TimesWidget(QWidget *parent = nullptr);
    ~TimesWidget();

private:
    Ui::TimesWidget *ui;

signals:
    void display(int number);

private slots:
    void timeUpdate();
    void on_returnButton_clicked();



};



#endif // TIMESWIDGET_H
