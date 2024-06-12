/********************************************************************************
** Form generated from reading UI file 'main1.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAIN1_H
#define UI_MAIN1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_main1
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *main1)
    {
        if (main1->objectName().isEmpty())
            main1->setObjectName("main1");
        main1->resize(800, 600);
        centralwidget = new QWidget(main1);
        centralwidget->setObjectName("centralwidget");
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(360, 170, 93, 28));
        main1->setCentralWidget(centralwidget);
        menubar = new QMenuBar(main1);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        main1->setMenuBar(menubar);
        statusbar = new QStatusBar(main1);
        statusbar->setObjectName("statusbar");
        main1->setStatusBar(statusbar);

        retranslateUi(main1);

        QMetaObject::connectSlotsByName(main1);
    } // setupUi

    void retranslateUi(QMainWindow *main1)
    {
        main1->setWindowTitle(QCoreApplication::translate("main1", "main1", nullptr));
        pushButton->setText(QCoreApplication::translate("main1", "\350\260\203\347\224\250", nullptr));
    } // retranslateUi

};

namespace Ui {
    class main1: public Ui_main1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN1_H
