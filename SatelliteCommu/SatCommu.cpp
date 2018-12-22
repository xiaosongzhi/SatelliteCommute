#include "SatCommu.h"
#include "ui_SatCommu.h"
#include <QMessageBox>
#include <QDebug>

/*1、在透传模式下需要加回车吗
 *2、拨号模式
 *  下位机在发送图片时发起拨号模式
 *  上位机更改路径时发起拨号模式
 *3、
 *
 *
*/

SatCommu::SatCommu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SatCommu)
{
    ui->setupUi(this);
//    setWindowFlags(Qt::FramelessWindowHint);//无边框
//    setAttribute(Qt::WA_TranslucentBackground);//背景透明
    setWindowTitle(tr("铱星测试软件"));
    initDevice();
}

SatCommu::~SatCommu()
{
    delete ui;
}
void SatCommu::initDevice()
{
    serialPort1 = new QSerialPort(this);
    readSBDTimer = new QTimer(this);

    connect(serialPort1,SIGNAL(readyRead()),this,SLOT(readSerialPortDataSlot()));
    connect(readSBDTimer,SIGNAL(timeout()),this,SLOT(readMessage_SBDSlot()));
}

//串口部分函数
void SatCommu::on_flushSerial_Btn_clicked()
{
    QSerialPortInfo m_serialPortInfo;
    QStringList serialPortNames;

    foreach(m_serialPortInfo,QSerialPortInfo::availablePorts())
    {
        QSerialPort serialPort;
        serialPort.setPort(m_serialPortInfo);
        if(serialPort.open(QIODevice::ReadWrite))
        {
            serialPortNames.append(m_serialPortInfo.portName());
            serialPort.close();
        }
    }
    ui->serialPort_ComBox->clear();
    ui->serialPort_ComBox->addItems(serialPortNames);
    if(serialPortNames.isEmpty())
    {
        QMessageBox::warning(NULL,"WARNING","无可用串口",QMessageBox::Retry);
    }
}

void SatCommu::on_openSerial_Btn_clicked()
{
    serialPort1->setPortName(ui->serialPort_ComBox->currentText());

    if(ui->openSerial_Btn->text() == "打开")
    {
        if(serialPort1->open(QIODevice::ReadWrite))
        {
            ui->openSerial_Btn->setText("关闭");
            serialPort1->setBaudRate(ui->baud_Combox->currentText().toInt());
            serialPort1->setDataBits(QSerialPort::Data8);
            serialPort1->setParity(QSerialPort::NoParity);
            serialPort1->setStopBits(QSerialPort::OneStop);
            serialPort1->setFlowControl(QSerialPort::NoFlowControl);
        }
        else
        {
            QMessageBox::warning(NULL,"WARNING","串口打开失败",QMessageBox::Retry);
        }
    }

    else if(ui->openSerial_Btn->text() == "关闭")
    {
        serialPort1->close();

        ui->openSerial_Btn->setText("打开");
    }
}
void SatCommu::writeSerialPortData(QByteArray array)
{
    if(serialPort1->isWritable())
    {
        QByteArray sendArray(array.append("\r\n"));
        if(serialPort1->write(sendArray) < 0)//错误返回 -1
        {
            QMessageBox::warning(NULL,"WARNING","数据发送失败",QMessageBox::Ok);
        }
    }
}
void SatCommu::readSerialPortDataSlot()
{
    QByteArray receiveData;
    receiveData = serialPort1->readAll();

    ui->SBD_TextBrowser->insertPlainText(receiveData);

    serial1Buffer.append(receiveData);

    QString str(serial1Buffer);
    //    str.remove(QRegExp("\r\n"));
    qDebug()<<str;
    if(str.contains("OK") && str.endsWith("\r\n"))
    {
        qDebug()<<str<<str.length();
        serial1Buffer.clear();
    }
    if(str.contains("-"))
    {
        serial1Buffer.clear();
        QMessageBox::warning(NULL,"WARNING","设备断开",QMessageBox::Ok);
    }


}

