#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->page2=new main1;
    this->page3=new SerialUnion;
    my_buffer1 = new WidgetSettings;
    //widgetsetting向main发
    connect(WidgetSettings::GetSettingIns(),SIGNAL(toMain(QByteArray)),this,SLOT(fromSettingHex(QByteArray)));

    //main向sendcommon发
    connect(this,SIGNAL(signalmaintosend(QString)),WidgetSendCommon::GetSendCommonIns(),SLOT(slotmaintosend(QString)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

MainWindow *MainWindow::GetMainIns()
{
    static MainWindow *mainins;
    if(mainins == nullptr)
    {
        mainins = new MainWindow();
    }
    return mainins;
}

void MainWindow::fromSettingHex(QByteArray Hexdata)
{
    QByteArray a;
    QString line_str1;
    QString line_str2;
    QString line_str3;
    QString line_str4;

    bool ok;

    //参数1读取显示
    a = Hexdata.mid(0,2);
    line_str1 = QString::number(a.toInt(&ok,16),10);   //十六进制“AA”---》170---》“170”
    ui->line1->setText(line_str1);

    //参数2读取显示
    a = Hexdata.mid(2,2);
    line_str2 = QString::number(a.toInt(&ok,16),10);
    ui->line2->setText(line_str2);

    //参数3读取显示
    a = Hexdata.mid(4,2);
    line_str3 = QString::number(a.toInt(&ok,16),10);
    ui->line3->setText(line_str3);

    //参数4读取显示
    a = Hexdata.mid(6,2);
    line_str4 = QString::number(a.toInt(&ok,16),10);
    ui->line4->setText(line_str4);

}
/*
void MainWindow::on_pushButton_clicked()
{
    //this->close();
   // this->page2->show();
   // QByteArray a;
    //QString b;
  //  a= this->my_buffer1->m_buffer;
    //b = QString::fromLocal8Bit(a);
    //ui->my_lineEdit->setText(b);
}
*/

/*
void MainWindow::on_pushButton_2_clicked()
{
    this->page3->show();
}


void MainWindow::on_puss_clicked()
{

}


void MainWindow::on_pushb_clicked()
{
    this->page3->show();

}
*/


void MainWindow::on_action_triggered()
{
    this->page3->show();
}

/*
void MainWindow::on_mainsend_clicked()
{
    QString MainSend =ui->m
        ui->textEdit->toPlainText();

}
*/

void MainWindow::on_mainsendbutton_clicked()
{
    QString MainSend =ui->maintextSend->toPlainText();
    //向widgetsendcommon.cpp发送信号
    emit signalmaintosend(MainSend);
}

