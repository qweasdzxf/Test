/********************************************************************************
** Form generated from reading UI file 'selectwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECTWIDGET_H
#define UI_SELECTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SelectWidget
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_6;
    QLabel *label_7;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *shownameLabel;
    QLabel *showageLabel;
    QLabel *showgpaLabel;
    QLabel *showscoreLabel;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QPushButton *selectButton;
    QPushButton *returnButton;

    void setupUi(QWidget *SelectWidget)
    {
        if (SelectWidget->objectName().isEmpty())
            SelectWidget->setObjectName(QString::fromUtf8("SelectWidget"));
        SelectWidget->resize(640, 480);
        label = new QLabel(SelectWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(170, -20, 371, 141));
        QFont font;
        font.setFamily(QString::fromUtf8("\344\273\277\345\256\213"));
        font.setPointSize(25);
        label->setFont(font);
        label_2 = new QLabel(SelectWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(60, 90, 111, 51));
        QFont font1;
        font1.setPointSize(18);
        label_2->setFont(font1);
        lineEdit = new QLineEdit(SelectWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(150, 110, 113, 21));
        verticalLayoutWidget = new QWidget(SelectWidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(60, 140, 141, 281));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font2.setPointSize(18);
        label_3->setFont(font2);

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(verticalLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font1);

        verticalLayout->addWidget(label_4);

        label_6 = new QLabel(verticalLayoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font1);

        verticalLayout->addWidget(label_6);

        label_7 = new QLabel(verticalLayoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font1);

        verticalLayout->addWidget(label_7);

        verticalLayoutWidget_2 = new QWidget(SelectWidget);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(260, 140, 160, 281));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        shownameLabel = new QLabel(verticalLayoutWidget_2);
        shownameLabel->setObjectName(QString::fromUtf8("shownameLabel"));

        verticalLayout_2->addWidget(shownameLabel);

        showageLabel = new QLabel(verticalLayoutWidget_2);
        showageLabel->setObjectName(QString::fromUtf8("showageLabel"));

        verticalLayout_2->addWidget(showageLabel);

        showgpaLabel = new QLabel(verticalLayoutWidget_2);
        showgpaLabel->setObjectName(QString::fromUtf8("showgpaLabel"));

        verticalLayout_2->addWidget(showgpaLabel);

        showscoreLabel = new QLabel(verticalLayoutWidget_2);
        showscoreLabel->setObjectName(QString::fromUtf8("showscoreLabel"));

        verticalLayout_2->addWidget(showscoreLabel);

        verticalLayoutWidget_3 = new QWidget(SelectWidget);
        verticalLayoutWidget_3->setObjectName(QString::fromUtf8("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(490, 110, 101, 311));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        selectButton = new QPushButton(verticalLayoutWidget_3);
        selectButton->setObjectName(QString::fromUtf8("selectButton"));

        verticalLayout_3->addWidget(selectButton);

        returnButton = new QPushButton(verticalLayoutWidget_3);
        returnButton->setObjectName(QString::fromUtf8("returnButton"));

        verticalLayout_3->addWidget(returnButton);


        retranslateUi(SelectWidget);

        QMetaObject::connectSlotsByName(SelectWidget);
    } // setupUi

    void retranslateUi(QWidget *SelectWidget)
    {
        SelectWidget->setWindowTitle(QCoreApplication::translate("SelectWidget", "Form", nullptr));
        label->setText(QCoreApplication::translate("SelectWidget", "\346\237\245\350\257\242\345\255\246\347\224\237\344\277\241\346\201\257", nullptr));
        label_2->setText(QCoreApplication::translate("SelectWidget", "\345\255\246\345\217\267", nullptr));
        label_3->setText(QCoreApplication::translate("SelectWidget", "\345\247\223\345\220\215", nullptr));
        label_4->setText(QCoreApplication::translate("SelectWidget", "\345\271\264\351\276\204", nullptr));
        label_6->setText(QCoreApplication::translate("SelectWidget", "\346\200\273\346\210\220\347\273\251", nullptr));
        label_7->setText(QCoreApplication::translate("SelectWidget", "\346\264\273\345\212\250\345\210\206", nullptr));
        shownameLabel->setText(QCoreApplication::translate("SelectWidget", "TextLabel", nullptr));
        showageLabel->setText(QCoreApplication::translate("SelectWidget", "TextLabel", nullptr));
        showgpaLabel->setText(QCoreApplication::translate("SelectWidget", "TextLabel", nullptr));
        showscoreLabel->setText(QCoreApplication::translate("SelectWidget", "TextLabel", nullptr));
        selectButton->setText(QCoreApplication::translate("SelectWidget", "\346\237\245\350\257\242", nullptr));
        returnButton->setText(QCoreApplication::translate("SelectWidget", "\344\270\273\350\217\234\345\215\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SelectWidget: public Ui_SelectWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTWIDGET_H
