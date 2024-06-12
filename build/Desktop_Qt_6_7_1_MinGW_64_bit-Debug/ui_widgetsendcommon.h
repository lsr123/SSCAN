/********************************************************************************
** Form generated from reading UI file 'widgetsendcommon.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGETSENDCOMMON_H
#define UI_WIDGETSENDCOMMON_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WidgetSendCommon
{
public:
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QTextEdit *textEdit;
    QVBoxLayout *verticalLayout_4;
    QPushButton *btnSend;
    QPushButton *btnClearSend;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_5;
    QCheckBox *isHexSend;
    QCheckBox *isEnterSend;
    QCheckBox *isTimingSend;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lblCycle;
    QLineEdit *letCyCleTime;
    QLabel *lblMS;
    QHBoxLayout *horizontalLayout_5;
    QLineEdit *letSendFilePath;
    QPushButton *btnSelectSendFile;
    QPushButton *btnSendFile;
    QPushButton *btnClearSendFilePath;

    void setupUi(QWidget *WidgetSendCommon)
    {
        if (WidgetSendCommon->objectName().isEmpty())
            WidgetSendCommon->setObjectName("WidgetSendCommon");
        WidgetSendCommon->resize(553, 215);
        horizontalLayout = new QHBoxLayout(WidgetSendCommon);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(9, 4, 9, 9);
        groupBox = new QGroupBox(WidgetSendCommon);
        groupBox->setObjectName("groupBox");
        verticalLayout_6 = new QVBoxLayout(groupBox);
        verticalLayout_6->setObjectName("verticalLayout_6");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName("verticalLayout_3");
        textEdit = new QTextEdit(groupBox);
        textEdit->setObjectName("textEdit");

        verticalLayout_3->addWidget(textEdit);


        horizontalLayout_4->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName("verticalLayout_4");
        btnSend = new QPushButton(groupBox);
        btnSend->setObjectName("btnSend");

        verticalLayout_4->addWidget(btnSend);

        btnClearSend = new QPushButton(groupBox);
        btnClearSend->setObjectName("btnClearSend");

        verticalLayout_4->addWidget(btnClearSend);


        horizontalLayout_4->addLayout(verticalLayout_4);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        isHexSend = new QCheckBox(groupBox);
        isHexSend->setObjectName("isHexSend");

        verticalLayout_5->addWidget(isHexSend);

        isEnterSend = new QCheckBox(groupBox);
        isEnterSend->setObjectName("isEnterSend");

        verticalLayout_5->addWidget(isEnterSend);

        isTimingSend = new QCheckBox(groupBox);
        isTimingSend->setObjectName("isTimingSend");

        verticalLayout_5->addWidget(isTimingSend);


        verticalLayout->addLayout(verticalLayout_5);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        lblCycle = new QLabel(groupBox);
        lblCycle->setObjectName("lblCycle");

        horizontalLayout_2->addWidget(lblCycle);

        letCyCleTime = new QLineEdit(groupBox);
        letCyCleTime->setObjectName("letCyCleTime");

        horizontalLayout_2->addWidget(letCyCleTime);

        lblMS = new QLabel(groupBox);
        lblMS->setObjectName("lblMS");

        horizontalLayout_2->addWidget(lblMS);


        verticalLayout->addLayout(horizontalLayout_2);


        horizontalLayout_4->addLayout(verticalLayout);

        horizontalLayout_4->setStretch(0, 24);
        horizontalLayout_4->setStretch(1, 1);
        horizontalLayout_4->setStretch(2, 1);

        verticalLayout_6->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        letSendFilePath = new QLineEdit(groupBox);
        letSendFilePath->setObjectName("letSendFilePath");

        horizontalLayout_5->addWidget(letSendFilePath);

        btnSelectSendFile = new QPushButton(groupBox);
        btnSelectSendFile->setObjectName("btnSelectSendFile");

        horizontalLayout_5->addWidget(btnSelectSendFile);

        btnSendFile = new QPushButton(groupBox);
        btnSendFile->setObjectName("btnSendFile");

        horizontalLayout_5->addWidget(btnSendFile);

        btnClearSendFilePath = new QPushButton(groupBox);
        btnClearSendFilePath->setObjectName("btnClearSendFilePath");

        horizontalLayout_5->addWidget(btnClearSendFilePath);


        verticalLayout_6->addLayout(horizontalLayout_5);

        verticalLayout_6->setStretch(0, 5);
        verticalLayout_6->setStretch(1, 1);

        horizontalLayout->addWidget(groupBox);


        retranslateUi(WidgetSendCommon);

        QMetaObject::connectSlotsByName(WidgetSendCommon);
    } // setupUi

    void retranslateUi(QWidget *WidgetSendCommon)
    {
        WidgetSendCommon->setWindowTitle(QCoreApplication::translate("WidgetSendCommon", "Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("WidgetSendCommon", "\345\217\221\351\200\201", nullptr));
        btnSend->setText(QCoreApplication::translate("WidgetSendCommon", "\345\217\221\351\200\201", nullptr));
        btnClearSend->setText(QCoreApplication::translate("WidgetSendCommon", "\346\270\205\351\231\244\345\217\221\351\200\201", nullptr));
        isHexSend->setText(QCoreApplication::translate("WidgetSendCommon", "16\350\277\233\345\210\266\345\217\221\351\200\201", nullptr));
        isEnterSend->setText(QCoreApplication::translate("WidgetSendCommon", "\346\215\242\350\241\214\345\217\221\351\200\201", nullptr));
        isTimingSend->setText(QCoreApplication::translate("WidgetSendCommon", "\345\256\232\346\227\266\345\217\221\351\200\201", nullptr));
        lblCycle->setText(QCoreApplication::translate("WidgetSendCommon", "\345\221\250\346\234\237", nullptr));
        lblMS->setText(QCoreApplication::translate("WidgetSendCommon", "ms", nullptr));
        btnSelectSendFile->setText(QCoreApplication::translate("WidgetSendCommon", "\351\200\211\346\213\251\346\226\207\344\273\266", nullptr));
        btnSendFile->setText(QCoreApplication::translate("WidgetSendCommon", "\345\217\221\351\200\201\346\226\207\344\273\266", nullptr));
        btnClearSendFilePath->setText(QCoreApplication::translate("WidgetSendCommon", "\346\270\205\351\231\244\345\217\221\351\200\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WidgetSendCommon: public Ui_WidgetSendCommon {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGETSENDCOMMON_H
