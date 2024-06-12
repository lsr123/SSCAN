#include "widgetsendcommon.h"
#include "ui_widgetsendcommon.h"
#include <QDebug>
#include <QByteArray>

WidgetSendCommon::WidgetSendCommon(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WidgetSendCommon)
{
    ui->setupUi(this);

    timer = nullptr;
    serialSend = nullptr;
    ui->letSendFilePath->setEnabled(false);

    QWidget* hide[] = {ui->btnClearSend,ui->btnClearSendFilePath,ui->letSendFilePath,ui->btnSelectSendFile,ui->lblCycle,ui->letCyCleTime,ui->lblMS,ui->btnSendFile,ui->isEnterSend,ui->isHexSend,ui->isTimingSend};
    for(int i = 0; i < sizeof(hide)/sizeof(QWidget*); i++){
        hide[i]->setVisible(false);
    }
}

WidgetSendCommon::~WidgetSendCommon()
{
    delete ui;

    nSendLength = 0;
}

WidgetSendCommon *WidgetSendCommon::GetSendCommonIns()
{
    static WidgetSendCommon *sendCommon;
    if(sendCommon == nullptr)
    {
        sendCommon = new WidgetSendCommon();
    }
    return sendCommon;
}

void WidgetSendCommon::getSerialParam(QSerialPort *serial)
{
    serialSend = serial;

}

void WidgetSendCommon::on_btnSend_clicked()
{
    qDebug()<<strbuf;
    qDebug("SUCCESS");

    if(serialSend == nullptr)
    {
        QMessageBox::critical(this,"Error","Please open the Serial",QMessageBox::Yes);
        return;
    }
    else if(serialSend->isOpen() == true)
    {
        QByteArray sendData;
        QString sSendBUffer = ui->textEdit->toPlainText();
        nSendLength += sSendBUffer.toLocal8Bit().length();
        m_isHexSend = ui->isHexSend->isChecked();
        m_isEnterSend = ui->isEnterSend->isChecked();
        m_isTimingSend = ui->isTimingSend->isChecked();
        m_letCycleTime = ui->letCyCleTime->text().toInt();
        m_sTextEdit = ui->textEdit->toPlainText();
        if(ui->isEnterSend->isChecked() == true)
        {
            sSendBUffer += "\n";
        }
        if(ui->isHexSend->isChecked() == false)
        {
            // serialSend->write(sSendBUffer.toLocal8Bit());

           // String2Hex(sSendBUffer,sendData);   //16进制发送
            String2Hex(strbuf,sendData);   //可以实现主窗口的字符串发送，但是还要检查发送的类型，有错误20240612:1点17分
            serialSend->write(sendData);
        }
        else
        {
           // serialSend->write(fronHexToDec(sSendBUffer.toLocal8Bit()).toLocal8Bit());
        }

//        qDebug()<<nSendLength;
        emit signalSendNum(nSendLength);
    }
    else
    {
        QMessageBox::critical(this,"Error","Please open the Serial",QMessageBox::Yes);
    }
}

void WidgetSendCommon::on_btnClearSend_clicked()
{
    ui->textEdit->clear();
    nSendLength = 0;
    emit signalSendNum(nSendLength);
}

void WidgetSendCommon::on_isHexSend_clicked(bool checked)
{
    QString sSendBUffer = ui->textEdit->toPlainText();
    if(checked == true)//转换为16进制
    {
//        qDebug()<<sSendBUffer.toLatin1().toHex();
        QByteArray sSendBUfferByte = sSendBUffer.toLocal8Bit();
        sSendBUffer = QString(sSendBUfferByte.toHex());
        ui->textEdit->setPlainText(sSendBUffer);
    }
    else//转换为十进制
    {
        ui->textEdit->setPlainText(fronHexToDec(sSendBUffer.toLocal8Bit()).toLocal8Bit());
    }
}

