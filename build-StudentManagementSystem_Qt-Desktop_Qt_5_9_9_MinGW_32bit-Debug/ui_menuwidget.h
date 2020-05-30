/********************************************************************************
** Form generated from reading UI file 'menuwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENUWIDGET_H
#define UI_MENUWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
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
            MenuWidget->setObjectName(QStringLiteral("MenuWidget"));
        MenuWidget->resize(724, 480);
        MenuWidget->setStyleSheet(QStringLiteral(""));
        modifyButton = new QPushButton(MenuWidget);
        modifyButton->setObjectName(QStringLiteral("modifyButton"));
        modifyButton->setGeometry(QRect(370, 350, 171, 51));
        addButton = new QPushButton(MenuWidget);
        addButton->setObjectName(QStringLiteral("addButton"));
        addButton->setGeometry(QRect(370, 260, 171, 51));
        sortButton = new QPushButton(MenuWidget);
        sortButton->setObjectName(QStringLiteral("sortButton"));
        sortButton->setGeometry(QRect(80, 350, 171, 51));
        selectButton = new QPushButton(MenuWidget);
        selectButton->setObjectName(QStringLiteral("selectButton"));
        selectButton->setGeometry(QRect(80, 260, 171, 51));
        exitButton = new QPushButton(MenuWidget);
        exitButton->setObjectName(QStringLiteral("exitButton"));
        exitButton->setGeometry(QRect(510, 430, 93, 28));
        label = new QLabel(MenuWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(150, -10, 451, 121));
        QFont font;
        font.setFamily(QString::fromUtf8("\344\273\277\345\256\213"));
        font.setPointSize(27);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label_2 = new QLabel(MenuWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
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
        MenuWidget->setWindowTitle(QApplication::translate("MenuWidget", "Form", Q_NULLPTR));
        modifyButton->setText(QApplication::translate("MenuWidget", "\344\277\256\346\224\271\344\277\241\346\201\257", Q_NULLPTR));
        addButton->setText(QApplication::translate("MenuWidget", "\346\267\273\345\212\240\345\255\246\347\224\237", Q_NULLPTR));
        sortButton->setText(QApplication::translate("MenuWidget", "\346\216\222\345\272\217\345\212\237\350\203\275", Q_NULLPTR));
        selectButton->setText(QApplication::translate("MenuWidget", "\346\237\245\350\257\242\345\255\246\347\224\237", Q_NULLPTR));
        exitButton->setText(QApplication::translate("MenuWidget", "\351\200\200\345\207\272", Q_NULLPTR));
        label->setText(QApplication::translate("MenuWidget", "\345\255\246\347\224\237\344\277\241\346\201\257\347\263\273\347\273\2370.2beta", Q_NULLPTR));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MenuWidget: public Ui_MenuWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENUWIDGET_H
