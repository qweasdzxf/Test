/********************************************************************************
** Form generated from reading UI file 'timeswidget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TIMESWIDGET_H
#define UI_TIMESWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TimesWidget
{
public:
    QLabel *textlabel;
    QPushButton *returnButton;

    void setupUi(QWidget *TimesWidget)
    {
        if (TimesWidget->objectName().isEmpty())
            TimesWidget->setObjectName(QString::fromUtf8("TimesWidget"));
        TimesWidget->resize(590, 485);
        textlabel = new QLabel(TimesWidget);
        textlabel->setObjectName(QString::fromUtf8("textlabel"));
        textlabel->setGeometry(QRect(120, 140, 341, 101));
        returnButton = new QPushButton(TimesWidget);
        returnButton->setObjectName(QString::fromUtf8("returnButton"));
        returnButton->setGeometry(QRect(340, 390, 141, 41));

        retranslateUi(TimesWidget);

        QMetaObject::connectSlotsByName(TimesWidget);
    } // setupUi

    void retranslateUi(QWidget *TimesWidget)
    {
        TimesWidget->setWindowTitle(QCoreApplication::translate("TimesWidget", "Form", nullptr));
        textlabel->setText(QCoreApplication::translate("TimesWidget", "TextLabel", nullptr));
        returnButton->setText(QCoreApplication::translate("TimesWidget", "\344\270\273\350\217\234\345\215\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TimesWidget: public Ui_TimesWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TIMESWIDGET_H
