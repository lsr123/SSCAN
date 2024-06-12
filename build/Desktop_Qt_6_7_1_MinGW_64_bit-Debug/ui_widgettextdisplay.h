/********************************************************************************
** Form generated from reading UI file 'widgettextdisplay.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGETTEXTDISPLAY_H
#define UI_WIDGETTEXTDISPLAY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WidgetTextDisplay
{
public:
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QTextBrowser *textBrowser;

    void setupUi(QWidget *WidgetTextDisplay)
    {
        if (WidgetTextDisplay->objectName().isEmpty())
            WidgetTextDisplay->setObjectName("WidgetTextDisplay");
        WidgetTextDisplay->resize(400, 300);
        horizontalLayout_2 = new QHBoxLayout(WidgetTextDisplay);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(-1, -1, 4, 4);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        groupBox = new QGroupBox(WidgetTextDisplay);
        groupBox->setObjectName("groupBox");
        horizontalLayout_4 = new QHBoxLayout(groupBox);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        textBrowser = new QTextBrowser(groupBox);
        textBrowser->setObjectName("textBrowser");

        horizontalLayout_3->addWidget(textBrowser);


        horizontalLayout_4->addLayout(horizontalLayout_3);


        horizontalLayout->addWidget(groupBox);


        horizontalLayout_2->addLayout(horizontalLayout);


        retranslateUi(WidgetTextDisplay);

        QMetaObject::connectSlotsByName(WidgetTextDisplay);
    } // setupUi

    void retranslateUi(QWidget *WidgetTextDisplay)
    {
        WidgetTextDisplay->setWindowTitle(QCoreApplication::translate("WidgetTextDisplay", "Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("WidgetTextDisplay", "\346\216\245\346\224\266\346\272\220\347\240\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WidgetTextDisplay: public Ui_WidgetTextDisplay {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGETTEXTDISPLAY_H
