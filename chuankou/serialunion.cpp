#include "serialunion.h"
#include "ui_serialunion.h"
#include "dir.h"

SerialUnion::SerialUnion(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SerialUnion)
{
    ui->setupUi(this);

    QTimer *refreashtime = new QTimer();
    refreashtime->start(1000);

    m_textdisplay = WidgetTextDisplay::GetTextDisplay();//添加显示界面
    ui->widgetDisplay->addWidget(m_textdisplay);
    m_settings = WidgetSettings::GetSettingIns();//添加设置界面
    ui->widgetSettings->addWidget(m_settings);
    m_sendcommon = WidgetSendCommon::GetSendCommonIns();//添加发送界面
    ui->widgetSend->addWidget(m_sendcommon);


    //状态栏设计
    m_norMessSend = new NormalMess(this);
    ui->statusBar->addWidget(m_norMessSend);
    m_norMessRec = new NormalMess(this);
    ui->statusBar->addWidget(m_norMessRec);
    m_norMessTime = new NormalMess(this);
    ui->statusBar->addWidget(m_norMessTime);
    m_permanUrl = new NormalMess(this);
    ui->statusBar->addPermanentWidget(m_permanUrl);


    //连接信号与槽
    connect(WidgetSettings::GetSettingIns(),SIGNAL(signalRecData(QString)),this,SLOT(slotRecData(QString)));
    connect(WidgetSettings::GetSettingIns(),\
            SIGNAL(signalSenParameter(QSerialPort *)),\
            this,SLOT(slotSenParameter(QSerialPort *)));
    connect(WidgetSettings::GetSettingIns(),SIGNAL(signalClearRec()),this,SLOT(slotClearRec()));
    connect(refreashtime,SIGNAL(timeout()),this,SLOT(slotRefreashtime()));
    connect(WidgetSettings::GetSettingIns(),SIGNAL(signalRecNum(int)),this,SLOT(slotRecNum(int)));
    connect(WidgetSendCommon::GetSendCommonIns(),\
            SIGNAL(signalSendNum(int)),\
            this,\
            SLOT(slotSendNum(int)));
    connect(WidgetSettings::GetSettingIns(),SIGNAL(signalRecHexData(QByteArray)),this,SLOT(slotHexDataprocess(QByteArray)));
    //状态栏初始化
    Dir::GetDirIns()->loadParam();
    m_permanUrl->getMess("<a href=\"https://mp.weixin.qq.com/s/Feo3RDvt4Ozra9naJr1F0g\">欢迎关注公众号</a>");
    m_permanUrl->setToolTip("<img src=':/imageFile/LOVE-EM-SY.jpg'/>");
    m_norMessSend->getMess("S: 0\t");
    m_norMessRec->getMess("R: 0\t");
    m_norMessTime->getMess("当前时间: yyyy-MM-dd hh:mm:ss\t");
}

SerialUnion::~SerialUnion()
{
    Dir::GetDirIns()->saveParam();
    delete ui;
}

SerialUnion *SerialUnion::GetUnion()
{
    static SerialUnion *getunion;
    if(getunion == nullptr)
    {
        getunion = new SerialUnion();
    }
    return getunion;
}

void SerialUnion::slotRecData(QString sData)   //该函数仅仅显示字符串
{
   // QString  str = "0x1B";
    //int value = str.toInt(nullptr, 16);
    //uint8_t tmp = static_cast<uint8_t>(str.toUInt(nullptr, 16));


    WidgetTextDisplay::GetTextDisplay()->getDisplayData(sData);

   // qDebug(ar);
}

void SerialUnion::slotSenParameter(QSerialPort *serial)
{
//    WidgetSend::GetSenIns()->getSendParam(serial);
    WidgetSendCommon::GetSendCommonIns()->getSerialParam(serial);
}

void SerialUnion::slotClearRec()
{
    WidgetTextDisplay::GetTextDisplay()->getClearTextBrower();
}

void SerialUnion::slotRefreashtime()
{
    QDateTime currentTime = QDateTime::currentDateTime();
    QString sCurrentTime = currentTime.toString("yyyy-MM-dd hh:mm:ss");
    m_norMessTime->getMess("当前时间: "+sCurrentTime+"\t");
}

void SerialUnion::slotRecNum(int nRecNum)
{
    m_norMessRec->getMess("R: "+QString("%1").arg(nRecNum)+"\t");
}

void SerialUnion::slotSendNum(int m_nBufferSize)
{
    m_norMessSend->getMess("S: "+QString("%1").arg(m_nBufferSize)+"\t");
}

void SerialUnion::on_mbSaveRecData_triggered()
{
    QString sCurrentPath = QDir::currentPath();
    QString sGetSaveFileName = QFileDialog::getSaveFileName(this,tr("Save file"),sCurrentPath,"(*.txt)");
    if(!mbSaveFile(sGetSaveFileName, WidgetTextDisplay::GetTextDisplay()->displayData()))
    {
        QMessageBox::critical(this,"Error","File error",QMessageBox::Yes);
    }
}

bool SerialUnion::mbSaveFile(QString sFileName,QString sData)
{
    QByteArray sDataByte = sData.toLocal8Bit();
    QFile file(sFileName);
    if(file.open(QIODevice::ReadOnly))
    {
        file.write(sDataByte);
        file.close();
        return true;
    }
    else
    {
        return false;
    }
}

//void SerialUnion::on_mbMoreSettings_triggered()
//{
////    MainSettings::GetMainSetIns()->show();
//}

void SerialUnion::slotHexDataprocess(QByteArray Hexbuffer)
{
    int a = Hexbuffer.size();
    Hexbuffer = Hexbuffer;
    std::cout<<"length = "<<a<<std::endl;
    std::cout<<sizeof(int)<<std::endl;
    std::cout<<sizeof(short)<<std::endl;

    QByteArray ba;
    ba.resize(6);
    ba [0] = 0x3c;
    ba [1] = 0xb8;
    ba [2] = 0x64;
    ba [3] = 0x18;
    ba[4] = 0xca;
    ba.data () [5] = 0x31;
    qDebug()<<" []"<<ba[2]; //[] d
    qDebug()<<"at ()"<<ba.at (2); //at() d
    qDebug()<<"data () "<<ba.data () [2]; //data () d
    qDebug()<<"constData ()"<<ba.constData () [2]; //constData () d
    qDebug()<<"constData ()"<<ba.constData () [5]; //constData () 1
    qDebug()<<"1 zijie"<<Hexbuffer[0];
    qDebug()<<"2 zijie"<<Hexbuffer[1];
    qDebug("OK");

}
