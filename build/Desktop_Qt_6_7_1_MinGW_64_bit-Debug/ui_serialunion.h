/********************************************************************************
** Form generated from reading UI file 'serialunion.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERIALUNION_H
#define UI_SERIALUNION_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SerialUnion
{
public:
    QAction *mbSaveRecData;
    QAction *mbMoreSettings;
    QWidget *centralWidget;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QHBoxLayout *widgetDisplay;
    QHBoxLayout *widgetSettings;
    QHBoxLayout *widgettest;
    QHBoxLayout *widgetSend;
    QMenuBar *menuBar;
    QMenu *menu;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *SerialUnion)
    {
        if (SerialUnion->objectName().isEmpty())
            SerialUnion->setObjectName("SerialUnion");
        SerialUnion->resize(371, 514);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/imageFile/font.ico"), QSize(), QIcon::Normal, QIcon::Off);
        SerialUnion->setWindowIcon(icon);
        SerialUnion->setIconSize(QSize(30, 30));
        mbSaveRecData = new QAction(SerialUnion);
        mbSaveRecData->setObjectName("mbSaveRecData");
        mbMoreSettings = new QAction(SerialUnion);
        mbMoreSettings->setObjectName("mbMoreSettings");
        centralWidget = new QWidget(SerialUnion);
        centralWidget->setObjectName("centralWidget");
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName("gridLayout");
        widgetDisplay = new QHBoxLayout();
        widgetDisplay->setSpacing(6);
        widgetDisplay->setObjectName("widgetDisplay");

        gridLayout->addLayout(widgetDisplay, 0, 0, 1, 1);

        widgetSettings = new QHBoxLayout();
        widgetSettings->setSpacing(6);
        widgetSettings->setObjectName("widgetSettings");

        gridLayout->addLayout(widgetSettings, 0, 1, 1, 1);

        widgettest = new QHBoxLayout();
        widgettest->setSpacing(6);
        widgettest->setObjectName("widgettest");

        gridLayout->addLayout(widgettest, 0, 2, 2, 1);

        widgetSend = new QHBoxLayout();
        widgetSend->setSpacing(6);
        widgetSend->setObjectName("widgetSend");

        gridLayout->addLayout(widgetSend, 1, 0, 1, 2);

        gridLayout->setRowStretch(0, 12);
        gridLayout->setRowStretch(1, 1);
        gridLayout->setColumnStretch(0, 24);
        gridLayout->setColumnStretch(1, 1);
        gridLayout->setColumnStretch(2, 1);

        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        SerialUnion->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(SerialUnion);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 371, 25));
        menu = new QMenu(menuBar);
        menu->setObjectName("menu");
        SerialUnion->setMenuBar(menuBar);
        statusBar = new QStatusBar(SerialUnion);
        statusBar->setObjectName("statusBar");
        SerialUnion->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menu->addAction(mbSaveRecData);

        retranslateUi(SerialUnion);

        QMetaObject::connectSlotsByName(SerialUnion);
    } // setupUi

    void retranslateUi(QMainWindow *SerialUnion)
    {
        SerialUnion->setWindowTitle(QCoreApplication::translate("SerialUnion", "SSCAN-V1.0", nullptr));
        mbSaveRecData->setText(QCoreApplication::translate("SerialUnion", "\344\277\235\345\255\230\346\216\245\346\224\266", nullptr));
        mbMoreSettings->setText(QCoreApplication::translate("SerialUnion", "\346\233\264\345\244\232\350\256\276\347\275\256", nullptr));
        menu->setTitle(QCoreApplication::translate("SerialUnion", "\346\223\215\344\275\234", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SerialUnion: public Ui_SerialUnion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERIALUNION_H
