/********************************************************************************
** Form generated from reading UI file 'newFriend.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWFRIEND_H
#define UI_NEWFRIEND_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>
#include <tabwidget.h>

QT_BEGIN_NAMESPACE

class Ui_addfrd
{
public:
    QFrame *frame;
    tabwidget *tabWidget;
    QWidget *tab;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QPushButton *pushButton_5;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_16;
    QLineEdit *lineEdit;
    QPushButton *pushButton_3;
    QLabel *label_17;
    QComboBox *comboBox;
    QLabel *label_18;
    QWidget *widget;
    QPushButton *pushButton_12;
    QWidget *widget_2;
    QLabel *label_19;
    QPushButton *pushButton_13;
    QLabel *label_20;
    QPushButton *pushButton_6;
    QLabel *label_45;
    QWidget *widget_3;
    QLabel *label_21;
    QPushButton *pushButton_14;
    QLabel *label_22;
    QPushButton *pushButton_7;
    QLabel *label_46;
    QWidget *widget_4;
    QLabel *label_23;
    QPushButton *pushButton_15;
    QLabel *label_24;
    QPushButton *pushButton_8;
    QLabel *label_47;
    QWidget *widget_5;
    QLabel *label_25;
    QPushButton *pushButton_16;
    QLabel *label_26;
    QPushButton *pushButton_9;
    QLabel *label_48;
    QWidget *widget_6;
    QLabel *label_29;
    QPushButton *pushButton_18;
    QLabel *label_30;
    QPushButton *pushButton_11;
    QLabel *label_49;
    QWidget *widget_7;
    QLabel *label_31;
    QPushButton *pushButton_19;
    QLabel *label_32;
    QPushButton *pushButton_20;
    QLabel *label_50;
    QPushButton *pushButton_21;
    QPushButton *pushButton_22;
    QWidget *widget_8;
    QLabel *label_27;
    QTextEdit *textEdit;
    QPushButton *pushButton_10;
    QPushButton *pushButton_17;
    QLabel *label_28;
    QLabel *label_36;
    QLabel *label_37;
    QLabel *label_38;
    QLabel *label_44;
    QLabel *label_51;
    QWidget *widget_9;
    QPushButton *pushButton_23;
    QLabel *label_33;
    QTextEdit *textEdit_2;
    QLineEdit *lineEdit_3;
    QLabel *label_34;
    QLabel *label_35;
    QPushButton *pushButton_24;
    QLabel *label_39;
    QLabel *label_40;
    QLabel *label_41;
    QLabel *label_42;
    QLabel *label_43;
    QLabel *label_52;
    QWidget *tab_2;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton_4;
    QLabel *label;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QLabel *label_2;
    QLabel *label_15;

    void setupUi(QDialog *addfrd)
    {
        if (addfrd->objectName().isEmpty())
            addfrd->setObjectName(QString::fromUtf8("addfrd"));
        addfrd->resize(750, 443);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/image/victoricon2.png"), QSize(), QIcon::Normal, QIcon::Off);
        addfrd->setWindowIcon(icon);
        frame = new QFrame(addfrd);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 750, 443));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        tabWidget = new tabwidget(frame);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(7, 49, 736, 386));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(10);
        tabWidget->setFont(font);
        tabWidget->setStyleSheet(QString::fromUtf8("QTabBar::tab:selected { color:white;background: rgb(89, 164, 222); }\n"
"QTabBar::tab{ color:white; background: rgb(50, 50, 50); }\n"
"background-color: rgb(242, 249, 255);"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        label_3 = new QLabel(tab);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(0, 80, 641, 301));
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_4 = new QLabel(tab);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(370, 130, 31, 31));
        label_4->setStyleSheet(QString::fromUtf8("border-image: url(:/image/id.png);"));
        label_5 = new QLabel(tab);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(370, 190, 31, 31));
        label_5->setStyleSheet(QString::fromUtf8("border-image: url(:/image/yonghu2.png);"));
        label_6 = new QLabel(tab);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(365, 245, 41, 41));
        label_6->setStyleSheet(QString::fromUtf8("border-image: url(:/image/riqi.png);"));
        label_7 = new QLabel(tab);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(370, 310, 31, 31));
        label_7->setStyleSheet(QString::fromUtf8("border-image: url(:/image/dizhi.png);"));
        label_8 = new QLabel(tab);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(420, 130, 161, 31));
        label_8->setFont(font);
        label_9 = new QLabel(tab);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(420, 190, 151, 31));
        label_9->setFont(font);
        label_10 = new QLabel(tab);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(420, 250, 161, 31));
        label_10->setFont(font);
        label_11 = new QLabel(tab);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(420, 310, 161, 31));
        label_11->setFont(font);
        pushButton_5 = new QPushButton(tab);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(90, 310, 121, 41));
        pushButton_5->setFont(font);
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton{border-style:none;background: rgb(89, 164, 222);color: rgb(255, 255, 255);}\n"
"QPushButton:hover{background:rgb(100, 178, 232);color: rgb(255, 255, 255);}"));
        label_12 = new QLabel(tab);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(90, 120, 121, 121));
        label_12->setStyleSheet(QString::fromUtf8("background-color: rgb(230, 255, 250);"));
        label_13 = new QLabel(tab);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(60, 250, 181, 41));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(18);
        font1.setBold(true);
        font1.setWeight(75);
        label_13->setFont(font1);
        label_13->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_13->setAlignment(Qt::AlignCenter);
        label_16 = new QLabel(tab);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(0, 79, 301, 301));
        label_16->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-image: url(:/image/background.jpg);"));
        lineEdit = new QLineEdit(tab);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(120, 20, 371, 31));
        lineEdit->setFont(font);
        lineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 249, 255);"));
        pushButton_3 = new QPushButton(tab);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(500, 20, 111, 31));
        pushButton_3->setFont(font);
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton{border-style:none;background: rgb(89, 164, 222);color: rgb(255, 255, 255);}\n"
"QPushButton:hover{background:rgb(100, 178, 232);color: rgb(255, 255, 255);}"));
        label_17 = new QLabel(tab);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(0, 0, 642, 81));
        label_17->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 249, 255);"));
        comboBox = new QComboBox(tab);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(30, 20, 81, 31));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font2.setPointSize(10);
        font2.setBold(false);
        font2.setWeight(50);
        comboBox->setFont(font2);
        comboBox->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 249, 255);\n"
"color: rgb(64, 64, 64);"));
        label_18 = new QLabel(tab);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(150, 200, 341, 31));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        label_18->setFont(font3);
        widget = new QWidget(tab);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(-1, 79, 641, 301));
        widget->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 249, 255);"));
        pushButton_12 = new QPushButton(widget);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));
        pushButton_12->setGeometry(QRect(570, 265, 71, 31));
        pushButton_12->setFont(font3);
        pushButton_12->setStyleSheet(QString::fromUtf8("QPushButton{border-style:none;background: rgb(50, 50, 50);color: rgb(255, 255, 255);}\n"
"QPushButton:hover{background:rgb(90, 90, 90);color: rgb(255, 255, 255);}"));
        widget_2 = new QWidget(widget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(0, 0, 211, 121));
        widget_2->setStyleSheet(QString::fromUtf8("background-color: rgb(232, 245, 255);"));
        label_19 = new QLabel(widget_2);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(85, 15, 121, 21));
        label_19->setFont(font);
        label_19->setAlignment(Qt::AlignCenter);
        pushButton_13 = new QPushButton(widget_2);
        pushButton_13->setObjectName(QString::fromUtf8("pushButton_13"));
        pushButton_13->setGeometry(QRect(180, 90, 31, 31));
        pushButton_13->setFont(font3);
        pushButton_13->setStyleSheet(QString::fromUtf8("QPushButton{background: rgb(89, 164, 222);\n"
"border-image: url(:/image/tianjia2.png);}\n"
"QPushButton:hover{background: rgb(100, 175, 232);}"));
        label_20 = new QLabel(widget_2);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(30, 90, 121, 21));
        label_20->setFont(font3);
        label_20->setAlignment(Qt::AlignCenter);
        pushButton_6 = new QPushButton(widget_2);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(85, 35, 121, 51));
        QFont font4;
        font4.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font4.setPointSize(11);
        pushButton_6->setFont(font4);
        pushButton_6->setStyleSheet(QString::fromUtf8("QPushButton{background:transparent;color:rgb(10,10,10);}\n"
"QPushButton:hover{background:transparent;color: rgb(100, 100, 100);}"));
        label_45 = new QLabel(widget_2);
        label_45->setObjectName(QString::fromUtf8("label_45"));
        label_45->setGeometry(QRect(7, 10, 72, 72));
        label_45->setStyleSheet(QString::fromUtf8(""));
        widget_3 = new QWidget(widget);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setGeometry(QRect(215, 0, 211, 121));
        widget_3->setStyleSheet(QString::fromUtf8("background-color: rgb(232, 245, 255);"));
        label_21 = new QLabel(widget_3);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(85, 15, 121, 21));
        label_21->setFont(font);
        label_21->setAlignment(Qt::AlignCenter);
        pushButton_14 = new QPushButton(widget_3);
        pushButton_14->setObjectName(QString::fromUtf8("pushButton_14"));
        pushButton_14->setGeometry(QRect(180, 90, 31, 31));
        pushButton_14->setFont(font3);
        pushButton_14->setStyleSheet(QString::fromUtf8("QPushButton{background: rgb(89, 164, 222);\n"
"border-image: url(:/image/tianjia2.png);}\n"
"QPushButton:hover{background: rgb(100, 175, 232);}"));
        label_22 = new QLabel(widget_3);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(30, 90, 121, 21));
        label_22->setFont(font3);
        label_22->setAlignment(Qt::AlignCenter);
        pushButton_7 = new QPushButton(widget_3);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(85, 35, 121, 51));
        pushButton_7->setFont(font4);
        pushButton_7->setStyleSheet(QString::fromUtf8("QPushButton{background:transparent;color:rgb(10,10,10);}\n"
"QPushButton:hover{background:transparent;color: rgb(100, 100, 100);}"));
        label_46 = new QLabel(widget_3);
        label_46->setObjectName(QString::fromUtf8("label_46"));
        label_46->setGeometry(QRect(7, 10, 72, 72));
        widget_4 = new QWidget(widget);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        widget_4->setGeometry(QRect(430, 0, 211, 121));
        widget_4->setStyleSheet(QString::fromUtf8("background-color: rgb(232, 245, 255);"));
        label_23 = new QLabel(widget_4);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setGeometry(QRect(85, 15, 121, 21));
        label_23->setFont(font);
        label_23->setAlignment(Qt::AlignCenter);
        pushButton_15 = new QPushButton(widget_4);
        pushButton_15->setObjectName(QString::fromUtf8("pushButton_15"));
        pushButton_15->setGeometry(QRect(180, 90, 31, 31));
        pushButton_15->setFont(font3);
        pushButton_15->setStyleSheet(QString::fromUtf8("QPushButton{background: rgb(89, 164, 222);\n"
"border-image: url(:/image/tianjia2.png);}\n"
"QPushButton:hover{background: rgb(100, 175, 232);}"));
        label_24 = new QLabel(widget_4);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setGeometry(QRect(30, 90, 121, 21));
        label_24->setFont(font3);
        label_24->setAlignment(Qt::AlignCenter);
        pushButton_8 = new QPushButton(widget_4);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(85, 35, 121, 51));
        pushButton_8->setFont(font4);
        pushButton_8->setStyleSheet(QString::fromUtf8("QPushButton{background:transparent;color:rgb(10,10,10);}\n"
"QPushButton:hover{background:transparent;color: rgb(100, 100, 100);}"));
        label_47 = new QLabel(widget_4);
        label_47->setObjectName(QString::fromUtf8("label_47"));
        label_47->setGeometry(QRect(7, 10, 72, 72));
        widget_5 = new QWidget(widget);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        widget_5->setGeometry(QRect(0, 125, 211, 121));
        widget_5->setStyleSheet(QString::fromUtf8("background-color: rgb(232, 245, 255);"));
        label_25 = new QLabel(widget_5);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setGeometry(QRect(85, 15, 121, 21));
        label_25->setFont(font);
        label_25->setAlignment(Qt::AlignCenter);
        pushButton_16 = new QPushButton(widget_5);
        pushButton_16->setObjectName(QString::fromUtf8("pushButton_16"));
        pushButton_16->setGeometry(QRect(180, 90, 31, 31));
        pushButton_16->setFont(font3);
        pushButton_16->setStyleSheet(QString::fromUtf8("QPushButton{background: rgb(89, 164, 222);\n"
"border-image: url(:/image/tianjia2.png);}\n"
"QPushButton:hover{background: rgb(100, 175, 232);}"));
        label_26 = new QLabel(widget_5);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setGeometry(QRect(30, 90, 121, 21));
        label_26->setFont(font3);
        label_26->setAlignment(Qt::AlignCenter);
        pushButton_9 = new QPushButton(widget_5);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(85, 35, 121, 51));
        pushButton_9->setFont(font4);
        pushButton_9->setStyleSheet(QString::fromUtf8("QPushButton{background:transparent;color:rgb(10,10,10);}\n"
"QPushButton:hover{background:transparent;color: rgb(100, 100, 100);}"));
        label_48 = new QLabel(widget_5);
        label_48->setObjectName(QString::fromUtf8("label_48"));
        label_48->setGeometry(QRect(7, 10, 72, 72));
        widget_6 = new QWidget(widget);
        widget_6->setObjectName(QString::fromUtf8("widget_6"));
        widget_6->setGeometry(QRect(215, 125, 211, 121));
        widget_6->setStyleSheet(QString::fromUtf8("background-color: rgb(232, 245, 255);"));
        label_29 = new QLabel(widget_6);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        label_29->setGeometry(QRect(85, 15, 121, 21));
        label_29->setFont(font);
        label_29->setAlignment(Qt::AlignCenter);
        pushButton_18 = new QPushButton(widget_6);
        pushButton_18->setObjectName(QString::fromUtf8("pushButton_18"));
        pushButton_18->setGeometry(QRect(180, 90, 31, 31));
        pushButton_18->setFont(font3);
        pushButton_18->setStyleSheet(QString::fromUtf8("QPushButton{background: rgb(89, 164, 222);\n"
"border-image: url(:/image/tianjia2.png);}\n"
"QPushButton:hover{background: rgb(100, 175, 232);}"));
        label_30 = new QLabel(widget_6);
        label_30->setObjectName(QString::fromUtf8("label_30"));
        label_30->setGeometry(QRect(30, 90, 121, 21));
        label_30->setFont(font3);
        label_30->setAlignment(Qt::AlignCenter);
        pushButton_11 = new QPushButton(widget_6);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));
        pushButton_11->setGeometry(QRect(85, 35, 121, 51));
        pushButton_11->setFont(font4);
        pushButton_11->setStyleSheet(QString::fromUtf8("QPushButton{background:transparent;color:rgb(10,10,10);}\n"
"QPushButton:hover{background:transparent;color: rgb(100, 100, 100);}"));
        label_49 = new QLabel(widget_6);
        label_49->setObjectName(QString::fromUtf8("label_49"));
        label_49->setGeometry(QRect(7, 10, 72, 72));
        widget_7 = new QWidget(widget);
        widget_7->setObjectName(QString::fromUtf8("widget_7"));
        widget_7->setGeometry(QRect(430, 125, 211, 121));
        widget_7->setStyleSheet(QString::fromUtf8("background-color: rgb(232, 245, 255);"));
        label_31 = new QLabel(widget_7);
        label_31->setObjectName(QString::fromUtf8("label_31"));
        label_31->setGeometry(QRect(85, 15, 121, 21));
        label_31->setFont(font);
        label_31->setAlignment(Qt::AlignCenter);
        pushButton_19 = new QPushButton(widget_7);
        pushButton_19->setObjectName(QString::fromUtf8("pushButton_19"));
        pushButton_19->setGeometry(QRect(180, 90, 31, 31));
        pushButton_19->setFont(font3);
        pushButton_19->setStyleSheet(QString::fromUtf8("QPushButton{background: rgb(89, 164, 222);\n"
"border-image: url(:/image/tianjia2.png);}\n"
"QPushButton:hover{background: rgb(100, 175, 232);}"));
        label_32 = new QLabel(widget_7);
        label_32->setObjectName(QString::fromUtf8("label_32"));
        label_32->setGeometry(QRect(30, 90, 121, 21));
        label_32->setFont(font3);
        label_32->setAlignment(Qt::AlignCenter);
        pushButton_20 = new QPushButton(widget_7);
        pushButton_20->setObjectName(QString::fromUtf8("pushButton_20"));
        pushButton_20->setGeometry(QRect(85, 35, 121, 51));
        pushButton_20->setFont(font4);
        pushButton_20->setStyleSheet(QString::fromUtf8("QPushButton{background:transparent;color:rgb(10,10,10);}\n"
"QPushButton:hover{background:transparent;color: rgb(100, 100, 100);}"));
        label_50 = new QLabel(widget_7);
        label_50->setObjectName(QString::fromUtf8("label_50"));
        label_50->setGeometry(QRect(7, 10, 72, 72));
        pushButton_21 = new QPushButton(widget);
        pushButton_21->setObjectName(QString::fromUtf8("pushButton_21"));
        pushButton_21->setGeometry(QRect(490, 265, 71, 31));
        pushButton_21->setFont(font3);
        pushButton_21->setStyleSheet(QString::fromUtf8("QPushButton{border-style:none;background: rgb(50, 50, 50);color: rgb(255, 255, 255);}\n"
"QPushButton:hover{background:rgb(90, 90, 90);color: rgb(255, 255, 255);}"));
        widget_2->raise();
        pushButton_12->raise();
        widget_3->raise();
        widget_4->raise();
        widget_5->raise();
        widget_6->raise();
        widget_7->raise();
        pushButton_21->raise();
        pushButton_22 = new QPushButton(tab);
        pushButton_22->setObjectName(QString::fromUtf8("pushButton_22"));
        pushButton_22->setGeometry(QRect(605, 345, 31, 31));
        pushButton_22->setStyleSheet(QString::fromUtf8("border-image: url(:/image/fanhui.png);\n"
"background: rgb(89, 164, 222);"));
        widget_8 = new QWidget(tab);
        widget_8->setObjectName(QString::fromUtf8("widget_8"));
        widget_8->setGeometry(QRect(60, 20, 451, 301));
        widget_8->setFont(font);
        widget_8->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 249, 255);"));
        label_27 = new QLabel(widget_8);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setGeometry(QRect(60, 80, 71, 21));
        label_27->setFont(font);
        textEdit = new QTextEdit(widget_8);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(60, 110, 331, 81));
        textEdit->setFont(font);
        textEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 249, 255);"));
        pushButton_10 = new QPushButton(widget_8);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        pushButton_10->setGeometry(QRect(170, 235, 111, 31));
        QFont font5;
        font5.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font5.setPointSize(9);
        pushButton_10->setFont(font5);
        pushButton_10->setStyleSheet(QString::fromUtf8("QPushButton{border-style:none;background: rgb(89, 164, 222);color: rgb(255, 255, 255);}\n"
"QPushButton:hover{background:rgb(100, 178, 232);color: rgb(255, 255, 255);}"));
        pushButton_17 = new QPushButton(widget_8);
        pushButton_17->setObjectName(QString::fromUtf8("pushButton_17"));
        pushButton_17->setGeometry(QRect(419, 1, 31, 31));
        pushButton_17->setStyleSheet(QString::fromUtf8("QPushButton{border-image: url(:/image/close.png);background: rgb(58, 58, 58);}\n"
"QPushButton:hover{background: rgb(100, 100, 100);}"));
        label_28 = new QLabel(widget_8);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setGeometry(QRect(0, 0, 451, 301));
        label_28->setStyleSheet(QString::fromUtf8("border:1px solid;"));
        label_36 = new QLabel(widget_8);
        label_36->setObjectName(QString::fromUtf8("label_36"));
        label_36->setGeometry(QRect(10, 8, 72, 15));
        label_36->setFont(font3);
        label_36->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(58, 58, 58);"));
        label_37 = new QLabel(widget_8);
        label_37->setObjectName(QString::fromUtf8("label_37"));
        label_37->setGeometry(QRect(75, 6, 81, 16));
        label_37->setFont(font3);
        label_37->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(58, 58, 58);"));
        label_38 = new QLabel(widget_8);
        label_38->setObjectName(QString::fromUtf8("label_38"));
        label_38->setGeometry(QRect(160, 8, 72, 15));
        label_38->setFont(font3);
        label_38->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(58, 58, 58);"));
        label_44 = new QLabel(widget_8);
        label_44->setObjectName(QString::fromUtf8("label_44"));
        label_44->setGeometry(QRect(30, 240, 72, 15));
        label_51 = new QLabel(widget_8);
        label_51->setObjectName(QString::fromUtf8("label_51"));
        label_51->setGeometry(QRect(0, 1, 451, 31));
        label_51->setStyleSheet(QString::fromUtf8("background-color: rgb(58, 58, 58);"));
        label_28->raise();
        label_51->raise();
        label_27->raise();
        textEdit->raise();
        pushButton_10->raise();
        pushButton_17->raise();
        label_36->raise();
        label_37->raise();
        label_38->raise();
        label_44->raise();
        widget_9 = new QWidget(tab);
        widget_9->setObjectName(QString::fromUtf8("widget_9"));
        widget_9->setGeometry(QRect(60, 20, 451, 301));
        widget_9->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 249, 255);"));
        pushButton_23 = new QPushButton(widget_9);
        pushButton_23->setObjectName(QString::fromUtf8("pushButton_23"));
        pushButton_23->setGeometry(QRect(419, 1, 31, 31));
        pushButton_23->setStyleSheet(QString::fromUtf8("QPushButton{border-image: url(:/image/close.png);background: rgb(60, 60, 60);}\n"
"QPushButton:hover{background: rgb(100, 100, 100);}"));
        label_33 = new QLabel(widget_9);
        label_33->setObjectName(QString::fromUtf8("label_33"));
        label_33->setGeometry(QRect(0, 0, 451, 301));
        label_33->setStyleSheet(QString::fromUtf8("border:1px solid;"));
        textEdit_2 = new QTextEdit(widget_9);
        textEdit_2->setObjectName(QString::fromUtf8("textEdit_2"));
        textEdit_2->setGeometry(QRect(145, 75, 231, 71));
        textEdit_2->setFont(font);
        textEdit_2->setStyleSheet(QString::fromUtf8(""));
        textEdit_2->setTextInteractionFlags(Qt::NoTextInteraction);
        lineEdit_3 = new QLineEdit(widget_9);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(145, 175, 231, 31));
        lineEdit_3->setFont(font);
        label_34 = new QLabel(widget_9);
        label_34->setObjectName(QString::fromUtf8("label_34"));
        label_34->setGeometry(QRect(65, 80, 71, 20));
        label_34->setFont(font);
        label_35 = new QLabel(widget_9);
        label_35->setObjectName(QString::fromUtf8("label_35"));
        label_35->setGeometry(QRect(65, 180, 71, 21));
        label_35->setFont(font);
        pushButton_24 = new QPushButton(widget_9);
        pushButton_24->setObjectName(QString::fromUtf8("pushButton_24"));
        pushButton_24->setGeometry(QRect(180, 240, 93, 31));
        pushButton_24->setFont(font3);
        pushButton_24->setStyleSheet(QString::fromUtf8("QPushButton{border-style:none;background: rgb(89, 164, 222);color: rgb(255, 255, 255);}\n"
"QPushButton:hover{background:rgb(100, 178, 232);color: rgb(255, 255, 255);}"));
        label_39 = new QLabel(widget_9);
        label_39->setObjectName(QString::fromUtf8("label_39"));
        label_39->setGeometry(QRect(10, 8, 72, 15));
        label_39->setFont(font3);
        label_39->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(59, 59, 59);"));
        label_40 = new QLabel(widget_9);
        label_40->setObjectName(QString::fromUtf8("label_40"));
        label_40->setGeometry(QRect(75, 6, 81, 16));
        label_40->setFont(font3);
        label_40->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(59, 59, 59);"));
        label_41 = new QLabel(widget_9);
        label_41->setObjectName(QString::fromUtf8("label_41"));
        label_41->setGeometry(QRect(160, 8, 72, 15));
        label_41->setFont(font3);
        label_41->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(59, 59, 59);"));
        label_42 = new QLabel(widget_9);
        label_42->setObjectName(QString::fromUtf8("label_42"));
        label_42->setGeometry(QRect(30, 200, 72, 15));
        label_42->setStyleSheet(QString::fromUtf8("background:transparent;"));
        label_43 = new QLabel(widget_9);
        label_43->setObjectName(QString::fromUtf8("label_43"));
        label_43->setGeometry(QRect(270, 200, 72, 15));
        label_43->setStyleSheet(QString::fromUtf8("background:transparent;"));
        label_52 = new QLabel(widget_9);
        label_52->setObjectName(QString::fromUtf8("label_52"));
        label_52->setGeometry(QRect(0, 1, 451, 31));
        label_52->setStyleSheet(QString::fromUtf8("background-color: rgb(58, 58, 58);"));
        label_33->raise();
        label_52->raise();
        pushButton_23->raise();
        textEdit_2->raise();
        lineEdit_3->raise();
        label_34->raise();
        label_35->raise();
        pushButton_24->raise();
        label_39->raise();
        label_40->raise();
        label_41->raise();
        label_42->raise();
        label_43->raise();
        tabWidget->addTab(tab, QString());
        label_3->raise();
        label_18->raise();
        label_17->raise();
        label_4->raise();
        label_5->raise();
        label_6->raise();
        label_7->raise();
        label_8->raise();
        label_9->raise();
        label_10->raise();
        label_11->raise();
        label_16->raise();
        label_13->raise();
        label_12->raise();
        pushButton_5->raise();
        lineEdit->raise();
        pushButton_3->raise();
        comboBox->raise();
        pushButton_22->raise();
        widget->raise();
        widget_9->raise();
        widget_8->raise();
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tab_2->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 249, 255);"));
        lineEdit_2 = new QLineEdit(tab_2);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(70, 80, 371, 31));
        lineEdit_2->setFont(font);
        pushButton_4 = new QPushButton(tab_2);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(450, 80, 111, 31));
        pushButton_4->setFont(font);
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton{border-style:none;background: rgb(89, 164, 222);color: rgb(255, 255, 255);}\n"
"QPushButton:hover{background:rgb(100, 178, 232);color: rgb(255, 255, 255);}"));
        tabWidget->addTab(tab_2, QString());
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(7, 7, 736, 42));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(52, 52, 52);"));
        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(668, 10, 34, 34));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton{border-image: url(:/image/minimum.png);background: rgb(50, 50, 50);}\n"
"QPushButton:hover{background:rgb(90, 90, 90);}"));
        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(703, 10, 34, 34));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{border-image: url(:/image/close.png);background: rgb(50, 50, 50);}\n"
"QPushButton:hover{background:rgb(208, 0, 0);}"));
        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(7, 7, 646, 428));
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(247, 252, 255);"));
        label_15 = new QLabel(frame);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(23, 16, 41, 21));
        label_15->setFont(font);
        label_15->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_2->raise();
        tabWidget->raise();
        label->raise();
        pushButton_2->raise();
        pushButton->raise();
        label_15->raise();

        retranslateUi(addfrd);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(addfrd);
    } // setupUi

    void retranslateUi(QDialog *addfrd)
    {
        addfrd->setWindowTitle(QCoreApplication::translate("addfrd", " \346\237\245\346\211\276", nullptr));
        label_3->setText(QString());
        label_4->setText(QString());
        label_5->setText(QString());
        label_6->setText(QString());
        label_7->setText(QString());
        label_8->setText(QCoreApplication::translate("addfrd", "TextLabel", nullptr));
        label_9->setText(QCoreApplication::translate("addfrd", "TextLabel", nullptr));
        label_10->setText(QCoreApplication::translate("addfrd", "TextLabel", nullptr));
        label_11->setText(QCoreApplication::translate("addfrd", "TextLabel", nullptr));
        pushButton_5->setText(QCoreApplication::translate("addfrd", "\345\212\240\344\270\272\345\245\275\345\217\213", nullptr));
        label_12->setText(QString());
        label_13->setText(QCoreApplication::translate("addfrd", "1", nullptr));
        label_16->setText(QString());
        lineEdit->setPlaceholderText(QString());
        pushButton_3->setText(QCoreApplication::translate("addfrd", "\346\237\245\346\211\276", nullptr));
        label_17->setText(QString());
        comboBox->setItemText(0, QCoreApplication::translate("addfrd", "\350\264\246\345\217\267", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("addfrd", "\346\230\265\347\247\260", nullptr));

        label_18->setText(QCoreApplication::translate("addfrd", "\346\262\241\346\234\211\346\237\245\346\211\276\345\210\260\347\254\246\345\220\210\346\235\241\344\273\266\347\232\204\347\224\250\346\210\267\346\210\226\350\200\205\346\230\257\345\257\271\346\226\271\350\256\276\347\275\256\344\272\206\346\235\203\351\231\220", nullptr));
        pushButton_12->setText(QCoreApplication::translate("addfrd", "\344\270\213\344\270\200\351\241\265", nullptr));
        label_19->setText(QCoreApplication::translate("addfrd", "TextLabel", nullptr));
        pushButton_13->setText(QString());
        label_20->setText(QCoreApplication::translate("addfrd", "TextLabel", nullptr));
        pushButton_6->setText(QCoreApplication::translate("addfrd", "PushButton", nullptr));
        label_45->setText(QString());
        label_21->setText(QCoreApplication::translate("addfrd", "TextLabel", nullptr));
        pushButton_14->setText(QString());
        label_22->setText(QCoreApplication::translate("addfrd", "TextLabel", nullptr));
        pushButton_7->setText(QCoreApplication::translate("addfrd", "PushButton", nullptr));
        label_46->setText(QString());
        label_23->setText(QCoreApplication::translate("addfrd", "TextLabel", nullptr));
        pushButton_15->setText(QString());
        label_24->setText(QCoreApplication::translate("addfrd", "TextLabel", nullptr));
        pushButton_8->setText(QCoreApplication::translate("addfrd", "PushButton", nullptr));
        label_47->setText(QString());
        label_25->setText(QCoreApplication::translate("addfrd", "TextLabel", nullptr));
        pushButton_16->setText(QString());
        label_26->setText(QCoreApplication::translate("addfrd", "TextLabel", nullptr));
        pushButton_9->setText(QCoreApplication::translate("addfrd", "PushButton", nullptr));
        label_48->setText(QString());
        label_29->setText(QCoreApplication::translate("addfrd", "TextLabel", nullptr));
        pushButton_18->setText(QString());
        label_30->setText(QCoreApplication::translate("addfrd", "TextLabel", nullptr));
        pushButton_11->setText(QCoreApplication::translate("addfrd", "PushButton", nullptr));
        label_49->setText(QString());
        label_31->setText(QCoreApplication::translate("addfrd", "TextLabel", nullptr));
        pushButton_19->setText(QString());
        label_32->setText(QCoreApplication::translate("addfrd", "TextLabel", nullptr));
        pushButton_20->setText(QCoreApplication::translate("addfrd", "PushButton", nullptr));
        label_50->setText(QString());
        pushButton_21->setText(QCoreApplication::translate("addfrd", "\344\270\212\344\270\200\351\241\265", nullptr));
        pushButton_22->setText(QString());
        label_27->setText(QCoreApplication::translate("addfrd", "\351\252\214\350\257\201\346\266\210\346\201\257", nullptr));
        textEdit->setPlaceholderText(QCoreApplication::translate("addfrd", "\350\257\264\346\230\216\344\275\240\347\232\204\350\272\253\344\273\275\346\233\264\345\256\271\346\230\223\346\267\273\345\212\240\346\210\220\345\212\237", nullptr));
        pushButton_10->setText(QCoreApplication::translate("addfrd", "\347\241\256\350\256\244", nullptr));
        pushButton_17->setText(QString());
        label_28->setText(QString());
        label_36->setText(QCoreApplication::translate("addfrd", "\346\255\243\345\234\250\346\267\273\345\212\240", nullptr));
        label_37->setText(QCoreApplication::translate("addfrd", "TextLabel", nullptr));
        label_38->setText(QCoreApplication::translate("addfrd", "\344\270\272\345\245\275\345\217\213", nullptr));
        label_44->setText(QCoreApplication::translate("addfrd", "TextLabel", nullptr));
        label_51->setText(QCoreApplication::translate("addfrd", "TextLabel", nullptr));
        pushButton_23->setText(QString());
        label_33->setText(QString());
        label_34->setText(QCoreApplication::translate("addfrd", "\351\252\214\350\257\201\351\227\256\351\242\230", nullptr));
        label_35->setText(QCoreApplication::translate("addfrd", "\344\275\240\347\232\204\347\255\224\346\241\210", nullptr));
        pushButton_24->setText(QCoreApplication::translate("addfrd", "\347\241\256\345\256\232", nullptr));
        label_39->setText(QCoreApplication::translate("addfrd", "\346\255\243\345\234\250\346\267\273\345\212\240", nullptr));
        label_40->setText(QCoreApplication::translate("addfrd", "TextLabel", nullptr));
        label_41->setText(QCoreApplication::translate("addfrd", "\344\270\272\345\245\275\345\217\213", nullptr));
        label_42->setText(QCoreApplication::translate("addfrd", "TextLabel", nullptr));
        label_43->setText(QCoreApplication::translate("addfrd", "TextLabel", nullptr));
        label_52->setText(QCoreApplication::translate("addfrd", "TextLabel", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("addfrd", "\346\237\245\346\211\276\345\245\275\345\217\213", nullptr));
        lineEdit_2->setPlaceholderText(QCoreApplication::translate("addfrd", "\347\276\244\350\201\212\345\217\267", nullptr));
        pushButton_4->setText(QCoreApplication::translate("addfrd", "\346\237\245\346\211\276", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("addfrd", "\346\237\245\346\211\276\347\276\244\350\201\212", nullptr));
        label->setText(QString());
        pushButton_2->setText(QString());
        pushButton->setText(QString());
        label_2->setText(QString());
        label_15->setText(QCoreApplication::translate("addfrd", "\346\237\245\346\211\276", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addfrd: public Ui_addfrd {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWFRIEND_H
