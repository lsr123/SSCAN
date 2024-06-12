/********************************************************************************
** Form generated from reading UI file 'normalmess.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NORMALMESS_H
#define UI_NORMALMESS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NormalMess
{
public:
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *lblNormalMess;

    void setupUi(QWidget *NormalMess)
    {
        if (NormalMess->objectName().isEmpty())
            NormalMess->setObjectName("NormalMess");
        NormalMess->resize(71, 25);
        horizontalLayout_2 = new QHBoxLayout(NormalMess);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        lblNormalMess = new QLabel(NormalMess);
        lblNormalMess->setObjectName("lblNormalMess");
        lblNormalMess->setTextFormat(Qt::RichText);

        horizontalLayout->addWidget(lblNormalMess);


        horizontalLayout_2->addLayout(horizontalLayout);


        retranslateUi(NormalMess);

        QMetaObject::connectSlotsByName(NormalMess);
    } // setupUi

    void retranslateUi(QWidget *NormalMess)
    {
        NormalMess->setWindowTitle(QCoreApplication::translate("NormalMess", "Form", nullptr));
        lblNormalMess->setText(QCoreApplication::translate("NormalMess", "wing", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NormalMess: public Ui_NormalMess {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NORMALMESS_H
