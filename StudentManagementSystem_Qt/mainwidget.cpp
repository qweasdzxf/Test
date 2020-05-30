#include "mainwidget.h"
#include "ui_mainwidget.h"
#include<QFrame>
#include<QtCore>

MainWidget::MainWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MainWidget)
{
    ui->setupUi(this);



    menuwidget = new MenuWidget;

    addstudentwidget = new AddStudentWidget;

    selectwidget = new SelectWidget;

    modifywidget = new ModifyWidget;

    sortwidget = new SortWidget;

    timeswidget = new TimesWidget;

    stackLayout = new QStackedLayout;

    stackLayout->addWidget(menuwidget);
    //把不同的界面压到stacklayout栈里 按照栈的运行逻辑 先压入的排在0号位置

    stackLayout->addWidget(addstudentwidget);

    stackLayout->addWidget(selectwidget);

    stackLayout->addWidget(modifywidget);

    stackLayout->addWidget(sortwidget);

    stackLayout->addWidget(timeswidget);

    setLayout(stackLayout);
//
    connect(menuwidget, &MenuWidget::display, stackLayout, &QStackedLayout::setCurrentIndex);

    connect(addstudentwidget, &AddStudentWidget::display, stackLayout, &QStackedLayout::setCurrentIndex);

    connect(selectwidget, &SelectWidget::display, stackLayout, &QStackedLayout::setCurrentIndex);

    connect(modifywidget, &ModifyWidget::display, stackLayout, &QStackedLayout::setCurrentIndex);

    connect(sortwidget, &SortWidget::display, stackLayout, &QStackedLayout::setCurrentIndex);

    connect(timeswidget,&TimesWidget::display,stackLayout,&QStackedLayout::setCurrentIndex);
}

//具体执行的时候是两段信号槽
//第一段是ui中的button发出信号 函数槽函数调用emit display（）
//第二段是display（）作为信号 在栈中跳转到相应的界面

MainWidget::~MainWidget()
{
    delete ui;
}
