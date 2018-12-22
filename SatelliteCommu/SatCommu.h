#ifndef SATCOMMU_H
#define SATCOMMU_H

#include <QWidget>
#include <QSerialPort>
#include <QSerialPortInfo>
#include <QTimer>
#include <QTime>

namespace Ui {
class SatCommu;
}

class SatCommu : public QWidget
{
    Q_OBJECT

public:
    explicit SatCommu(QWidget *parent = 0);
    ~SatCommu();

    //初始化函数
    void initDevice();

    void writeSerialPortData(QByteArray);

    //SBD模式
    void isDeviceConnected_SBD();//设备与主机是否连接
    void getSignalStrength_SBD();//获取当前信号强度
    void init_SBD_Session_SBD(); //发起SBD会话
    void writeMessage_SBD(QByteArray);//发送数据

    void writeBMessage_SBD(QByteArray);//写入二进制数据
    void readBMessage_SBD();//读取二进制数据
    //拨号模式
    void setBaud_DIAL(int);//设置波特率
    void enableReport_DIAL();//初始化应答
    void getSignalStrength_DIAL();//查询信号强度
    void dialRemote_DIAL(QString);//开始拨号
    void writeMessage_DIAL(QByteArray array);//写入数据--透传
    void readMessage_DIAL();//读取数据--透传
    void sendEscapeSequence_DIAL();//停止通信
    void hangUp_DIAL();//挂断通过，每次通话结束之后必须挂断

    //串口函数
private slots:
    void readSerialPortDataSlot();

    void readMessage_SBDSlot();//从缓存中去读取数据，需要不断查询

    void on_flushSerial_Btn_clicked();

    void on_openSerial_Btn_clicked();

    void on_checkDeviceState_Btn_clicked();

    void on_checkSBDSignal_Btn_clicked();

    void on_creatSession_Btn_clicked();

    void on_readMessage_Btn_clicked();

    void on_sendMessageSBD_Btn_clicked();

    void on_setBaud_Btn_clicked();

    void on_enableDial_Btn_clicked();

    void on_checkDialSignal_Btn_clicked();

    void on_dial_Btn_clicked();

    void on_sendMessageDial_Btn_clicked();

    void on_hangUp_Btn_clicked();

    void on_clearSBD_TextBrowser_Btn_clicked();

    void on_clearDial_TextBrowser_Btn_clicked();

    void on_quit_Btn_clicked();

    void on_reset_Btn_clicked();

private:
    Ui::SatCommu *ui;
    QSerialPort *serialPort1;
    QByteArray serial1Buffer;
    QTimer *readSBDTimer;
};

#endif // SATCOMMU_H
