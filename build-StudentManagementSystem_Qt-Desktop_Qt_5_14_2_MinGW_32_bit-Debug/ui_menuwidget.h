/********************************************************************************
** Form generated from reading UI file 'menuwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENUWIDGET_H
#define UI_MENUWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MenuWidget
{
public:
    QPushButton *modifyButton;
    QPushButton *addButton;
    QPushButton *sortButton;
    QPushButton *selectButton;
    QPushButton *exitButton;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QWidget *MenuWidget)
    {
        if (MenuWidget->objectName().isEmpty())
            MenuWidget->setObjectName(QString::fromUtf8("MenuWidget"));
        MenuWidget->resize(724, 480);
        MenuWidget->setStyleSheet(QString::fromUtf8(""));
        modifyButton = new QPushButton(MenuWidget);
        modifyButton->setObjectName(QString::fromUtf8("modifyButton"));
        modifyButton->setGeometry(QRect(370, 350, 171, 51));
        addButton = new QPushButton(MenuWidget);
        addButton->setObjectName(QString::fromUtf8("addButton"));
        addButton->setGeometry(QRect(370, 260, 171, 51));
        sortButton = new QPushButton(MenuWidget);
        sortButton->setObjectName(QString::fromUtf8("sortButton"));
        sortButton->setGeometry(QRect(80, 350, 171, 51));
        selectButton = new QPushButton(MenuWidget);
        selectButton->setObjectName(QString::fromUtf8("selectButton"));
        selectButton->setGeometry(QRect(80, 260, 171, 51));
        exitButton = new QPushButton(MenuWidget);
        exitButton->setObjectName(QString::fromUtf8("exitButton"));
        exitButton->setGeometry(QRect(510, 430, 93, 28));
        label = new QLabel(MenuWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(150, -10, 451, 121));
        QFont font;
        font.setFamily(QString::fromUtf8("\344\273\277\345\256\213"));
        font.setPointSize(27);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label_2 = new QLabel(MenuWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(0, 0, 731, 491));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/background.png")));
        label_2->setScaledContents(true);
        label_2->setWordWrap(false);
        label_2->raise();
        modifyButton->raise();
        addButton->raise();
        sortButton->raise();
        selectButton->raise();
        exitButton->raise();
        label->raise();

        retranslateUi(MenuWidget);

        QMetaObject::connectSlotsByName(MenuWidget);
    } // setupUi

    void retranslateUi(QWidget *MenuWidget)
    {
        MenuWidget->setWindowTitle(QCoreApplication::translate("MenuWidget", "Form", nullptr));
        modifyButton->setText(QCoreApplication::translate("MenuWidget", "\344\277\256\346\224\271\344\277\241\346\201\257", nullptr));
        addButton->setText(QCoreApplication::translate("MenuWidget", "\346\267\273\345\212\240\345\255\246\347\224\237", nullptr));
        sortButton->setText(QCoreApplication::translate("MenuWidget", "\346\216\222\345\272\217\345\212\237\350\203\275", nullptr));
        selectButton->setText(QCoreApplication::translate("MenuWidget", "\346\237\245\350\257\242\345\255\246\347\224\237", nullptr));
        exitButton->setText(QCoreApplication::translate("MenuWidget", "\351\200\200\345\207\272", nullptr));
        label->setText(QCoreApplication::translate("MenuWidget", "\345\255\246\347\224\237\344\277\241\346\201\257\347\263\273\347\273\2370.2beta", nullptr));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MenuWidget: public Ui_MenuWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENUWIDGET_H
