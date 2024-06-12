/********************************************************************************
** Form generated from reading UI file 'widgetsettings.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGETSETTINGS_H
#define UI_WIDGETSETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WidgetSettings
{
public:
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *btnSearchPort;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_9;
    QComboBox *cbxPort;
    QHBoxLayout *horizontalLayout_8;
    QLabel *lblBaudRate;
    QComboBox *cbxBaudRate;
    QHBoxLayout *horizontalLayout_7;
    QLabel *lblStopBit;
    QComboBox *cbxStopBit;
    QHBoxLayout *horizontalLayout_6;
    QLabel *lbllDataBit;
    QComboBox *cbxDataBit;
    QHBoxLayout *horizontalLayout_5;
    QLabel *lblParityBit;
    QComboBox *cbxParityBit;
    QVBoxLayout *verticalLayout_3;
    QPushButton *btnSerialPortOperation;
    QPushButton *btnClearRec;
    QHBoxLayout *horizontalLayout_10;
    QCheckBox *isHexRec;
    QCheckBox *isDisTime;

    void setupUi(QWidget *WidgetSettings)
    {
        if (WidgetSettings->objectName().isEmpty())
            WidgetSettings->setObjectName("WidgetSettings");
        WidgetSettings->resize(388, 478);
        horizontalLayout_2 = new QHBoxLayout(WidgetSettings);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(4, 9, -1, 4);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName("horizontalLayout");
        groupBox = new QGroupBox(WidgetSettings);
        groupBox->setObjectName("groupBox");
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(14);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        btnSearchPort = new QPushButton(groupBox);
        btnSearchPort->setObjectName("btnSearchPort");

        horizontalLayout_3->addWidget(btnSearchPort);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        cbxPort = new QComboBox(groupBox);
        cbxPort->setObjectName("cbxPort");

        horizontalLayout_9->addWidget(cbxPort);


        verticalLayout->addLayout(horizontalLayout_9);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        lblBaudRate = new QLabel(groupBox);
        lblBaudRate->setObjectName("lblBaudRate");

        horizontalLayout_8->addWidget(lblBaudRate);

        cbxBaudRate = new QComboBox(groupBox);
        cbxBaudRate->addItem(QString());
        cbxBaudRate->addItem(QString());
        cbxBaudRate->addItem(QString());
        cbxBaudRate->addItem(QString());
        cbxBaudRate->addItem(QString());
        cbxBaudRate->addItem(QString());
        cbxBaudRate->setObjectName("cbxBaudRate");

        horizontalLayout_8->addWidget(cbxBaudRate);


        verticalLayout->addLayout(horizontalLayout_8);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        lblStopBit = new QLabel(groupBox);
        lblStopBit->setObjectName("lblStopBit");

        horizontalLayout_7->addWidget(lblStopBit);

        cbxStopBit = new QComboBox(groupBox);
        cbxStopBit->addItem(QString());
        cbxStopBit->addItem(QString());
        cbxStopBit->setObjectName("cbxStopBit");

        horizontalLayout_7->addWidget(cbxStopBit);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        lbllDataBit = new QLabel(groupBox);
        lbllDataBit->setObjectName("lbllDataBit");

        horizontalLayout_6->addWidget(lbllDataBit);

        cbxDataBit = new QComboBox(groupBox);
        cbxDataBit->addItem(QString());
        cbxDataBit->addItem(QString());
        cbxDataBit->addItem(QString());
        cbxDataBit->addItem(QString());
        cbxDataBit->setObjectName("cbxDataBit");

        horizontalLayout_6->addWidget(cbxDataBit);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        lblParityBit = new QLabel(groupBox);
        lblParityBit->setObjectName("lblParityBit");

        horizontalLayout_5->addWidget(lblParityBit);

        cbxParityBit = new QComboBox(groupBox);
        cbxParityBit->addItem(QString());
        cbxParityBit->addItem(QString());
        cbxParityBit->addItem(QString());
        cbxParityBit->setObjectName("cbxParityBit");

        horizontalLayout_5->addWidget(cbxParityBit);


        verticalLayout->addLayout(horizontalLayout_5);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        btnSerialPortOperation = new QPushButton(groupBox);
        btnSerialPortOperation->setObjectName("btnSerialPortOperation");

        verticalLayout_3->addWidget(btnSerialPortOperation);

        btnClearRec = new QPushButton(groupBox);
        btnClearRec->setObjectName("btnClearRec");

        verticalLayout_3->addWidget(btnClearRec);


        verticalLayout->addLayout(verticalLayout_3);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        isHexRec = new QCheckBox(groupBox);
        isHexRec->setObjectName("isHexRec");
        isHexRec->setChecked(false);

        horizontalLayout_10->addWidget(isHexRec);

        isDisTime = new QCheckBox(groupBox);
        isDisTime->setObjectName("isDisTime");

        horizontalLayout_10->addWidget(isDisTime);


        verticalLayout->addLayout(horizontalLayout_10);


        verticalLayout_2->addLayout(verticalLayout);


        horizontalLayout->addWidget(groupBox);


        horizontalLayout_2->addLayout(horizontalLayout);


        retranslateUi(WidgetSettings);

        QMetaObject::connectSlotsByName(WidgetSettings);
    } // setupUi

    void retranslateUi(QWidget *WidgetSettings)
    {
        WidgetSettings->setWindowTitle(QCoreApplication::translate("WidgetSettings", "Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("WidgetSettings", "\350\256\276\347\275\256", nullptr));
        btnSearchPort->setText(QCoreApplication::translate("WidgetSettings", "\346\220\234\347\264\242\344\270\262\345\217\243", nullptr));
        lblBaudRate->setText(QCoreApplication::translate("WidgetSettings", "\346\263\242\347\211\271\347\216\207", nullptr));
        cbxBaudRate->setItemText(0, QCoreApplication::translate("WidgetSettings", "1382400", nullptr));
        cbxBaudRate->setItemText(1, QCoreApplication::translate("WidgetSettings", "921600", nullptr));
        cbxBaudRate->setItemText(2, QCoreApplication::translate("WidgetSettings", "460800", nullptr));
        cbxBaudRate->setItemText(3, QCoreApplication::translate("WidgetSettings", "115200", nullptr));
        cbxBaudRate->setItemText(4, QCoreApplication::translate("WidgetSettings", "38400", nullptr));
        cbxBaudRate->setItemText(5, QCoreApplication::translate("WidgetSettings", "9600", nullptr));

        cbxBaudRate->setCurrentText(QCoreApplication::translate("WidgetSettings", "115200", nullptr));
        lblStopBit->setText(QCoreApplication::translate("WidgetSettings", "\345\201\234\346\255\242\344\275\215", nullptr));
        cbxStopBit->setItemText(0, QCoreApplication::translate("WidgetSettings", "1", nullptr));
        cbxStopBit->setItemText(1, QCoreApplication::translate("WidgetSettings", "2", nullptr));

        lbllDataBit->setText(QCoreApplication::translate("WidgetSettings", "\346\225\260\346\215\256\344\275\215", nullptr));
        cbxDataBit->setItemText(0, QCoreApplication::translate("WidgetSettings", "8", nullptr));
        cbxDataBit->setItemText(1, QCoreApplication::translate("WidgetSettings", "7", nullptr));
        cbxDataBit->setItemText(2, QCoreApplication::translate("WidgetSettings", "6", nullptr));
        cbxDataBit->setItemText(3, QCoreApplication::translate("WidgetSettings", "5", nullptr));

        lblParityBit->setText(QCoreApplication::translate("WidgetSettings", "\346\240\241\351\252\214\344\275\215", nullptr));
        cbxParityBit->setItemText(0, QCoreApplication::translate("WidgetSettings", "No", nullptr));
        cbxParityBit->setItemText(1, QCoreApplication::translate("WidgetSettings", "Odd", nullptr));
        cbxParityBit->setItemText(2, QCoreApplication::translate("WidgetSettings", "Even", nullptr));

        btnSerialPortOperation->setText(QCoreApplication::translate("WidgetSettings", "\346\211\223\345\274\200\344\270\262\345\217\243", nullptr));
        btnClearRec->setText(QCoreApplication::translate("WidgetSettings", "\346\270\205\351\231\244\346\216\245\346\224\266", nullptr));
        isHexRec->setText(QCoreApplication::translate("WidgetSettings", "16\350\277\233\345\210\266\346\216\245\346\224\266", nullptr));
        isDisTime->setText(QCoreApplication::translate("WidgetSettings", "\346\227\266\351\227\264\346\210\263", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WidgetSettings: public Ui_WidgetSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGETSETTINGS_H