//SBD模式
void SatCommu::isDeviceConnected_SBD()//设备与主机是否连接
{
    QByteArray array("AT");
    writeSerialPortData(array);
}
void SatCommu::getSignalStrength_SBD()//获取当前信号强度
{
    QByteArray array("AT+CSQ");
    writeSerialPortData(array);
}
void SatCommu::init_SBD_Session_SBD() //发起SBD会话
{
    QByteArray array("AT+SBDIX");
    writeSerialPortData(array);
}
void SatCommu::writeMessage_SBD(QByteArray message)//发送数据
{
    QByteArray array("AT+SBDWT=");
    writeSerialPortData(array.append(message));
}
void SatCommu::readMessage_SBDSlot()//从缓存中去读取数据，需要不断查询
{
    QByteArray array("AT+SBDRT");
    writeSerialPortData(array);
}
void SatCommu::writeBMessage_SBD(QByteArray)//写入二进制数据
{
    QByteArray array("AT+SBDWB");
    writeSerialPortData(array);
}
void SatCommu::readBMessage_SBD()//读取二进制数据
{
    QByteArray array("AT+SBDRB");
    writeSerialPortData(array);
}
//拨号模式
void SatCommu::setBaud_DIAL(int baud)//设置波特率
{
    Q_UNUSED(baud);
    QByteArray array("AT+CBST=6,0,1");
    writeSerialPortData(array);

}
void SatCommu::enableReport_DIAL()//初始化应答
{
    QByteArray array("AT+CR=1");
    writeSerialPortData(array);
}
void SatCommu::getSignalStrength_DIAL()//查询信号强度
{
    QByteArray array("AT+CSQ");
    writeSerialPortData(array);
}
void SatCommu::dialRemote_DIAL(QString str)//开始拨号
{
    QByteArray array("ATD");
    writeSerialPortData(array.append(str));
}
//透传需要回车吗
void SatCommu::writeMessage_DIAL(QByteArray array)//写入数据--透传
{
    writeSerialPortData(array);
}
//不许查询读取---直接显示数据
void SatCommu::readMessage_DIAL()//读取数据--透传
{

}
void SatCommu::sendEscapeSequence_DIAL()//停止通信
{
    QByteArray array("+++");
    writeSerialPortData(array);
}
void SatCommu::hangUp_DIAL()//挂断通过，每次通话结束之后必须挂断
{
    QByteArray array("ATH0");
    writeSerialPortData(array);
}
//界面槽函数
//SBD
void SatCommu::on_checkDeviceState_Btn_clicked()
{
    isDeviceConnected_SBD();
}

void SatCommu::on_checkSBDSignal_Btn_clicked()
{
    getSignalStrength_SBD();
}

void SatCommu::on_creatSession_Btn_clicked()
{
    init_SBD_Session_SBD();
}

void SatCommu::on_readMessage_Btn_clicked()
{
    readMessage_SBDSlot();
}

void SatCommu::on_sendMessageSBD_Btn_clicked()
{
    QString str = ui->SBD_LineEdit->text();
    QByteArray array;
    writeMessage_SBD(array.append(str));
}
void SatCommu::on_clearSBD_TextBrowser_Btn_clicked()
{
    ui->SBD_TextBrowser->setText("");
}
//拨号
void SatCommu::on_setBaud_Btn_clicked()
{
    int baud = ui->baud_Combox->currentText().toInt();

    setBaud_DIAL(baud);
}

void SatCommu::on_enableDial_Btn_clicked()
{
    enableReport_DIAL();
}

void SatCommu::on_checkDialSignal_Btn_clicked()
{
    getSignalStrength_DIAL();
}

void SatCommu::on_dial_Btn_clicked()
{
    QString strNum = ui->dial_LineEdit->text();
    dialRemote_DIAL(strNum);
}

void SatCommu::on_sendMessageDial_Btn_clicked()
{
    QString str = ui->dialMessage_LineEdit->text();
    QByteArray array;
    array.append(str);
    writeMessage_DIAL(array);
}

void SatCommu::on_hangUp_Btn_clicked()
{
    sendEscapeSequence_DIAL();
    hangUp_DIAL();
}

void SatCommu::on_clearDial_TextBrowser_Btn_clicked()
{
    ui->Dial_TextBrowser->setText("");//删除TextBrowser中的文本
}

void SatCommu::on_quit_Btn_clicked()
{
    this->close();
}
//设备重置
void SatCommu::on_reset_Btn_clicked()
{
    serial1Buffer.clear();
}
