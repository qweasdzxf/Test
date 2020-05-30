/********************************************************************************
** Form generated from reading UI file 'modifywidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYWIDGET_H
#define UI_MODIFYWIDGET_H

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

class Ui_ModifyWidget
{
public:
    QPushButton *returnButton;
    QLabel *label;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_6;
    QLabel *label_5;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *namelineEdit;
    QLineEdit *agelineEdit;
    QLineEdit *scorelineEdit;
    QLineEdit *gpalineEdit;
    QLabel *label_4;
    QLineEdit *idlineEdit;
    QPushButton *modifyButton;
    QPushButton *deleteButton;

    void setupUi(QWidget *ModifyWidget)
    {
        if (ModifyWidget->objectName().isEmpty())
            ModifyWidget->setObjectName(QStringLiteral("ModifyWidget"));
        ModifyWidget->resize(640, 480);
        returnButton = new QPushButton(ModifyWidget);
        returnButton->setObjectName(QStringLiteral("returnButton"));
        returnButton->setGeometry(QRect(480, 440, 93, 28));
        label = new QLabel(ModifyWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(180, 0, 541, 71));
        QFont font;
        font.setFamily(QString::fromUtf8("\344\273\277\345\256\213"));
        font.setPointSize(25);
        label->setFont(font);
        verticalLayoutWidget = new QWidget(ModifyWidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(90, 90, 141, 281));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font1.setPointSize(18);
        label_2->setFont(font1);

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        QFont font2;
        font2.setPointSize(18);
        label_3->setFont(font2);

        verticalLayout->addWidget(label_3);

        label_6 = new QLabel(verticalLayoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font2);

        verticalLayout->addWidget(label_6);

        label_5 = new QLabel(verticalLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font2);

        verticalLayout->addWidget(label_5);

        verticalLayoutWidget_2 = new QWidget(ModifyWidget);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(300, 70, 211, 321));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        namelineEdit = new QLineEdit(verticalLayoutWidget_2);
        namelineEdit->setObjectName(QStringLiteral("namelineEdit"));

        verticalLayout_2->addWidget(namelineEdit);

        agelineEdit = new QLineEdit(verticalLayoutWidget_2);
        agelineEdit->setObjectName(QStringLiteral("agelineEdit"));

        verticalLayout_2->addWidget(agelineEdit);

        scorelineEdit = new QLineEdit(verticalLayoutWidget_2);
        scorelineEdit->setObjectName(QStringLiteral("scorelineEdit"));

        verticalLayout_2->addWidget(scorelineEdit);

        gpalineEdit = new QLineEdit(verticalLayoutWidget_2);
        gpalineEdit->setObjectName(QStringLiteral("gpalineEdit"));

        verticalLayout_2->addWidget(gpalineEdit);

        label_4 = new QLabel(ModifyWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(90, 390, 101, 41));
        label_4->setFont(font2);
        idlineEdit = new QLineEdit(ModifyWidget);
        idlineEdit->setObjectName(QStringLiteral("idlineEdit"));
        idlineEdit->setGeometry(QRect(190, 400, 113, 21));
        modifyButton = new QPushButton(ModifyWidget);
        modifyButton->setObjectName(QStringLiteral("modifyButton"));
        modifyButton->setGeometry(QRect(220, 440, 93, 28));
        deleteButton = new QPushButton(ModifyWidget);
        deleteButton->setObjectName(QStringLiteral("deleteButton"));
        deleteButton->setGeometry(QRect(90, 440, 93, 28));

        retranslateUi(ModifyWidget);

        QMetaObject::connectSlotsByName(ModifyWidget);
    } // setupUi

    void retranslateUi(QWidget *ModifyWidget)
    {
        ModifyWidget->setWindowTitle(QApplication::translate("ModifyWidget", "Form", Q_NULLPTR));
        returnButton->setText(QApplication::translate("ModifyWidget", "\344\270\273\350\217\234\345\215\225", Q_NULLPTR));
        label->setText(QApplication::translate("ModifyWidget", "\344\277\256\346\224\271\345\255\246\347\224\237\344\277\241\346\201\257", Q_NULLPTR));
        label_2->setText(QApplication::translate("ModifyWidget", "\345\247\223\345\220\215", Q_NULLPTR));
        label_3->setText(QApplication::translate("ModifyWidget", "\345\271\264\351\276\204", Q_NULLPTR));
        label_6->setText(QApplication::translate("ModifyWidget", "\346\264\273\345\212\250\345\210\206", Q_NULLPTR));
        label_5->setText(QApplication::translate("ModifyWidget", "\346\200\273\346\210\220\347\273\251", Q_NULLPTR));
        label_4->setText(QApplication::translate("ModifyWidget", "\345\255\246\345\217\267", Q_NULLPTR));
        modifyButton->setText(QApplication::translate("ModifyWidget", "\344\277\256\346\224\271", Q_NULLPTR));
        deleteButton->setText(QApplication::translate("ModifyWidget", "\345\210\240\351\231\244", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ModifyWidget: public Ui_ModifyWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYWIDGET_H
