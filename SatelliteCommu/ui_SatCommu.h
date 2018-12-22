/********************************************************************************
** Form generated from reading UI file 'SatCommu.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SATCOMMU_H
#define UI_SATCOMMU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SatCommu
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_5;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QComboBox *serialPort_ComBox;
    QComboBox *baud_Combox;
    QPushButton *flushSerial_Btn;
    QPushButton *openSerial_Btn;
    QGroupBox *groupBox_4;
    QPushButton *quit_Btn;
    QHBoxLayout *horizontalLayout_6;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QPushButton *readMessage_Btn;
    QPushButton *checkDeviceState_Btn;
    QPushButton *checkSBDSignal_Btn;
    QPushButton *creatSession_Btn;
    QTextBrowser *SBD_TextBrowser;
    QLabel *SBDState_Label;
    QLineEdit *SBD_LineEdit;
    QPushButton *sendMessageSBD_Btn;
    QPushButton *clearSBD_TextBrowser_Btn;
    QPushButton *reset_Btn;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *setBaud_Btn;
    QPushButton *enableDial_Btn;
    QPushButton *checkDialSignal_Btn;
    QHBoxLayout *horizontalLayout;
    QLineEdit *dial_LineEdit;
    QPushButton *dial_Btn;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *dialMessage_LineEdit;
    QPushButton *sendMessageDial_Btn;
    QPushButton *clearDial_TextBrowser_Btn;
    QTextBrowser *Dial_TextBrowser;
    QHBoxLayout *horizontalLayout_4;
    QLabel *DIALState_Label;
    QPushButton *hangUp_Btn;

    void setupUi(QWidget *SatCommu)
    {
        if (SatCommu->objectName().isEmpty())
            SatCommu->setObjectName(QStringLiteral("SatCommu"));
        SatCommu->resize(924, 532);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SatCommu->sizePolicy().hasHeightForWidth());
        SatCommu->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(SatCommu);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        groupBox = new QGroupBox(SatCommu);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        serialPort_ComBox = new QComboBox(groupBox);
        serialPort_ComBox->setObjectName(QStringLiteral("serialPort_ComBox"));

        gridLayout->addWidget(serialPort_ComBox, 0, 0, 1, 1);

        baud_Combox = new QComboBox(groupBox);
        baud_Combox->setObjectName(QStringLiteral("baud_Combox"));

        gridLayout->addWidget(baud_Combox, 0, 1, 1, 1);

        flushSerial_Btn = new QPushButton(groupBox);
        flushSerial_Btn->setObjectName(QStringLiteral("flushSerial_Btn"));

        gridLayout->addWidget(flushSerial_Btn, 1, 0, 1, 1);

        openSerial_Btn = new QPushButton(groupBox);
        openSerial_Btn->setObjectName(QStringLiteral("openSerial_Btn"));

        gridLayout->addWidget(openSerial_Btn, 1, 1, 1, 1);


        horizontalLayout_5->addWidget(groupBox);

        groupBox_4 = new QGroupBox(SatCommu);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        quit_Btn = new QPushButton(groupBox_4);
        quit_Btn->setObjectName(QStringLiteral("quit_Btn"));
        quit_Btn->setGeometry(QRect(30, 20, 75, 23));

        horizontalLayout_5->addWidget(groupBox_4);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        groupBox_2 = new QGroupBox(SatCommu);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        readMessage_Btn = new QPushButton(groupBox_2);
        readMessage_Btn->setObjectName(QStringLiteral("readMessage_Btn"));

        gridLayout_2->addWidget(readMessage_Btn, 2, 0, 1, 1);

        checkDeviceState_Btn = new QPushButton(groupBox_2);
        checkDeviceState_Btn->setObjectName(QStringLiteral("checkDeviceState_Btn"));

        gridLayout_2->addWidget(checkDeviceState_Btn, 0, 0, 1, 1);

        checkSBDSignal_Btn = new QPushButton(groupBox_2);
        checkSBDSignal_Btn->setObjectName(QStringLiteral("checkSBDSignal_Btn"));

        gridLayout_2->addWidget(checkSBDSignal_Btn, 0, 1, 1, 1);

        creatSession_Btn = new QPushButton(groupBox_2);
        creatSession_Btn->setObjectName(QStringLiteral("creatSession_Btn"));

        gridLayout_2->addWidget(creatSession_Btn, 0, 3, 1, 1);

        SBD_TextBrowser = new QTextBrowser(groupBox_2);
        SBD_TextBrowser->setObjectName(QStringLiteral("SBD_TextBrowser"));

        gridLayout_2->addWidget(SBD_TextBrowser, 3, 0, 1, 4);

        SBDState_Label = new QLabel(groupBox_2);
        SBDState_Label->setObjectName(QStringLiteral("SBDState_Label"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(SBDState_Label->sizePolicy().hasHeightForWidth());
        SBDState_Label->setSizePolicy(sizePolicy1);
        SBDState_Label->setMinimumSize(QSize(0, 40));
        SBDState_Label->setStyleSheet(QStringLiteral("background-color: rgb(85, 255, 0);"));

        gridLayout_2->addWidget(SBDState_Label, 4, 0, 1, 4);

        SBD_LineEdit = new QLineEdit(groupBox_2);
        SBD_LineEdit->setObjectName(QStringLiteral("SBD_LineEdit"));

        gridLayout_2->addWidget(SBD_LineEdit, 1, 0, 1, 4);

        sendMessageSBD_Btn = new QPushButton(groupBox_2);
        sendMessageSBD_Btn->setObjectName(QStringLiteral("sendMessageSBD_Btn"));

        gridLayout_2->addWidget(sendMessageSBD_Btn, 2, 3, 1, 1);

        clearSBD_TextBrowser_Btn = new QPushButton(groupBox_2);
        clearSBD_TextBrowser_Btn->setObjectName(QStringLiteral("clearSBD_TextBrowser_Btn"));

        gridLayout_2->addWidget(clearSBD_TextBrowser_Btn, 2, 1, 1, 1);

        reset_Btn = new QPushButton(groupBox_2);
        reset_Btn->setObjectName(QStringLiteral("reset_Btn"));

        gridLayout_2->addWidget(reset_Btn, 0, 2, 1, 1);


        horizontalLayout_6->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(SatCommu);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        gridLayout_3 = new QGridLayout(groupBox_3);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        setBaud_Btn = new QPushButton(groupBox_3);
        setBaud_Btn->setObjectName(QStringLiteral("setBaud_Btn"));

        horizontalLayout_2->addWidget(setBaud_Btn);

        enableDial_Btn = new QPushButton(groupBox_3);
        enableDial_Btn->setObjectName(QStringLiteral("enableDial_Btn"));

        horizontalLayout_2->addWidget(enableDial_Btn);

        checkDialSignal_Btn = new QPushButton(groupBox_3);
        checkDialSignal_Btn->setObjectName(QStringLiteral("checkDialSignal_Btn"));

        horizontalLayout_2->addWidget(checkDialSignal_Btn);


        gridLayout_3->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        dial_LineEdit = new QLineEdit(groupBox_3);
        dial_LineEdit->setObjectName(QStringLiteral("dial_LineEdit"));

        horizontalLayout->addWidget(dial_LineEdit);

        dial_Btn = new QPushButton(groupBox_3);
        dial_Btn->setObjectName(QStringLiteral("dial_Btn"));

        horizontalLayout->addWidget(dial_Btn);


        gridLayout_3->addLayout(horizontalLayout, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        dialMessage_LineEdit = new QLineEdit(groupBox_3);
        dialMessage_LineEdit->setObjectName(QStringLiteral("dialMessage_LineEdit"));

        horizontalLayout_3->addWidget(dialMessage_LineEdit);

        sendMessageDial_Btn = new QPushButton(groupBox_3);
        sendMessageDial_Btn->setObjectName(QStringLiteral("sendMessageDial_Btn"));

        horizontalLayout_3->addWidget(sendMessageDial_Btn);

        clearDial_TextBrowser_Btn = new QPushButton(groupBox_3);
        clearDial_TextBrowser_Btn->setObjectName(QStringLiteral("clearDial_TextBrowser_Btn"));

        horizontalLayout_3->addWidget(clearDial_TextBrowser_Btn);


        gridLayout_3->addLayout(horizontalLayout_3, 2, 0, 1, 1);

        Dial_TextBrowser = new QTextBrowser(groupBox_3);
        Dial_TextBrowser->setObjectName(QStringLiteral("Dial_TextBrowser"));

        gridLayout_3->addWidget(Dial_TextBrowser, 3, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        DIALState_Label = new QLabel(groupBox_3);
        DIALState_Label->setObjectName(QStringLiteral("DIALState_Label"));
        sizePolicy.setHeightForWidth(DIALState_Label->sizePolicy().hasHeightForWidth());
        DIALState_Label->setSizePolicy(sizePolicy);
        DIALState_Label->setMinimumSize(QSize(240, 40));
        DIALState_Label->setStyleSheet(QStringLiteral("background-color: rgb(85, 255, 127);"));

        horizontalLayout_4->addWidget(DIALState_Label);

        hangUp_Btn = new QPushButton(groupBox_3);
        hangUp_Btn->setObjectName(QStringLiteral("hangUp_Btn"));
        hangUp_Btn->setMinimumSize(QSize(1, 0));

        horizontalLayout_4->addWidget(hangUp_Btn);


        gridLayout_3->addLayout(horizontalLayout_4, 4, 0, 1, 1);


        horizontalLayout_6->addWidget(groupBox_3);

        horizontalLayout_6->setStretch(0, 1);
        horizontalLayout_6->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout_6);

        QWidget::setTabOrder(dialMessage_LineEdit, Dial_TextBrowser);
        QWidget::setTabOrder(Dial_TextBrowser, hangUp_Btn);
        QWidget::setTabOrder(hangUp_Btn, serialPort_ComBox);
        QWidget::setTabOrder(serialPort_ComBox, baud_Combox);
        QWidget::setTabOrder(baud_Combox, flushSerial_Btn);
        QWidget::setTabOrder(flushSerial_Btn, openSerial_Btn);
        QWidget::setTabOrder(openSerial_Btn, checkDeviceState_Btn);
        QWidget::setTabOrder(checkDeviceState_Btn, checkSBDSignal_Btn);
        QWidget::setTabOrder(checkSBDSignal_Btn, creatSession_Btn);
        QWidget::setTabOrder(creatSession_Btn, SBD_LineEdit);
        QWidget::setTabOrder(SBD_LineEdit, readMessage_Btn);
        QWidget::setTabOrder(readMessage_Btn, sendMessageSBD_Btn);
        QWidget::setTabOrder(sendMessageSBD_Btn, SBD_TextBrowser);
        QWidget::setTabOrder(SBD_TextBrowser, setBaud_Btn);
        QWidget::setTabOrder(setBaud_Btn, enableDial_Btn);
        QWidget::setTabOrder(enableDial_Btn, checkDialSignal_Btn);
        QWidget::setTabOrder(checkDialSignal_Btn, dial_LineEdit);
        QWidget::setTabOrder(dial_LineEdit, dial_Btn);
        QWidget::setTabOrder(dial_Btn, sendMessageDial_Btn);

        retranslateUi(SatCommu);

        QMetaObject::connectSlotsByName(SatCommu);
    } // setupUi

    void retranslateUi(QWidget *SatCommu)
    {
        SatCommu->setWindowTitle(QApplication::translate("SatCommu", "SatCommu", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("SatCommu", "\344\270\262\345\217\243", Q_NULLPTR));
        baud_Combox->clear();
        baud_Combox->insertItems(0, QStringList()
         << QApplication::translate("SatCommu", "9600", Q_NULLPTR)
         << QApplication::translate("SatCommu", "4800", Q_NULLPTR)
        );
        flushSerial_Btn->setText(QApplication::translate("SatCommu", "\345\210\267\346\226\260", Q_NULLPTR));
        openSerial_Btn->setText(QApplication::translate("SatCommu", "\346\211\223\345\274\200", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("SatCommu", "\351\242\204\347\225\231", Q_NULLPTR));
        quit_Btn->setText(QApplication::translate("SatCommu", "\351\200\200\345\207\272", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("SatCommu", "SBD", Q_NULLPTR));
        readMessage_Btn->setText(QApplication::translate("SatCommu", "\350\257\273\345\217\226\344\277\241\346\201\257", Q_NULLPTR));
        checkDeviceState_Btn->setText(QApplication::translate("SatCommu", "\346\243\200\346\237\245\350\256\276\345\244\207", Q_NULLPTR));
        checkSBDSignal_Btn->setText(QApplication::translate("SatCommu", "\346\243\200\346\237\245\344\277\241\345\217\267", Q_NULLPTR));
        creatSession_Btn->setText(QApplication::translate("SatCommu", "\345\273\272\347\253\213\344\274\232\350\257\235", Q_NULLPTR));
        SBDState_Label->setText(QApplication::translate("SatCommu", "SBD\347\212\266\346\200\201", Q_NULLPTR));
        sendMessageSBD_Btn->setText(QApplication::translate("SatCommu", "\345\217\221\351\200\201", Q_NULLPTR));
        clearSBD_TextBrowser_Btn->setText(QApplication::translate("SatCommu", "\346\270\205\351\231\244", Q_NULLPTR));
        reset_Btn->setText(QApplication::translate("SatCommu", "\351\207\215\347\275\256", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("SatCommu", "\346\213\250\345\217\267", Q_NULLPTR));
        setBaud_Btn->setText(QApplication::translate("SatCommu", "\350\256\276\347\275\256\346\263\242\347\211\271\347\216\207", Q_NULLPTR));
        enableDial_Btn->setText(QApplication::translate("SatCommu", "\344\275\277\350\203\275\346\213\250\345\217\267", Q_NULLPTR));
        checkDialSignal_Btn->setText(QApplication::translate("SatCommu", "\346\243\200\346\237\245\344\277\241\345\217\267", Q_NULLPTR));
        dial_Btn->setText(QApplication::translate("SatCommu", "\346\213\250\345\217\267", Q_NULLPTR));
        sendMessageDial_Btn->setText(QApplication::translate("SatCommu", "\345\217\221\351\200\201", Q_NULLPTR));
        clearDial_TextBrowser_Btn->setText(QApplication::translate("SatCommu", "\346\270\205\351\231\244", Q_NULLPTR));
        DIALState_Label->setText(QApplication::translate("SatCommu", "\346\213\250\345\217\267\347\212\266\346\200\201", Q_NULLPTR));
        hangUp_Btn->setText(QApplication::translate("SatCommu", "\346\214\202\346\226\255", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SatCommu: public Ui_SatCommu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SATCOMMU_H
