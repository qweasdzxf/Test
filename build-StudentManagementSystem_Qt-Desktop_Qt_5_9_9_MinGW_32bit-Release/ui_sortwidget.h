/********************************************************************************
** Form generated from reading UI file 'sortwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SORTWIDGET_H
#define UI_SORTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SortWidget
{
public:
    QPushButton *returnButton;
    QLabel *label;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QRadioButton *ageradioButton;
    QRadioButton *gparadioButton;
    QRadioButton *sradioButton;
    QRadioButton *avgradioButton;
    QTableWidget *tableWidget;
    QPushButton *sortButton;

    void setupUi(QWidget *SortWidget)
    {
        if (SortWidget->objectName().isEmpty())
            SortWidget->setObjectName(QStringLiteral("SortWidget"));
        SortWidget->resize(640, 480);
        returnButton = new QPushButton(SortWidget);
        returnButton->setObjectName(QStringLiteral("returnButton"));
        returnButton->setGeometry(QRect(500, 420, 93, 28));
        label = new QLabel(SortWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(170, 0, 281, 81));
        QFont font;
        font.setFamily(QString::fromUtf8("\344\273\277\345\256\213"));
        font.setPointSize(25);
        label->setFont(font);
        horizontalLayoutWidget = new QWidget(SortWidget);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(30, 100, 571, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        ageradioButton = new QRadioButton(horizontalLayoutWidget);
        ageradioButton->setObjectName(QStringLiteral("ageradioButton"));
        QFont font1;
        font1.setPointSize(15);
        ageradioButton->setFont(font1);

        horizontalLayout->addWidget(ageradioButton);

        gparadioButton = new QRadioButton(horizontalLayoutWidget);
        gparadioButton->setObjectName(QStringLiteral("gparadioButton"));
        gparadioButton->setFont(font1);

        horizontalLayout->addWidget(gparadioButton);

        sradioButton = new QRadioButton(horizontalLayoutWidget);
        sradioButton->setObjectName(QStringLiteral("sradioButton"));
        sradioButton->setFont(font1);

        horizontalLayout->addWidget(sradioButton);

        avgradioButton = new QRadioButton(horizontalLayoutWidget);
        avgradioButton->setObjectName(QStringLiteral("avgradioButton"));
        avgradioButton->setFont(font1);

        horizontalLayout->addWidget(avgradioButton);

        tableWidget = new QTableWidget(SortWidget);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(30, 190, 571, 201));
        sortButton = new QPushButton(SortWidget);
        sortButton->setObjectName(QStringLiteral("sortButton"));
        sortButton->setGeometry(QRect(50, 420, 93, 28));

        retranslateUi(SortWidget);

        QMetaObject::connectSlotsByName(SortWidget);
    } // setupUi

    void retranslateUi(QWidget *SortWidget)
    {
        SortWidget->setWindowTitle(QApplication::translate("SortWidget", "Form", Q_NULLPTR));
        returnButton->setText(QApplication::translate("SortWidget", "\344\270\273\350\217\234\345\215\225", Q_NULLPTR));
        label->setText(QApplication::translate("SortWidget", "\345\255\246\347\224\237\344\277\241\346\201\257\346\216\222\345\272\217", Q_NULLPTR));
        ageradioButton->setText(QApplication::translate("SortWidget", "\345\271\264\351\276\204", Q_NULLPTR));
        gparadioButton->setText(QApplication::translate("SortWidget", "GPA", Q_NULLPTR));
        sradioButton->setText(QApplication::translate("SortWidget", "\346\264\273\345\212\250\345\210\206", Q_NULLPTR));
        avgradioButton->setText(QApplication::translate("SortWidget", "\347\273\274\345\220\210\347\264\240\350\264\250", Q_NULLPTR));
        sortButton->setText(QApplication::translate("SortWidget", "\346\216\222\345\272\217", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SortWidget: public Ui_SortWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SORTWIDGET_H
