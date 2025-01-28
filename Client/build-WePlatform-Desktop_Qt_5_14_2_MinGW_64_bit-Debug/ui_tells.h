/********************************************************************************
** Form generated from reading UI file 'tells.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELLS_H
#define UI_TELLS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_inform
{
public:
    QFrame *frame;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QTextBrowser *textBrowser_5;
    QWidget *widget;
    QLabel *label_8;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QTextEdit *textEdit1;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QComboBox *comboBox;
    QLabel *label_12;
    QLabel *label_13;
    QComboBox *comboBox_2;
    QComboBox *comboBox_3;
    QLabel *label_14;
    QLabel *label_15;
    QComboBox *comboBox_4;
    QComboBox *comboBox_5;
    QComboBox *comboBox_6;
    QTextBrowser *textBrowser_3;
    QLabel *label_5;
    QTextEdit *textEdit;
    QLabel *label;
    QTextBrowser *textBrowser_4;
    QPushButton *pushButton_3;
    QLabel *label_7;
    QLabel *label_6;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QTextBrowser *textBrowser_2;
    QTextBrowser *textBrowser_6;
    QWidget *widget_2;
    QLabel *label_16;
    QPushButton *pushButton_7;
    QLabel *label_17;
    QPushButton *pushButton_8;
    QLabel *label_18;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QPushButton *pushButton_10;
    QPushButton *pushButton_12;
    QPushButton *pushButton_21;
    QPushButton *pushButton_22;
    QPushButton *pushButton_26;
    QPushButton *pushButton_27;
    QPushButton *pushButton_28;
    QPushButton *pushButton_29;
    QPushButton *pushButton_9;
    QLabel *label_19;
    QPushButton *pushButton_30;

    void setupUi(QDialog *inform)
    {
        if (inform->objectName().isEmpty())
            inform->setObjectName(QString::fromUtf8("inform"));
        inform->resize(429, 576);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        inform->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/image/victoricon2.png"), QSize(), QIcon::Normal, QIcon::Off);
        inform->setWindowIcon(icon);
        inform->setToolTipDuration(-1);
        frame = new QFrame(inform);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(-1, -1, 430, 600));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(350, 9, 35, 35));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton{border-image: url(:/image/minimum2.png);}\n"
"QPushButton:hover{background: rgb(140, 210, 245);}"));
        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(385, 9, 35, 35));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{border-image: url(:/image/close2.png);}\n"
"QPushButton:hover{background:rgb(255, 44, 25);}"));
        textBrowser_5 = new QTextBrowser(frame);
        textBrowser_5->setObjectName(QString::fromUtf8("textBrowser_5"));
        textBrowser_5->setGeometry(QRect(200, 440, 191, 41));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(10);
        textBrowser_5->setFont(font1);
        widget = new QWidget(frame);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(9, 9, 412, 581));
        QFont font2;
        font2.setPointSize(10);
        widget->setFont(font2);
        widget->setStyleSheet(QString::fromUtf8("background-color: rgb(238, 247, 255);"));
        label_8 = new QLabel(widget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(0, 0, 412, 35));
        label_8->setStyleSheet(QString::fromUtf8("background-color: rgb(80, 80, 80);"));
        pushButton_4 = new QPushButton(widget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(380, 1, 31, 31));
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton{border-image: url(:/image/close.png);background:rgb(80, 80, 80);}\n"
"QPushButton:hover{background: rgb(207, 0, 0);}"));
        pushButton_5 = new QPushButton(widget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(349, 1, 31, 31));
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton{border-image: url(:/image/minimum.png);background:rgb(80, 80,80);}\n"
"QPushButton:hover{background: rgb(100, 100, 100);}"));
        pushButton_6 = new QPushButton(widget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(140, 490, 131, 41));
        pushButton_6->setFont(font1);
        pushButton_6->setStyleSheet(QString::fromUtf8("QPushButton{border-style:none;background: rgb(89, 164, 222);color: rgb(255, 255, 255);}\n"
"QPushButton:hover{background:rgb(100, 178, 232);color: rgb(255, 255, 255);}"));
        label_9 = new QLabel(widget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(40, 103, 41, 20));
        label_9->setFont(font1);
        label_10 = new QLabel(widget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(40, 313, 41, 20));
        label_10->setFont(font1);
        label_11 = new QLabel(widget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(40, 383, 41, 20));
        label_11->setFont(font1);
        textEdit1 = new QTextEdit(widget);
        textEdit1->setObjectName(QString::fromUtf8("textEdit1"));
        textEdit1->setGeometry(QRect(90, 380, 271, 61));
        textEdit1->setFont(font1);
        textEdit1->setStyleSheet(QString::fromUtf8(""));
        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(90, 240, 271, 31));
        lineEdit->setFont(font1);
        lineEdit_2 = new QLineEdit(widget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(90, 100, 141, 31));
        lineEdit_2->setFont(font1);
        comboBox = new QComboBox(widget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(290, 100, 71, 31));
        comboBox->setFont(font1);
        comboBox->setStyleSheet(QString::fromUtf8(""));
        label_12 = new QLabel(widget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(240, 103, 41, 20));
        label_12->setFont(font1);
        label_13 = new QLabel(widget);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(40, 243, 41, 20));
        label_13->setFont(font1);
        comboBox_2 = new QComboBox(widget);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setGeometry(QRect(90, 310, 131, 31));
        comboBox_2->setFont(font1);
        comboBox_3 = new QComboBox(widget);
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));
        comboBox_3->setGeometry(QRect(230, 310, 131, 31));
        comboBox_3->setFont(font1);
        label_14 = new QLabel(widget);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(10, 4, 72, 21));
        label_14->setFont(font1);
        label_14->setStyleSheet(QString::fromUtf8("background:transparent;"));
        label_15 = new QLabel(widget);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(40, 170, 41, 20));
        label_15->setFont(font1);
        comboBox_4 = new QComboBox(widget);
        comboBox_4->setObjectName(QString::fromUtf8("comboBox_4"));
        comboBox_4->setGeometry(QRect(90, 170, 111, 31));
        comboBox_4->setFont(font1);
        comboBox_5 = new QComboBox(widget);
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->setObjectName(QString::fromUtf8("comboBox_5"));
        comboBox_5->setGeometry(QRect(210, 170, 71, 31));
        comboBox_5->setFont(font1);
        comboBox_6 = new QComboBox(widget);
        comboBox_6->setObjectName(QString::fromUtf8("comboBox_6"));
        comboBox_6->setGeometry(QRect(290, 170, 71, 31));
        comboBox_6->setFont(font1);
        label_8->raise();
        pushButton_4->raise();
        pushButton_5->raise();
        pushButton_6->raise();
        label_9->raise();
        label_10->raise();
        label_11->raise();
        textEdit1->raise();
        lineEdit->raise();
        lineEdit_2->raise();
        label_12->raise();
        label_13->raise();
        comboBox_2->raise();
        comboBox_3->raise();
        label_15->raise();
        comboBox_4->raise();
        comboBox_5->raise();
        comboBox_6->raise();
        comboBox->raise();
        label_14->raise();
        textBrowser_3 = new QTextBrowser(frame);
        textBrowser_3->setObjectName(QString::fromUtf8("textBrowser_3"));
        textBrowser_3->setGeometry(QRect(200, 320, 191, 41));
        textBrowser_3->setFont(font1);
        label_5 = new QLabel(frame);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(161, 260, 31, 31));
        label_5->setStyleSheet(QString::fromUtf8("border-image: url(:/image/id.png);"));
        textEdit = new QTextEdit(frame);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(200, 110, 190, 58));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font3.setPointSize(20);
        font3.setBold(true);
        font3.setWeight(75);
        textEdit->setFont(font3);
        textEdit->setStyleSheet(QString::fromUtf8("color: rgb(90, 90, 90);"));
        textEdit->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit->setReadOnly(true);
        textEdit->setTextInteractionFlags(Qt::NoTextInteraction);
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 100, 110, 110));
        label->setStyleSheet(QString::fromUtf8(""));
        textBrowser_4 = new QTextBrowser(frame);
        textBrowser_4->setObjectName(QString::fromUtf8("textBrowser_4"));
        textBrowser_4->setGeometry(QRect(200, 380, 191, 41));
        textBrowser_4->setFont(font1);
        pushButton_3 = new QPushButton(frame);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(300, 540, 91, 31));
        pushButton_3->setFont(font1);
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton{background:transparent;color: rgb(0, 170, 255);}\n"
"QPushButton:hover{color: rgb(40, 200, 255);}"));
        pushButton_3->setCheckable(true);
        label_7 = new QLabel(frame);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(160, 440, 31, 31));
        label_7->setStyleSheet(QString::fromUtf8("border-image: url(:/image/dizhi.png);"));
        label_6 = new QLabel(frame);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(157, 378, 35, 35));
        label_6->setStyleSheet(QString::fromUtf8("border-image: url(:/image/riqi.png);"));
        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(9, 9, 106, 581));
        label_2->setStyleSheet(QString::fromUtf8("border-image: url(:/image/background4.jpg);"));
        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(9, 9, 411, 581));
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(238, 247, 255);"));
        label_4 = new QLabel(frame);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(162, 323, 26, 26));
        label_4->setStyleSheet(QString::fromUtf8("border-image: url(:/image/yonghu2.png);"));
        textBrowser_2 = new QTextBrowser(frame);
        textBrowser_2->setObjectName(QString::fromUtf8("textBrowser_2"));
        textBrowser_2->setGeometry(QRect(200, 260, 191, 41));
        QFont font4;
        font4.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font4.setPointSize(12);
        textBrowser_2->setFont(font4);
        textBrowser_6 = new QTextBrowser(frame);
        textBrowser_6->setObjectName(QString::fromUtf8("textBrowser_6"));
        textBrowser_6->setGeometry(QRect(205, 170, 180, 51));
        textBrowser_6->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        textBrowser_6->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowser_6->setTextInteractionFlags(Qt::NoTextInteraction);
        widget_2 = new QWidget(frame);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(9, 9, 412, 581));
        widget_2->setStyleSheet(QString::fromUtf8("background-color: rgb(238, 247, 255);"));
        label_16 = new QLabel(widget_2);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(0, 0, 413, 35));
        label_16->setStyleSheet(QString::fromUtf8("background-color: rgb(80, 80, 80);"));
        pushButton_7 = new QPushButton(widget_2);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(380, 1, 31, 31));
        pushButton_7->setStyleSheet(QString::fromUtf8("QPushButton{border-image: url(:/image/close.png);background:rgb(80, 80, 80);}\n"
"QPushButton:hover{background: rgb(207, 0, 0);}"));
        label_17 = new QLabel(widget_2);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(10, 4, 72, 21));
        label_17->setFont(font1);
        label_17->setStyleSheet(QString::fromUtf8("background:transparent;"));
        pushButton_8 = new QPushButton(widget_2);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(349, 1, 31, 31));
        pushButton_8->setStyleSheet(QString::fromUtf8("QPushButton{border-image: url(:/image/minimum.png);background:rgb(80, 80, 80);}\n"
"QPushButton:hover{background: rgb(100, 100, 100);}"));
        label_18 = new QLabel(widget_2);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(80, 100, 121, 121));
        label_18->setStyleSheet(QString::fromUtf8("background-color: rgb(157, 255, 160);"));
        scrollArea = new QScrollArea(widget_2);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(0, 270, 413, 311));
        scrollArea->setMinimumSize(QSize(413, 311));
        scrollArea->setStyleSheet(QString::fromUtf8("background-color: rgb(238, 247, 255);"));
        scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, -186, 411, 500));
        scrollAreaWidgetContents->setMinimumSize(QSize(411, 500));
        pushButton_10 = new QPushButton(scrollAreaWidgetContents);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        pushButton_10->setGeometry(QRect(30, 10, 71, 71));
        pushButton_10->setStyleSheet(QString::fromUtf8("image: url(:/image/CCS.jpg);"));
        pushButton_12 = new QPushButton(scrollAreaWidgetContents);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));
        pushButton_12->setGeometry(QRect(300, 10, 71, 71));
        pushButton_12->setStyleSheet(QString::fromUtf8("\n"
"image: url(:/touxiang/huizhang.png);"));
        pushButton_21 = new QPushButton(scrollAreaWidgetContents);
        pushButton_21->setObjectName(QString::fromUtf8("pushButton_21"));
        pushButton_21->setGeometry(QRect(120, 10, 71, 71));
        pushButton_21->setStyleSheet(QString::fromUtf8("border-image: url(:/touxiang/haimianbob.jpg);"));
        pushButton_22 = new QPushButton(scrollAreaWidgetContents);
        pushButton_22->setObjectName(QString::fromUtf8("pushButton_22"));
        pushButton_22->setGeometry(QRect(210, 10, 71, 71));
        pushButton_22->setStyleSheet(QString::fromUtf8("border-image: url(:/touxiang/paidaxing.jpg);"));
        pushButton_26 = new QPushButton(scrollAreaWidgetContents);
        pushButton_26->setObjectName(QString::fromUtf8("pushButton_26"));
        pushButton_26->setGeometry(QRect(310, 460, 16, 16));
        pushButton_26->setStyleSheet(QString::fromUtf8("border-image: url(:/touxiang/xiaowanzi.jpg);"));
        pushButton_27 = new QPushButton(scrollAreaWidgetContents);
        pushButton_27->setObjectName(QString::fromUtf8("pushButton_27"));
        pushButton_27->setGeometry(QRect(290, 460, 16, 16));
        pushButton_27->setStyleSheet(QString::fromUtf8("border-image: url(:/touxiang/xiaoxin.jpg);"));
        pushButton_28 = new QPushButton(scrollAreaWidgetContents);
        pushButton_28->setObjectName(QString::fromUtf8("pushButton_28"));
        pushButton_28->setGeometry(QRect(350, 460, 16, 16));
        pushButton_28->setStyleSheet(QString::fromUtf8("border-image: url(:/touxiang/yazi.jpg);"));
        pushButton_29 = new QPushButton(scrollAreaWidgetContents);
        pushButton_29->setObjectName(QString::fromUtf8("pushButton_29"));
        pushButton_29->setGeometry(QRect(330, 460, 16, 16));
        pushButton_29->setStyleSheet(QString::fromUtf8("border-image: url(:/touxiang/Simpson.jpg);"));
        scrollArea->setWidget(scrollAreaWidgetContents);
        pushButton_9 = new QPushButton(widget_2);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(250, 150, 101, 35));
        QFont font5;
        font5.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font5.setPointSize(11);
        font5.setBold(false);
        font5.setItalic(false);
        font5.setWeight(9);
        pushButton_9->setFont(font5);
        pushButton_9->setStyleSheet(QString::fromUtf8("QPushButton{border-style:none;font: 75 11pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";background-color: rgb(190, 70, 180);color: rgb(255, 255, 255);}\n"
"QPushButton:hover{background: rgb(190, 70, 230);color: rgb(255, 255, 255);}"));
        label_19 = new QLabel(widget_2);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(320, 90, 41, 16));
        label_16->raise();
        pushButton_7->raise();
        pushButton_8->raise();
        label_18->raise();
        scrollArea->raise();
        pushButton_9->raise();
        label_19->raise();
        label_17->raise();
        pushButton_30 = new QPushButton(frame);
        pushButton_30->setObjectName(QString::fromUtf8("pushButton_30"));
        pushButton_30->setGeometry(QRect(53, 83, 145, 145));
        pushButton_30->setStyleSheet(QString::fromUtf8("QPushButton{border:0px;background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(0, 0, 0, 0), stop:0.70 rgba(0, 0, 0, 0), stop:0.80 rgba(166, 224, 255, 100), stop:1 rgba(0, 0, 0, 0));}\n"
"QPushButton:hover{background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(0, 0, 0, 0), stop:0.70 rgba(0, 0, 0, 0), stop:0.80 rgba(136, 194, 255, 100), stop:1 rgba(0, 0, 0, 0));}"));
        label_3->raise();
        label_2->raise();
        label_4->raise();
        label_5->raise();
        label_6->raise();
        label_7->raise();
        pushButton->raise();
        pushButton_2->raise();
        pushButton_3->raise();
        textBrowser_2->raise();
        textBrowser_3->raise();
        textBrowser_4->raise();
        textBrowser_5->raise();
        textBrowser_6->raise();
        textEdit->raise();
        label->raise();
        pushButton_30->raise();
        widget->raise();
        widget_2->raise();

        retranslateUi(inform);

        QMetaObject::connectSlotsByName(inform);
    } // setupUi

    void retranslateUi(QDialog *inform)
    {
        inform->setWindowTitle(QCoreApplication::translate("inform", "\346\210\221\347\232\204\350\265\204\346\226\231", nullptr));
        pushButton_2->setText(QString());
        pushButton->setText(QString());
        textBrowser_5->setPlaceholderText(QCoreApplication::translate("inform", "\345\234\260\345\235\200", nullptr));
        label_8->setText(QString());
        pushButton_4->setText(QString());
        pushButton_5->setText(QString());
        pushButton_6->setText(QCoreApplication::translate("inform", "\344\277\235\345\255\230", nullptr));
        label_9->setText(QCoreApplication::translate("inform", "<html><head/><body><p><span style=\" color:#555555;\">\346\230\265  \347\247\260</span></p></body></html>", nullptr));
        label_10->setText(QCoreApplication::translate("inform", "<html><head/><body><p><span style=\" color:#555555;\">\345\234\260 \345\235\200</span></p></body></html>", nullptr));
        label_11->setText(QCoreApplication::translate("inform", "<html><head/><body><p><span style=\" color:#555555;\">\347\255\276  \345\220\215</span></p></body></html>", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("inform", "\347\224\267", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("inform", "\345\245\263", nullptr));

        label_12->setText(QCoreApplication::translate("inform", "<html><head/><body><p><span style=\" color:#555555;\">\346\200\247    \345\210\253</span></p></body></html>", nullptr));
        label_13->setText(QCoreApplication::translate("inform", "<html><head/><body><p><span style=\" color:#555555;\">\346\211\213  \346\234\272</span></p></body></html>", nullptr));
        comboBox_2->setItemText(0, QCoreApplication::translate("inform", "\345\214\227\344\272\254", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("inform", "\345\244\251\346\264\245", nullptr));
        comboBox_2->setItemText(2, QCoreApplication::translate("inform", "\346\262\263\345\214\227", nullptr));
        comboBox_2->setItemText(3, QCoreApplication::translate("inform", "\345\261\261\350\245\277", nullptr));
        comboBox_2->setItemText(4, QCoreApplication::translate("inform", "\345\206\205\350\222\231\345\217\244", nullptr));
        comboBox_2->setItemText(5, QCoreApplication::translate("inform", "\350\276\275\345\256\201", nullptr));
        comboBox_2->setItemText(6, QCoreApplication::translate("inform", "\345\220\211\346\236\227", nullptr));
        comboBox_2->setItemText(7, QCoreApplication::translate("inform", "\351\273\221\351\276\231\346\261\237", nullptr));
        comboBox_2->setItemText(8, QCoreApplication::translate("inform", "\344\270\212\346\265\267", nullptr));
        comboBox_2->setItemText(9, QCoreApplication::translate("inform", "\346\261\237\350\213\217", nullptr));
        comboBox_2->setItemText(10, QCoreApplication::translate("inform", "\346\265\231\346\261\237", nullptr));
        comboBox_2->setItemText(11, QCoreApplication::translate("inform", "\345\256\211\345\276\275", nullptr));
        comboBox_2->setItemText(12, QCoreApplication::translate("inform", "\347\246\217\345\273\272", nullptr));
        comboBox_2->setItemText(13, QCoreApplication::translate("inform", "\346\261\237\350\245\277", nullptr));
        comboBox_2->setItemText(14, QCoreApplication::translate("inform", "\345\261\261\344\270\234", nullptr));
        comboBox_2->setItemText(15, QCoreApplication::translate("inform", "\346\262\263\345\215\227", nullptr));
        comboBox_2->setItemText(16, QCoreApplication::translate("inform", "\346\271\226\345\214\227", nullptr));
        comboBox_2->setItemText(17, QCoreApplication::translate("inform", "\346\271\226\345\215\227", nullptr));
        comboBox_2->setItemText(18, QCoreApplication::translate("inform", "\345\271\277\344\270\234", nullptr));
        comboBox_2->setItemText(19, QCoreApplication::translate("inform", "\345\271\277\350\245\277", nullptr));
        comboBox_2->setItemText(20, QCoreApplication::translate("inform", "\346\265\267\345\215\227", nullptr));
        comboBox_2->setItemText(21, QCoreApplication::translate("inform", "\351\207\215\345\272\206", nullptr));
        comboBox_2->setItemText(22, QCoreApplication::translate("inform", "\345\233\233\345\267\235", nullptr));
        comboBox_2->setItemText(23, QCoreApplication::translate("inform", "\350\264\265\345\267\236", nullptr));
        comboBox_2->setItemText(24, QCoreApplication::translate("inform", "\344\272\221\345\215\227", nullptr));
        comboBox_2->setItemText(25, QCoreApplication::translate("inform", "\350\245\277\350\227\217", nullptr));
        comboBox_2->setItemText(26, QCoreApplication::translate("inform", "\351\231\225\350\245\277", nullptr));
        comboBox_2->setItemText(27, QCoreApplication::translate("inform", "\347\224\230\350\202\203", nullptr));
        comboBox_2->setItemText(28, QCoreApplication::translate("inform", "\351\235\222\346\265\267", nullptr));
        comboBox_2->setItemText(29, QCoreApplication::translate("inform", "\345\256\201\345\244\217", nullptr));
        comboBox_2->setItemText(30, QCoreApplication::translate("inform", "\346\226\260\347\226\206", nullptr));
        comboBox_2->setItemText(31, QCoreApplication::translate("inform", "\345\217\260\346\271\276", nullptr));
        comboBox_2->setItemText(32, QCoreApplication::translate("inform", "\351\246\231\346\270\257", nullptr));
        comboBox_2->setItemText(33, QCoreApplication::translate("inform", "\346\276\263\351\227\250", nullptr));
        comboBox_2->setItemText(34, QString());

        label_14->setText(QCoreApplication::translate("inform", "<html><head/><body><p><span style=\" color:#ffffff;\">\347\274\226\350\276\221\350\265\204\346\226\231</span></p></body></html>", nullptr));
        label_15->setText(QCoreApplication::translate("inform", "<html><head/><body><p><span style=\" color:#555555;\">\347\224\237 \346\227\245</span></p></body></html>", nullptr));
        comboBox_5->setItemText(0, QCoreApplication::translate("inform", "1\346\234\210", nullptr));
        comboBox_5->setItemText(1, QCoreApplication::translate("inform", "2\346\234\210", nullptr));
        comboBox_5->setItemText(2, QCoreApplication::translate("inform", "3\346\234\210", nullptr));
        comboBox_5->setItemText(3, QCoreApplication::translate("inform", "4\346\234\210", nullptr));
        comboBox_5->setItemText(4, QCoreApplication::translate("inform", "5\346\234\210", nullptr));
        comboBox_5->setItemText(5, QCoreApplication::translate("inform", "6\346\234\210", nullptr));
        comboBox_5->setItemText(6, QCoreApplication::translate("inform", "7\346\234\210", nullptr));
        comboBox_5->setItemText(7, QCoreApplication::translate("inform", "8\346\234\210", nullptr));
        comboBox_5->setItemText(8, QCoreApplication::translate("inform", "9\346\234\210", nullptr));
        comboBox_5->setItemText(9, QCoreApplication::translate("inform", "10\346\234\210", nullptr));
        comboBox_5->setItemText(10, QCoreApplication::translate("inform", "11\346\234\210", nullptr));
        comboBox_5->setItemText(11, QCoreApplication::translate("inform", "12\346\234\210", nullptr));

        label_5->setText(QString());
        textEdit->setPlaceholderText(QCoreApplication::translate("inform", "\346\230\265\347\247\260", nullptr));
        label->setText(QString());
        textBrowser_4->setPlaceholderText(QCoreApplication::translate("inform", "\347\224\237\346\227\245", nullptr));
        pushButton_3->setText(QCoreApplication::translate("inform", "\347\274\226\350\276\221\350\265\204\346\226\231", nullptr));
        label_7->setText(QString());
        label_6->setText(QString());
        label_2->setText(QString());
        label_3->setText(QString());
        label_4->setText(QString());
        textBrowser_6->setPlaceholderText(QCoreApplication::translate("inform", "\344\270\252\346\200\247\347\255\276\345\220\215", nullptr));
        label_16->setText(QString());
        pushButton_7->setText(QString());
        label_17->setText(QCoreApplication::translate("inform", "<html><head/><body><p><span style=\" color:#fcfcfc;\">\344\277\256\346\224\271\345\244\264\345\203\217</span></p></body></html>", nullptr));
        pushButton_8->setText(QString());
        label_18->setText(QString());
        pushButton_10->setText(QString());
        pushButton_12->setText(QString());
        pushButton_21->setText(QString());
        pushButton_22->setText(QString());
        pushButton_26->setText(QString());
        pushButton_27->setText(QString());
        pushButton_28->setText(QString());
        pushButton_29->setText(QString());
        pushButton_9->setText(QCoreApplication::translate("inform", "\347\241\256\350\256\244\344\277\256\346\224\271", nullptr));
        label_19->setText(QCoreApplication::translate("inform", "TextLabel", nullptr));
        pushButton_30->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class inform: public Ui_inform {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELLS_H