//十六进制转换为十进制
QString WidgetSendCommon::fronHexToDec(QString sData)
{
//    QList<QByteArray> signalHexBufferList;
//    QString sSignalHexBuffer = "";
//    QString sSendBUfferTmp = "";
//    int byteNum = 2;
//    int currentPose = 0;
//    for(int i=0; i<sData.length(); i++)
//    {
//        sSignalHexBuffer += sData.at(i);
//        currentPose++;
//        if(currentPose == 1)
//        {
//            if(sData.at(i).toLatin1() >= 'A')
//            {
//                byteNum = 4;
//            }
//        }
//        if(currentPose == byteNum)
//        {
//            signalHexBufferList.append(sSignalHexBuffer.toLocal8Bit());
//            sSignalHexBuffer = "";
//            byteNum = 2;
//            currentPose = 0;
//        }
//    }
//    for(int j=0; j<signalHexBufferList.length(); j++)
//    {
//        QString sTmp = "c0ee";
////        QByteArray sTmpBy = sTmp.toLocal8Bit();
////        QTextCodec *codeGbk = QTextCodec::codecForName("GBK");
////        QTextCodec *codeutf8 = QTextCodec::codecForName("UTF-8");
//        QString tmp = QTextCodec::codecForName("GBK")->toUnicode(signalHexBufferList.at(j));
////        QByteArray byteutf = codeutf8->fromUnicode(tmp);
////        char *utf = byteutf.data();
//        QByteArray sTmpBy = tmp.toLocal8Bit();
//        sSendBUfferTmp += QString(QByteArray::fromRawData(sTmpBy,4)).toLocal8Bit();
//        qDebug()<<tmp<<sTmpBy;
//    }
    QString sSendBUfferTmp = "";
    QByteArray sDataByte = sData.toLocal8Bit();
    sSendBUfferTmp = QString(QByteArray::fromHex(sDataByte)).toLocal8Bit();
    return sSendBUfferTmp;
}

void WidgetSendCommon::on_textEdit_textChanged()
{
    bool isNumChar = false;
    QString sSendBUffer = ui->textEdit->toPlainText();
    //当十六进制发送打开时，检测是否为十六进制的标准形式
    if(ui->isHexSend->isChecked() == true && sSendBUffer != "")
    {
        QByteArray sSendBUfferByte = sSendBUffer.right(1).toLatin1();
        for(int i=48; i<58; i++)
        {
            if((sSendBUfferByte.at(0) == i) || \
                    (sSendBUfferByte.at(0) == (i+17) && (i < 54)) || \
                    ((sSendBUfferByte.at(0) == (i+49)) && (i < 54)))
            {
                isNumChar = true;
                break;
            }
        }
        if(!isNumChar)
        {
            QMessageBox::critical(this,"Error","{0-9},{A-F},{a-f}",QMessageBox::Yes);
            sSendBUffer.resize(sSendBUffer.length()-1);
            ui->textEdit->setPlainText(sSendBUffer);
            ui->textEdit->moveCursor(QTextCursor::End,QTextCursor::MoveAnchor);
        }
    }
}

void WidgetSendCommon::on_isTimingSend_clicked(bool checked)
{
    if(checked == true)
    {
        ui->letCyCleTime->setEnabled(false);
        int nSendTime = ui->letCyCleTime->text().toInt();
        if(nSendTime == 0)
        {
            QMessageBox::critical(this,"Error","Please enter the right number",QMessageBox::Yes);
            ui->letCyCleTime->clear();
            ui->letCyCleTime->setEnabled(true);
            ui->isTimingSend->setChecked(false);
        }
        else
        {
            timer = new QTimer(this);
            timer->start(nSendTime);
            connect(timer,SIGNAL(timeout()),this,SLOT(slotTimeOut()));
        }
    }
    else
    {
        ui->letCyCleTime->setEnabled(true);
        if(timer != nullptr)
        {
            delete timer;
            timer = nullptr;
        }
    }
}

void WidgetSendCommon::slotTimeOut()
{
    if(serialSend == nullptr)
    {
        return;
    }
    else if(serialSend->isOpen() == true)
    {
        QString sSendBUffer = ui->textEdit->toPlainText();
        nSendLength += sSendBUffer.toLocal8Bit().length();
        if(ui->isEnterSend->isChecked() == true)
        {
            sSendBUffer += "\n";
        }
        if(ui->isHexSend->isChecked() == false)
        {
            serialSend->write(sSendBUffer.toLocal8Bit());
        }
        else
        {
            serialSend->write(fronHexToDec(sSendBUffer).toLocal8Bit());
        }
        emit signalSendNum(nSendLength);
    }
}

void WidgetSendCommon::on_btnSelectSendFile_clicked()
{
    QString sCurrentPath = QDir::currentPath();
    QString sFileName = QFileDialog::getOpenFileName(this,tr("Select the File"),sCurrentPath);
    ui->letSendFilePath->setText(sFileName);
}

