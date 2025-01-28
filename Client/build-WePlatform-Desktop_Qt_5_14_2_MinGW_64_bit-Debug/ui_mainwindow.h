/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>
#include "listwidget.h"
#include "listwidget2.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QFrame *frame;
    QPushButton *pushButton_7;
    QTabWidget *tabWidget;
    QWidget *tab_3;
    QLabel *label_12;
    QLabel *label_13;
    QLineEdit *lineEdit;
    QLabel *label_3;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QTextEdit *textEdit;
    QPushButton *pushButton_13;
    QPushButton *pushButton_14;
    listwidget2 *listWidget_2;
    QLabel *label_16;
    listwidget2 *listWidget_3;
    QPushButton *pushButton_26;
    QWidget *tab;
    QLabel *label_10;
    QLabel *label_11;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton_8;
    QWidget *widget_4;
    QPushButton *pushButton_20;
    QPushButton *pushButton_21;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_20;
    QPushButton *pushButton_22;
    QWidget *widget_5;
    QLabel *label_21;
    QLabel *label_22;
    QLabel *label_23;
    QLabel *label_24;
    QLabel *label_25;
    QLabel *label_26;
    QPushButton *pushButton_23;
    QLabel *label_27;
    QLabel *label_28;
    QLabel *label_29;
    QLabel *label_30;
    QLabel *label_31;
    QLabel *label_32;
    QLabel *label_33;
    QPushButton *pushButton_24;
    QTabWidget *tabWidget_2;
    QWidget *tab_4;
    alistwidget *listWidget;
    QWidget *tab_5;
    alistwidget *listWidget_4;
    QWidget *tab_2;
    QPushButton *pushButton_2;
    QLabel *label_8;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QLabel *label_9;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton_25;
    QListWidget *listWidget_5;
    QPushButton *pushButton_15;
    QLabel *label_2;
    QPushButton *pushButton_6;
    QWidget *widget_3;
    QPushButton *pushButton_16;
    QPushButton *pushButton_17;
    QLabel *label_5;
    QWidget *widget_2;
    QPushButton *pushButton_18;
    QPushButton *pushButton_19;
    QLabel *label_7;
    QLabel *label_34;
    QCommandLinkButton *commandLinkButton;
    QLabel *label_6;
    QLabel *label;
    QPushButton *pushButton_5;
    QPushButton *pushButton_4;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1020, 765);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        MainWindow->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/image/victoricon2.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        MainWindow->setIconSize(QSize(40, 40));
        MainWindow->setToolButtonStyle(Qt::ToolButtonIconOnly);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 1020, 756));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        pushButton_7 = new QPushButton(frame);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(897, 10, 34, 34));
        pushButton_7->setStyleSheet(QString::fromUtf8("QPushButton{border-image: url(:/image/shezhi2.png);background: rgb(238, 247, 255);}\n"
"QPushButton:hover{background:rgb(168, 220, 255);}"));
        tabWidget = new QTabWidget(frame);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(8, 38, 1003, 718));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(10);
        tabWidget->setFont(font1);
        tabWidget->setStyleSheet(QString::fromUtf8("QTabWidget{border:none;}\n"
"QTabWidget::tab-bar { alignment: center; } \n"
"QTabBar::tab{ background: rgb(50, 50, 50); }\n"
"QTabBar::tab:hover { background: rgb(80, 80, 80); }\n"
"QTabBar::tab:selected { background: rgb(89, 164, 222); }\n"
"\n"
""));
        tabWidget->setTabPosition(QTabWidget::West);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setIconSize(QSize(70, 72));
        tabWidget->setElideMode(Qt::ElideNone);
        tabWidget->setUsesScrollButtons(false);
        tabWidget->setDocumentMode(false);
        tabWidget->setTabsClosable(false);
        tabWidget->setMovable(true);
        tabWidget->setTabBarAutoHide(false);
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        label_12 = new QLabel(tab_3);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(0, 0, 310, 751));
        label_12->setStyleSheet(QString::fromUtf8("background-color: rgb(225, 240, 250);"));
        label_13 = new QLabel(tab_3);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(310, 0, 611, 751));
        label_13->setStyleSheet(QString::fromUtf8("background-color: rgb(238, 247, 255);"));
        lineEdit = new QLineEdit(tab_3);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(20, 18, 271, 31));
        lineEdit->setFont(font1);
        lineEdit->setStyleSheet(QString::fromUtf8(""));
        label_3 = new QLabel(tab_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(310, 520, 611, 201));
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        pushButton_9 = new QPushButton(tab_3);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(340, 527, 38, 38));
        pushButton_9->setStyleSheet(QString::fromUtf8("border-image: url(:/image/biaoqing.png);"));
        pushButton_10 = new QPushButton(tab_3);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        pushButton_10->setGeometry(QRect(388, 529, 34, 34));
        pushButton_10->setStyleSheet(QString::fromUtf8("border-image: url(:/image/wenjian.png);"));
        pushButton_11 = new QPushButton(tab_3);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));
        pushButton_11->setGeometry(QRect(830, 660, 61, 31));
        pushButton_11->setFont(font1);
        pushButton_11->setStyleSheet(QString::fromUtf8("QPushButton{border-style:none;background-color: rgb(210, 235, 250);color: rgb(80, 80, 80);}\n"
"QPushButton:hover{background:rgb(200, 225, 250);color: rgb(50, 50, 50);}"));
        textEdit = new QTextEdit(tab_3);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(337, 570, 561, 121));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font2.setPointSize(11);
        textEdit->setFont(font2);
        pushButton_13 = new QPushButton(tab_3);
        pushButton_13->setObjectName(QString::fromUtf8("pushButton_13"));
        pushButton_13->setGeometry(QRect(860, 527, 38, 38));
        pushButton_13->setStyleSheet(QString::fromUtf8("border-image: url(:/image/lishi.png);"));
        pushButton_14 = new QPushButton(tab_3);
        pushButton_14->setObjectName(QString::fromUtf8("pushButton_14"));
        pushButton_14->setGeometry(QRect(872, 7, 38, 38));
        pushButton_14->setStyleSheet(QString::fromUtf8("border-image: url(:/image/more.png);"));
        listWidget_2 = new listwidget2(tab_3);
        listWidget_2->setObjectName(QString::fromUtf8("listWidget_2"));
        listWidget_2->setGeometry(QRect(-2, 120, 311, 595));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font3.setPointSize(14);
        listWidget_2->setFont(font3);
        listWidget_2->setStyleSheet(QString::fromUtf8("background-color: rgb(225, 240, 250);"));
        listWidget_2->setIconSize(QSize(0, 0));
        listWidget_2->setTextElideMode(Qt::ElideMiddle);
        label_16 = new QLabel(tab_3);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(0, 85, 312, 31));
        label_16->setFont(font1);
        label_16->setStyleSheet(QString::fromUtf8("color: rgb(93, 93, 93);"));
        listWidget_3 = new listwidget2(tab_3);
        listWidget_3->setObjectName(QString::fromUtf8("listWidget_3"));
        listWidget_3->setGeometry(QRect(310, 50, 611, 471));
        listWidget_3->setStyleSheet(QString::fromUtf8("background-color: rgb(248, 250, 250);"));
        listWidget_3->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        pushButton_26 = new QPushButton(tab_3);
        pushButton_26->setObjectName(QString::fromUtf8("pushButton_26"));
        pushButton_26->setGeometry(QRect(260, 21, 24, 24));
        pushButton_26->setStyleSheet(QString::fromUtf8("QPushButton{border-image: url(:/image/close2.png);background-color: rgb(225, 240, 250);border-radius:12px;}\n"
"QPushButton:hover{background:rgb(178, 230, 255);}"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/image/chat.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(tab_3, icon1, QString());
        label_13->raise();
        label_12->raise();
        label_3->raise();
        textEdit->raise();
        lineEdit->raise();
        pushButton_9->raise();
        pushButton_10->raise();
        pushButton_11->raise();
        pushButton_13->raise();
        pushButton_14->raise();
        listWidget_2->raise();
        label_16->raise();
        listWidget_3->raise();
        pushButton_26->raise();
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        tab->setLayoutDirection(Qt::LeftToRight);
        tab->setAutoFillBackground(false);
        label_10 = new QLabel(tab);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(0, 0, 311, 718));
        label_10->setStyleSheet(QString::fromUtf8("background-color: rgb(225, 240, 250);"));
        label_11 = new QLabel(tab);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(310, 0, 611, 718));
        label_11->setStyleSheet(QString::fromUtf8("background-color: rgb(238, 247, 255);"));
        lineEdit_2 = new QLineEdit(tab);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(20, 18, 231, 31));
        lineEdit_2->setFont(font1);
        lineEdit_2->setStyleSheet(QString::fromUtf8(""));
        pushButton_8 = new QPushButton(tab);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(260, 18, 31, 31));
        pushButton_8->setStyleSheet(QString::fromUtf8("QPushButton{border-image: url(:/image/tianjia2.png);background: rgb(50, 50, 50);}\n"
"QPushButton:hover{background: rgb(90, 90, 90);}"));
        pushButton_8->setCheckable(true);
        widget_4 = new QWidget(tab);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        widget_4->setGeometry(QRect(292, 18, 121, 81));
        widget_4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        pushButton_20 = new QPushButton(widget_4);
        pushButton_20->setObjectName(QString::fromUtf8("pushButton_20"));
        pushButton_20->setGeometry(QRect(0, 0, 123, 43));
        QFont font4;
        font4.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font4.setPointSize(10);
        font4.setBold(false);
        font4.setWeight(50);
        pushButton_20->setFont(font4);
        pushButton_20->setStyleSheet(QString::fromUtf8("QPushButton{border-style:none;background: rgb(50, 50, 50);color: rgb(210, 210, 210);}\n"
"QPushButton:hover{background: rgb(100, 100, 100);color: rgb(230, 230, 230);}"));
        pushButton_21 = new QPushButton(widget_4);
        pushButton_21->setObjectName(QString::fromUtf8("pushButton_21"));
        pushButton_21->setGeometry(QRect(0, 40, 123, 43));
        pushButton_21->setFont(font4);
        pushButton_21->setStyleSheet(QString::fromUtf8("QPushButton{border-style:none;background: rgb(50, 50, 50);color: rgb(210, 210, 210);}\n"
"QPushButton:hover{background: rgb(100, 100, 100);color: rgb(230, 230, 230);}"));
        label_17 = new QLabel(tab);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(38, 88, 10, 10));
        label_17->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);"));
        label_18 = new QLabel(tab);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(10, 93, 36, 36));
        label_18->setStyleSheet(QString::fromUtf8("background: rgb(89, 164, 222);"));
        label_19 = new QLabel(tab);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(-2, 85, 312, 51));
        label_19->setFont(font1);
        label_19->setStyleSheet(QString::fromUtf8("background: rgb(210, 235, 250);"));
        label_20 = new QLabel(tab);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(10, 93, 36, 36));
        label_20->setStyleSheet(QString::fromUtf8("border-image: url(:/image/addfriend.png);"));
        pushButton_22 = new QPushButton(tab);
        pushButton_22->setObjectName(QString::fromUtf8("pushButton_22"));
        pushButton_22->setGeometry(QRect(-2, 85, 312, 51));
        pushButton_22->setStyleSheet(QString::fromUtf8("QPushButton {background: transparent;border:none; }\n"
"QPushButton:hover{background-color:rgb(145,205,250,70);border:none;}\n"
""));
        widget_5 = new QWidget(tab);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        widget_5->setGeometry(QRect(380, 70, 471, 531));
        label_21 = new QLabel(widget_5);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(175, 50, 121, 121));
        label_21->setStyleSheet(QString::fromUtf8("background-color: rgb(179, 116, 255);"));
        label_22 = new QLabel(widget_5);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(155, 200, 161, 31));
        label_22->setFont(font3);
        label_22->setStyleSheet(QString::fromUtf8(""));
        label_22->setAlignment(Qt::AlignCenter);
        label_23 = new QLabel(widget_5);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setGeometry(QRect(320, 200, 31, 31));
        label_23->setStyleSheet(QString::fromUtf8("border-image: url(:/image/boy.png);"));
        label_24 = new QLabel(widget_5);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setGeometry(QRect(210, 260, 181, 31));
        label_24->setFont(font1);
        label_24->setStyleSheet(QString::fromUtf8(""));
        label_24->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_25 = new QLabel(widget_5);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setGeometry(QRect(210, 315, 141, 31));
        label_25->setFont(font1);
        label_25->setStyleSheet(QString::fromUtf8(""));
        label_26 = new QLabel(widget_5);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setGeometry(QRect(210, 370, 141, 31));
        label_26->setFont(font1);
        label_26->setStyleSheet(QString::fromUtf8(""));
        pushButton_23 = new QPushButton(widget_5);
        pushButton_23->setObjectName(QString::fromUtf8("pushButton_23"));
        pushButton_23->setGeometry(QRect(300, 340, 131, 41));
        pushButton_23->setFont(font1);
        pushButton_23->setStyleSheet(QString::fromUtf8("QPushButton{border-style:none;background: rgb(89, 164, 222);color: rgb(255, 255, 255);}\n"
"QPushButton:hover{background:rgb(100, 178, 232);color: rgb(255, 255, 255);}"));
        label_27 = new QLabel(widget_5);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setGeometry(QRect(120, 261, 28, 28));
        label_27->setStyleSheet(QString::fromUtf8("border-image: url(:/image/yonghu2.png);"));
        label_28 = new QLabel(widget_5);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setGeometry(QRect(117, 315, 33, 33));
        label_28->setStyleSheet(QString::fromUtf8("border-image: url(:/image/riqi.png);"));
        label_29 = new QLabel(widget_5);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        label_29->setGeometry(QRect(120, 373, 28, 28));
        label_29->setStyleSheet(QString::fromUtf8("border-image: url(:/image/dizhi.png);"));
        label_30 = new QLabel(widget_5);
        label_30->setObjectName(QString::fromUtf8("label_30"));
        label_30->setGeometry(QRect(160, 265, 41, 21));
        label_30->setFont(font1);
        label_30->setStyleSheet(QString::fromUtf8("color: rgb(99, 99, 99);"));
        label_31 = new QLabel(widget_5);
        label_31->setObjectName(QString::fromUtf8("label_31"));
        label_31->setGeometry(QRect(160, 320, 41, 21));
        label_31->setFont(font1);
        label_31->setStyleSheet(QString::fromUtf8("color: rgb(99, 99, 99);"));
        label_32 = new QLabel(widget_5);
        label_32->setObjectName(QString::fromUtf8("label_32"));
        label_32->setGeometry(QRect(160, 375, 41, 21));
        label_32->setFont(font1);
        label_32->setStyleSheet(QString::fromUtf8("color: rgb(99, 99, 99);"));
        label_33 = new QLabel(widget_5);
        label_33->setObjectName(QString::fromUtf8("label_33"));
        label_33->setGeometry(QRect(320, 200, 31, 31));
        label_33->setStyleSheet(QString::fromUtf8("border-image: url(:/image/girl.png);"));
        pushButton_24 = new QPushButton(tab);
        pushButton_24->setObjectName(QString::fromUtf8("pushButton_24"));
        pushButton_24->setGeometry(QRect(223, 21, 24, 24));
        pushButton_24->setStyleSheet(QString::fromUtf8("QPushButton{border-image: url(:/image/close2.png);background-color: rgb(225, 240, 250);border-radius:12px;}\n"
"QPushButton:hover{background:rgb(178, 230, 255);}"));
        tabWidget_2 = new QTabWidget(tab);
        tabWidget_2->setObjectName(QString::fromUtf8("tabWidget_2"));
        tabWidget_2->setGeometry(QRect(0, 137, 311, 581));
        tabWidget_2->setFont(font1);
        tabWidget_2->setStyleSheet(QString::fromUtf8("QTabWidget{border:none;}\n"
"QTabWidget::tab-bar { alignment: left; } \n"
"QTabBar::tab{ background: rgb(225, 240, 250);color:rgb(110,110,110); }\n"
"QTabBar::tab:hover { background: rgb(200, 230, 250); }\n"
"QTabBar::tab:selected { background: rgb(170, 220, 250); }"));
        tabWidget_2->setTabPosition(QTabWidget::North);
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        listWidget = new alistwidget(tab_4);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(0, 0, 311, 549));
        listWidget->setFont(font3);
        listWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(225, 240, 250);"));
        listWidget->setIconSize(QSize(0, 0));
        listWidget->setTextElideMode(Qt::ElideMiddle);
        tabWidget_2->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        listWidget_4 = new alistwidget(tab_5);
        listWidget_4->setObjectName(QString::fromUtf8("listWidget_4"));
        listWidget_4->setGeometry(QRect(0, 0, 311, 550));
        listWidget_4->setFont(font3);
        listWidget_4->setStyleSheet(QString::fromUtf8("background-color: rgb(225, 240, 250);"));
        listWidget_4->setIconSize(QSize(0, 0));
        listWidget_4->setTextElideMode(Qt::ElideMiddle);
        tabWidget_2->addTab(tab_5, QString());
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/image/haoyou.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(tab, icon2, QString());
        label_11->raise();
        label_10->raise();
        lineEdit_2->raise();
        pushButton_8->raise();
        label_19->raise();
        pushButton_22->raise();
        widget_5->raise();
        widget_4->raise();
        pushButton_24->raise();
        label_18->raise();
        label_20->raise();
        label_17->raise();
        tabWidget_2->raise();
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        pushButton_2 = new QPushButton(tab_2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(588, 448, 81, 81));
        pushButton_2->setStyleSheet(QString::fromUtf8("border-image: url(:/image/QQ.png);"));
        label_8 = new QLabel(tab_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(0, 0, 311, 741));
        label_8->setStyleSheet(QString::fromUtf8("background-color: rgb(225, 240, 250);"));
        pushButton = new QPushButton(tab_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(728, 198, 121, 121));
        pushButton->setStyleSheet(QString::fromUtf8("border-image: url(:/image/wxx.png);"));
        pushButton_3 = new QPushButton(tab_2);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(358, 238, 121, 121));
        pushButton_3->setStyleSheet(QString::fromUtf8("border-image: url(:/image/wbb.png);"));
        label_9 = new QLabel(tab_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(310, 8, 611, 751));
        label_9->setStyleSheet(QString::fromUtf8("background-color: rgb(238, 247, 255);"));
        lineEdit_3 = new QLineEdit(tab_2);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(20, 18, 261, 31));
        lineEdit_3->setFont(font1);
        lineEdit_3->setStyleSheet(QString::fromUtf8(""));
        pushButton_25 = new QPushButton(tab_2);
        pushButton_25->setObjectName(QString::fromUtf8("pushButton_25"));
        pushButton_25->setGeometry(QRect(880, 130, 41, 41));
        pushButton_25->setStyleSheet(QString::fromUtf8("QPushButton{border-image: url(:/image/tianjia2.png);background: rgb(120, 190, 235);}\n"
"QPushButton:hover{background: rgb(130, 210, 245);}"));
        pushButton_25->setCheckable(true);
        listWidget_5 = new QListWidget(tab_2);
        listWidget_5->setObjectName(QString::fromUtf8("listWidget_5"));
        listWidget_5->setGeometry(QRect(310, 170, 611, 551));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/image/dongtai.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(tab_2, icon3, QString());
        pushButton_15 = new QPushButton(frame);
        pushButton_15->setObjectName(QString::fromUtf8("pushButton_15"));
        pushButton_15->setGeometry(QRect(8, 676, 79, 79));
        pushButton_15->setStyleSheet(QString::fromUtf8("QPushButton{border-image: url(:/image/more2.png);background: rgb(50, 50, 50);}\n"
"QPushButton:hover{background: rgb(80, 80, 80);}"));
        pushButton_15->setCheckable(true);
        pushButton_15->setFlat(false);
        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(398, 8, 613, 41));
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(238, 247, 255);"));
        pushButton_6 = new QPushButton(frame);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(18, 18, 60, 60));
        pushButton_6->setStyleSheet(QString::fromUtf8(""));
        pushButton_6->setIconSize(QSize(60, 60));
        pushButton_6->setCheckable(true);
        widget_3 = new QWidget(frame);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setGeometry(QRect(88, 638, 131, 101));
        widget_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        pushButton_16 = new QPushButton(widget_3);
        pushButton_16->setObjectName(QString::fromUtf8("pushButton_16"));
        pushButton_16->setGeometry(QRect(0, 0, 131, 51));
        pushButton_16->setFont(font2);
        pushButton_16->setStyleSheet(QString::fromUtf8("QPushButton{border-style:none;background: rgb(50, 50, 50);color: rgb(210, 210, 210);}\n"
"QPushButton:hover{background: rgb(100, 100, 100);color: rgb(230, 230, 230);}"));
        pushButton_17 = new QPushButton(widget_3);
        pushButton_17->setObjectName(QString::fromUtf8("pushButton_17"));
        pushButton_17->setGeometry(QRect(0, 50, 131, 51));
        pushButton_17->setFont(font2);
        pushButton_17->setStyleSheet(QString::fromUtf8("QPushButton{border-style:none;background: rgb(50, 50, 50);color: rgb(210, 210, 210);}\n"
"QPushButton:hover{background: rgb(100, 100, 100);color: rgb(230, 230, 230);}"));
        label_5 = new QLabel(frame);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(8, 8, 81, 751));
        label_5->setStyleSheet(QString::fromUtf8("background-color: rgb(50, 50, 50);"));
        widget_2 = new QWidget(frame);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(328, 228, 373, 323));
        widget_2->setStyleSheet(QString::fromUtf8("background-color: rgb(248, 249, 255);"));
        pushButton_18 = new QPushButton(widget_2);
        pushButton_18->setObjectName(QString::fromUtf8("pushButton_18"));
        pushButton_18->setGeometry(QRect(280, 290, 16, 16));
        pushButton_18->setFont(font1);
        pushButton_18->setStyleSheet(QString::fromUtf8("QPushButton{border-style:none;background: rgb(89, 164, 222);color: rgb(255, 255, 255);}\n"
"QPushButton:hover{background:rgb(100, 178, 232);color: rgb(255, 255, 255);}"));
        pushButton_19 = new QPushButton(widget_2);
        pushButton_19->setObjectName(QString::fromUtf8("pushButton_19"));
        pushButton_19->setGeometry(QRect(337, 1, 35, 35));
        pushButton_19->setStyleSheet(QString::fromUtf8("QPushButton{background-color: rgb(238, 247, 255);border-image: url(:/image/close2.png);}\n"
"QPushButton:hover{background: rgb(205, 232, 250);}"));
        label_7 = new QLabel(widget_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(50, 150, 91, 31));
        QFont font5;
        font5.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font5.setPointSize(12);
        label_7->setFont(font5);
        label_7->setStyleSheet(QString::fromUtf8("background-color: rgb(238, 247, 255);"));
        label_34 = new QLabel(widget_2);
        label_34->setObjectName(QString::fromUtf8("label_34"));
        label_34->setGeometry(QRect(0, 0, 373, 323));
        label_34->setStyleSheet(QString::fromUtf8("border: 1px solid;\n"
"background-color: rgb(238, 247, 255);"));
        commandLinkButton = new QCommandLinkButton(widget_2);
        commandLinkButton->setObjectName(QString::fromUtf8("commandLinkButton"));
        commandLinkButton->setGeometry(QRect(280, 290, 20, 20));
        QFont font6;
        font6.setFamily(QString::fromUtf8("Segoe UI"));
        font6.setPointSize(10);
        font6.setBold(false);
        font6.setWeight(50);
        commandLinkButton->setFont(font6);
        commandLinkButton->setStyleSheet(QString::fromUtf8("QCommandLinkButton{background:rgb(220, 240, 255);border:none;}\n"
"QCommandLinkButton:hover{background:rgb(205, 232, 250);}"));
        label_6 = new QLabel(widget_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(150, 150, 181, 31));
        label_6->setFont(font1);
        label_6->setStyleSheet(QString::fromUtf8("background-color: rgb(238, 247, 255);"));
        label_34->raise();
        label_7->raise();
        pushButton_18->raise();
        pushButton_19->raise();
        commandLinkButton->raise();
        label_6->raise();
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(87, 8, 312, 41));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(225, 240, 250);"));
        pushButton_5 = new QPushButton(frame);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(937, 10, 34, 34));
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton{border-image: url(:/image/minimum2.png);background: rgb(238, 247, 255);}\n"
"QPushButton:hover{background:rgb(168, 220, 255);}\n"
"\n"
"\n"
""));
        pushButton_4 = new QPushButton(frame);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(975, 10, 34, 34));
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton{border-image: url(:/image/close2.png);background: rgb(238, 247, 255);}\n"
"QPushButton:hover{background: rgb(255, 80, 83);}"));
        label_5->raise();
        tabWidget->raise();
        pushButton_15->raise();
        label_2->raise();
        pushButton_6->raise();
        widget_3->raise();
        label->raise();
        pushButton_5->raise();
        pushButton_7->raise();
        pushButton_4->raise();
        widget_2->raise();
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(2);
        tabWidget_2->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Victor", nullptr));
        pushButton_7->setText(QString());
        label_12->setText(QString());
        label_13->setText(QString());
        lineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "\346\220\234\347\264\242", nullptr));
        label_3->setText(QString());
        pushButton_9->setText(QString());
        pushButton_10->setText(QString());
        pushButton_11->setText(QCoreApplication::translate("MainWindow", "\345\217\221\351\200\201", nullptr));
        pushButton_13->setText(QString());
        pushButton_14->setText(QString());
        label_16->setText(QCoreApplication::translate("MainWindow", "    \346\266\210\346\201\257\345\210\227\350\241\250", nullptr));
        pushButton_26->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QString());
        label_10->setText(QString());
        label_11->setText(QString());
        lineEdit_2->setPlaceholderText(QCoreApplication::translate("MainWindow", "\346\220\234\347\264\242", nullptr));
        pushButton_8->setText(QString());
        pushButton_20->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\345\245\275\345\217\213", nullptr));
        pushButton_21->setText(QCoreApplication::translate("MainWindow", "\345\210\233\345\273\272\347\276\244\350\201\212", nullptr));
        label_17->setText(QString());
        label_18->setText(QString());
        label_19->setText(QCoreApplication::translate("MainWindow", "             \351\252\214\350\257\201\346\266\210\346\201\257", nullptr));
        label_20->setText(QString());
        pushButton_22->setText(QString());
        label_21->setText(QString());
        label_22->setText(QCoreApplication::translate("MainWindow", " \346\230\265\347\247\260", nullptr));
        label_23->setText(QString());
        label_24->setText(QCoreApplication::translate("MainWindow", "\350\264\246\345\217\267", nullptr));
        label_25->setText(QCoreApplication::translate("MainWindow", "\347\224\237\346\227\245", nullptr));
        label_26->setText(QCoreApplication::translate("MainWindow", "\345\234\260\345\214\272", nullptr));
        pushButton_23->setText(QCoreApplication::translate("MainWindow", "\345\217\221\346\266\210\346\201\257", nullptr));
        label_27->setText(QString());
        label_28->setText(QString());
        label_29->setText(QString());
        label_30->setText(QCoreApplication::translate("MainWindow", "\350\264\246\345\217\267", nullptr));
        label_31->setText(QCoreApplication::translate("MainWindow", "\347\224\237\346\227\245", nullptr));
        label_32->setText(QCoreApplication::translate("MainWindow", "\345\234\260\345\235\200", nullptr));
        label_33->setText(QString());
        pushButton_24->setText(QString());
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_4), QCoreApplication::translate("MainWindow", "\345\245\275\345\217\213\345\210\227\350\241\250", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_5), QCoreApplication::translate("MainWindow", "\347\276\244\350\201\212\345\210\227\350\241\250", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QString());
        pushButton_2->setText(QString());
        label_8->setText(QString());
        pushButton->setText(QString());
        pushButton_3->setText(QString());
        label_9->setText(QString());
        pushButton_25->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QString());
        pushButton_15->setText(QString());
        label_2->setText(QString());
        pushButton_6->setText(QString());
        pushButton_16->setText(QCoreApplication::translate("MainWindow", " \345\205\263\344\272\216 ", nullptr));
        pushButton_17->setText(QCoreApplication::translate("MainWindow", " \351\200\200\345\207\272\347\231\273\345\275\225", nullptr));
        label_5->setText(QString());
        pushButton_18->setText(QString());
        pushButton_19->setText(QString());
        label_7->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p> \346\204\217\350\247\201\345\217\215\351\246\210\357\274\232</p><p><br/></p></body></html>", nullptr));
        label_34->setText(QString());
        commandLinkButton->setText(QCoreApplication::translate("MainWindow", "\345\205\263\344\272\216\345\274\200\345\217\221\350\200\205", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "walter_chen.cc@foxmail.com", nullptr));
        label->setText(QString());
        pushButton_5->setText(QString());
        pushButton_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
