/********************************************************************************
** Form generated from reading UI file 'addstudentwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDSTUDENTWIDGET_H
#define UI_ADDSTUDENTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddStudentWidget
{
public:
    QPushButton *returnButton;
    QLabel *label;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *namelineEdit;
    QLineEdit *agelineEdit;
    QLineEdit *idlineEdit;
    QLineEdit *gpalineEdit;
    QLineEdit *scorelineEdit;
    QPushButton *addButton;

    void setupUi(QWidget *AddStudentWidget)
    {
        if (AddStudentWidget->objectName().isEmpty())
            AddStudentWidget->setObjectName(QString::fromUtf8("AddStudentWidget"));
        AddStudentWidget->resize(640, 480);
        returnButton = new QPushButton(AddStudentWidget);
        returnButton->setObjectName(QString::fromUtf8("returnButton"));
        returnButton->setGeometry(QRect(520, 430, 93, 28));
        label = new QLabel(AddStudentWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(170, 10, 301, 51));
        QFont font;
        font.setFamily(QString::fromUtf8("\344\273\277\345\256\213"));
        font.setPointSize(25);
        label->setFont(font);
        verticalLayoutWidget = new QWidget(AddStudentWidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(90, 90, 141, 281));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font1.setPointSize(18);
        label_2->setFont(font1);

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font2;
        font2.setPointSize(18);
        label_3->setFont(font2);

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(verticalLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font2);

        verticalLayout->addWidget(label_4);

        label_5 = new QLabel(verticalLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font2);

        verticalLayout->addWidget(label_5);

        label_6 = new QLabel(verticalLayoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font2);

        verticalLayout->addWidget(label_6);

        verticalLayoutWidget_2 = new QWidget(AddStudentWidget);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(280, 70, 211, 321));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        namelineEdit = new QLineEdit(verticalLayoutWidget_2);
        namelineEdit->setObjectName(QString::fromUtf8("namelineEdit"));

        verticalLayout_2->addWidget(namelineEdit);

        agelineEdit = new QLineEdit(verticalLayoutWidget_2);
        agelineEdit->setObjectName(QString::fromUtf8("agelineEdit"));

        verticalLayout_2->addWidget(agelineEdit);

        idlineEdit = new QLineEdit(verticalLayoutWidget_2);
        idlineEdit->setObjectName(QString::fromUtf8("idlineEdit"));

        verticalLayout_2->addWidget(idlineEdit);

        gpalineEdit = new QLineEdit(verticalLayoutWidget_2);
        gpalineEdit->setObjectName(QString::fromUtf8("gpalineEdit"));

        verticalLayout_2->addWidget(gpalineEdit);

        scorelineEdit = new QLineEdit(verticalLayoutWidget_2);
        scorelineEdit->setObjectName(QString::fromUtf8("scorelineEdit"));

        verticalLayout_2->addWidget(scorelineEdit);

        addButton = new QPushButton(AddStudentWidget);
        addButton->setObjectName(QString::fromUtf8("addButton"));
        addButton->setGeometry(QRect(170, 430, 93, 28));
        QFont font3;
        font3.setPointSize(9);
        addButton->setFont(font3);

        retranslateUi(AddStudentWidget);

        QMetaObject::connectSlotsByName(AddStudentWidget);
    } // setupUi

    void retranslateUi(QWidget *AddStudentWidget)
    {
        AddStudentWidget->setWindowTitle(QCoreApplication::translate("AddStudentWidget", "Form", nullptr));
        returnButton->setText(QCoreApplication::translate("AddStudentWidget", "\344\270\273\350\217\234\345\215\225", nullptr));
        label->setText(QCoreApplication::translate("AddStudentWidget", "\346\267\273\345\212\240\345\255\246\347\224\237\344\277\241\346\201\257", nullptr));
        label_2->setText(QCoreApplication::translate("AddStudentWidget", "\345\247\223\345\220\215", nullptr));
        label_3->setText(QCoreApplication::translate("AddStudentWidget", "\345\271\264\351\276\204", nullptr));
        label_4->setText(QCoreApplication::translate("AddStudentWidget", "\345\255\246\345\217\267", nullptr));
        label_5->setText(QCoreApplication::translate("AddStudentWidget", "\346\200\273\346\210\220\347\273\251", nullptr));
        label_6->setText(QCoreApplication::translate("AddStudentWidget", "\346\264\273\345\212\250\345\210\206", nullptr));
        addButton->setText(QCoreApplication::translate("AddStudentWidget", "\346\267\273\345\212\240", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddStudentWidget: public Ui_AddStudentWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDSTUDENTWIDGET_H