void WidgetSendCommon::on_btnSendFile_clicked()
{
//    QFile file(ui->letSendFilePath->text());
//    char sDataBufferBin[file.size()/sizeof(char)];
//    readFileBin(ui->letSendFilePath->text(),sDataBufferBin);
    QString sDataBuffer[1];

    if(serialSend == nullptr)
    {
        QMessageBox::critical(this,"Error","Please open the Serial",QMessageBox::Yes);
        return;
    }
    else if(serialSend->isOpen())
    {
        if(!readFile(ui->letSendFilePath->text(),sDataBuffer))
        {
            QMessageBox::critical(this,"Error","File not found",QMessageBox::Yes);
        }
        else
        {
            serialSend->write(sDataBuffer[0].toLocal8Bit());
            nSendLength += sDataBuffer[0].toLocal8Bit().length();
            emit signalSendNum(nSendLength);
            QMessageBox::information(this,"Notice","File send succeed",QMessageBox::Yes);
        }
    }
    else
    {
        QMessageBox::critical(this,"Error","Please open the Serial",QMessageBox::Yes);
    }
}

void WidgetSendCommon::on_btnClearSendFilePath_clicked()
{
    ui->letSendFilePath->clear();
    nSendLength = 0;
    emit signalSendNum(nSendLength);
}

//读取文件
bool WidgetSendCommon::readFile(QString sFileName, QString *sDataBuffer)
{
    QFile file(sFileName);

    if(file.open(QIODevice::ReadOnly))
    {
        QTextStream stream(&file);
        while (!stream.atEnd())
        {
            sDataBuffer[0] = stream.readAll();
        }
        file.close();
        return true;
    }
    else
    {
        return false;
    }
}

//读取二进制文件
bool WidgetSendCommon::readFileBin(QString sFileName, char *sDataBufferBin)
{
    QFile file(sFileName);
    int i = 0;
    if(file.open(QIODevice::ReadOnly))
    {
//        QTextStream stream(&file);
        while (!file.atEnd())
        {
            file.read((char *)sDataBufferBin,sizeof(char));
//            qDebug()<<QString(sDataBufferBin[i]).toLatin1().toHex();
            i++;
        }
        file.close();
        return true;
    }
}

//初始化配置参数
void WidgetSendCommon::configData()
{
    if(m_sTextEdit == "NULL")
    {
        m_isHexSend = false;
        m_isEnterSend = false;
        m_isTimingSend = false;
        m_letCycleTime = 500;
        m_sTextEdit = "";
    }
    ui->isHexSend->setChecked(m_isHexSend);
    ui->isEnterSend->setChecked(m_isEnterSend);
    ui->isTimingSend->setChecked(m_isTimingSend);
    ui->letCyCleTime->setText(QString("%1").arg(m_letCycleTime));
    ui->textEdit->setPlainText(m_sTextEdit);
    if(m_isTimingSend == true)
    {
        ui->letCyCleTime->setEnabled(false);
    }
}


void WidgetSendCommon::on_isHexSend_stateChanged(int arg1)
{

}



//将一个字符串转换成字节数组
void WidgetSendCommon::String2Hex(QString str, QByteArray &senddata)
{
    int hexdata,lowhexdata;
    int hexdatalen = 0;
    int len = str.length();    //字符串长度
    senddata.resize(len/2);    //两个字符转成一个字节的16进制，所以先预定一个大小
    char lstr,hstr;
    for(int i=0; i<len; )
    {
        hstr=str[i].toLatin1(); //将每个字符都转成ASCII码
        if(hstr == ' ')         //判断是否为空格
        {
            i++;
            continue;
        }
        i++;
        if(i >= len)
            break;
        lstr = str[i].toLatin1();
        hexdata = ConvertHexChar(hstr);  //字符转换成16进制数
        lowhexdata = ConvertHexChar(lstr);
        if((hexdata == 16) || (lowhexdata == 16))
            break;
        else
            hexdata = hexdata*16+lowhexdata;   //两个字符转成一个字节的16进制数
        i++;
        senddata[hexdatalen] = (char)hexdata;  //保存到字节数组中
        hexdatalen++;
    }
    senddata.resize(hexdatalen);                //设置实际的字节数组大小
}

//将一个字符转换成16进制数
char WidgetSendCommon::ConvertHexChar(char ch)
{
    if((ch >= '0') && (ch <= '9'))
        return ch-0x30;
    else if((ch >= 'A') && (ch <= 'F'))
        return ch-'A'+10;
    else if((ch >= 'a') && (ch <= 'f'))
        return ch-'a'+10;
    else return (-1);
}


void WidgetSendCommon::slotmaintosend(QString mainsendtext)
{
    strbuf = mainsendtext;
    qDebug()<<strbuf;
    qDebug("OOOOK");
    on_btnSend_clicked();
}
