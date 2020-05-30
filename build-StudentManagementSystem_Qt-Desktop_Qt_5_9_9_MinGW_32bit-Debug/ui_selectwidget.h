/********************************************************************************
** Form generated from reading UI file 'selectwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECTWIDGET_H
#define UI_SELECTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
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
            SelectWidget->setObjectName(QStringLiteral("SelectWidget"));
        SelectWidget->resize(640, 480);
        label = new QLabel(SelectWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(170, -20, 371, 141));
        QFont font;
        font.setFamily(QString::fromUtf8("\344\273\277\345\256\213"));
        font.setPointSize(25);
        label->setFont(font);
        label_2 = new QLabel(SelectWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(60, 90, 111, 51));
        QFont font1;
        font1.setPointSize(18);
        label_2->setFont(font1);
        lineEdit = new QLineEdit(SelectWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(150, 110, 113, 21));
        verticalLayoutWidget = new QWidget(SelectWidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(60, 140, 141, 281));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font2.setPointSize(18);
        label_3->setFont(font2);

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(verticalLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font1);

        verticalLayout->addWidget(label_4);

        label_6 = new QLabel(verticalLayoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font1);

        verticalLayout->addWidget(label_6);

        label_7 = new QLabel(verticalLayoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font1);

        verticalLayout->addWidget(label_7);

        verticalLayoutWidget_2 = new QWidget(SelectWidget);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(260, 140, 160, 281));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        shownameLabel = new QLabel(verticalLayoutWidget_2);
        shownameLabel->setObjectName(QStringLiteral("shownameLabel"));

        verticalLayout_2->addWidget(shownameLabel);

        showageLabel = new QLabel(verticalLayoutWidget_2);
        showageLabel->setObjectName(QStringLiteral("showageLabel"));

        verticalLayout_2->addWidget(showageLabel);

        showgpaLabel = new QLabel(verticalLayoutWidget_2);
        showgpaLabel->setObjectName(QStringLiteral("showgpaLabel"));

        verticalLayout_2->addWidget(showgpaLabel);

        showscoreLabel = new QLabel(verticalLayoutWidget_2);
        showscoreLabel->setObjectName(QStringLiteral("showscoreLabel"));

        verticalLayout_2->addWidget(showscoreLabel);

        verticalLayoutWidget_3 = new QWidget(SelectWidget);
        verticalLayoutWidget_3->setObjectName(QStringLiteral("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(490, 110, 101, 311));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        selectButton = new QPushButton(verticalLayoutWidget_3);
        selectButton->setObjectName(QStringLiteral("selectButton"));

        verticalLayout_3->addWidget(selectButton);

        returnButton = new QPushButton(verticalLayoutWidget_3);
        returnButton->setObjectName(QStringLiteral("returnButton"));

        verticalLayout_3->addWidget(returnButton);


        retranslateUi(SelectWidget);

        QMetaObject::connectSlotsByName(SelectWidget);
    } // setupUi

    void retranslateUi(QWidget *SelectWidget)
    {
        SelectWidget->setWindowTitle(QApplication::translate("SelectWidget", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("SelectWidget", "\346\237\245\350\257\242\345\255\246\347\224\237\344\277\241\346\201\257", Q_NULLPTR));
        label_2->setText(QApplication::translate("SelectWidget", "\345\255\246\345\217\267", Q_NULLPTR));
        label_3->setText(QApplication::translate("SelectWidget", "\345\247\223\345\220\215", Q_NULLPTR));
        label_4->setText(QApplication::translate("SelectWidget", "\345\271\264\351\276\204", Q_NULLPTR));
        label_6->setText(QApplication::translate("SelectWidget", "\346\200\273\346\210\220\347\273\251", Q_NULLPTR));
        label_7->setText(QApplication::translate("SelectWidget", "\346\264\273\345\212\250\345\210\206", Q_NULLPTR));
        shownameLabel->setText(QApplication::translate("SelectWidget", "TextLabel", Q_NULLPTR));
        showageLabel->setText(QApplication::translate("SelectWidget", "TextLabel", Q_NULLPTR));
        showgpaLabel->setText(QApplication::translate("SelectWidget", "TextLabel", Q_NULLPTR));
        showscoreLabel->setText(QApplication::translate("SelectWidget", "TextLabel", Q_NULLPTR));
        selectButton->setText(QApplication::translate("SelectWidget", "\346\237\245\350\257\242", Q_NULLPTR));
        returnButton->setText(QApplication::translate("SelectWidget", "\344\270\273\350\217\234\345\215\225", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SelectWidget: public Ui_SelectWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTWIDGET_H
