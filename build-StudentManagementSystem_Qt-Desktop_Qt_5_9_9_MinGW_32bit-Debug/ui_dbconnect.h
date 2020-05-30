/********************************************************************************
** Form generated from reading UI file 'dbconnect.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DBCONNECT_H
#define UI_DBCONNECT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DbConnect
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *dbComboBox;
    QLabel *status_Label;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *submit;
    QPushButton *cancel;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *DbConnect)
    {
        if (DbConnect->objectName().isEmpty())
            DbConnect->setObjectName(QStringLiteral("DbConnect"));
        DbConnect->resize(220, 153);
        DbConnect->setMinimumSize(QSize(206, 146));
        DbConnect->setMaximumSize(QSize(235, 155));
        verticalLayout_2 = new QVBoxLayout(DbConnect);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        groupBox = new QGroupBox(DbConnect);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        dbComboBox = new QComboBox(groupBox);
        dbComboBox->setObjectName(QStringLiteral("dbComboBox"));

        horizontalLayout->addWidget(dbComboBox);


        verticalLayout->addLayout(horizontalLayout);

        status_Label = new QLabel(groupBox);
        status_Label->setObjectName(QStringLiteral("status_Label"));

        verticalLayout->addWidget(status_Label);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        submit = new QPushButton(groupBox);
        submit->setObjectName(QStringLiteral("submit"));
        submit->setAutoDefault(false);
        submit->setFlat(false);

        horizontalLayout_2->addWidget(submit);

        cancel = new QPushButton(groupBox);
        cancel->setObjectName(QStringLiteral("cancel"));
        cancel->setAutoDefault(false);

        horizontalLayout_2->addWidget(cancel);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_2->addWidget(groupBox);


        retranslateUi(DbConnect);

        submit->setDefault(false);
        cancel->setDefault(false);


        QMetaObject::connectSlotsByName(DbConnect);
    } // setupUi

    void retranslateUi(QDialog *DbConnect)
    {
        DbConnect->setWindowTitle(QApplication::translate("DbConnect", "\346\225\260\346\215\256\345\272\223\350\277\236\346\216\245", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("DbConnect", "\346\225\260\346\215\256\345\272\223\350\277\236\346\216\245\357\274\232", Q_NULLPTR));
        label->setText(QApplication::translate("DbConnect", "\346\225\260\346\215\256\345\272\223\357\274\232", Q_NULLPTR));
        status_Label->setText(QApplication::translate("DbConnect", "\347\212\266\346\200\201\357\274\232", Q_NULLPTR));
        submit->setText(QApplication::translate("DbConnect", "\350\277\236\346\216\245", Q_NULLPTR));
        cancel->setText(QApplication::translate("DbConnect", "\351\200\200\345\207\272", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DbConnect: public Ui_DbConnect {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DBCONNECT_H
