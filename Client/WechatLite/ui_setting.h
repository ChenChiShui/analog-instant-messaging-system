/********************************************************************************
** Form generated from reading UI file 'setting.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTING_H
#define UI_SETTING_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include <tabwidget.h>

QT_BEGIN_NAMESPACE

class Ui_setting
{
public:
    QFrame *frame;
    tabwidget *tabWidget;
    QWidget *tab;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *lineEdit;
    QWidget *tab_2;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QCheckBox *checkBox;
    QLabel *label_9;
    QPushButton *pushButton_3;
    QLabel *label_10;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QLabel *label_11;
    QLabel *label_12;
    QWidget *tab_3;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QLabel *label_17;
    QCheckBox *checkBox_2;
    QLabel *label_18;
    QCheckBox *checkBox_3;
    QLabel *label_19;
    QCheckBox *checkBox_4;
    QCheckBox *checkBox_5;
    QCheckBox *checkBox_6;
    QWidget *widget;
    QLabel *label_20;
    QLabel *label_21;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_2;
    QComboBox *comboBox;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QDialog *setting)
    {
        if (setting->objectName().isEmpty())
            setting->setObjectName(QString::fromUtf8("setting"));
        setting->resize(700, 520);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/image/victoricon2.png"), QSize(), QIcon::Normal, QIcon::Off);
        setting->setWindowIcon(icon);
        frame = new QFrame(setting);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 700, 520));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        tabWidget = new tabwidget(frame);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(7, 50, 685, 463));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(11);
        font.setBold(false);
        font.setWeight(50);
        tabWidget->setFont(font);
        tabWidget->setStyleSheet(QString::fromUtf8("QTabBar::tab:selected { color:white;background: rgb(89, 164, 222); }\n"
"QTabBar::tab{ color:white; background: rgb(50, 50, 50); }"));
        tabWidget->setTabPosition(QTabWidget::West);
        tabWidget->setTabBarAutoHide(false);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        label_4 = new QLabel(tab);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(0, 0, 651, 461));
        label_4->setStyleSheet(QString::fromUtf8("background-color: rgb(238, 247, 255);"));
        label_5 = new QLabel(tab);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(60, 90, 81, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(10);
        label_5->setFont(font1);
        lineEdit = new QLineEdit(tab);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(150, 90, 351, 31));
        lineEdit->setFont(font1);
        lineEdit->setReadOnly(true);
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        label_6 = new QLabel(tab_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(0, 0, 651, 461));
        label_6->setStyleSheet(QString::fromUtf8("background-color: rgb(238, 247, 255);"));
        label_7 = new QLabel(tab_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(60, 50, 51, 31));
        label_7->setFont(font1);
        label_8 = new QLabel(tab_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(230, 53, 281, 31));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font2.setPointSize(9);
        label_8->setFont(font2);
        label_8->setStyleSheet(QString::fromUtf8("color: rgb(120, 120, 120);"));
        checkBox = new QCheckBox(tab_2);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(130, 57, 101, 21));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        checkBox->setFont(font3);
        label_9 = new QLabel(tab_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(230, 53, 181, 31));
        label_9->setFont(font2);
        label_9->setStyleSheet(QString::fromUtf8("color: rgb(120, 120, 120);"));
        pushButton_3 = new QPushButton(tab_2);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(130, 100, 93, 31));
        pushButton_3->setFont(font2);
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton{border-style:none;background: rgb(89, 164, 222);color: rgb(255, 255, 255);}\n"
"QPushButton:hover{background:rgb(100, 178, 232);color: rgb(255, 255, 255);}"));
        label_10 = new QLabel(tab_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(60, 200, 91, 31));
        label_10->setFont(font1);
        pushButton_4 = new QPushButton(tab_2);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(150, 200, 120, 31));
        pushButton_4->setFont(font3);
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton{border-style:none;background: rgb(89, 164, 222);color: rgb(255, 255, 255);}\n"
"QPushButton:hover{background:rgb(100, 178, 232);color: rgb(255, 255, 255);}"));
        pushButton_5 = new QPushButton(tab_2);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(150, 250, 120, 31));
        pushButton_5->setFont(font3);
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton{border-style:none;background: rgb(89, 164, 222);color: rgb(255, 255, 255);}\n"
"QPushButton:hover{background:rgb(100, 178, 232);color: rgb(255, 255, 255);}"));
        label_11 = new QLabel(tab_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(280, 200, 161, 31));
        label_11->setFont(font2);
        label_11->setStyleSheet(QString::fromUtf8("color: rgb(120, 120, 120);"));
        label_12 = new QLabel(tab_2);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(280, 250, 251, 31));
        label_12->setFont(font2);
        label_12->setStyleSheet(QString::fromUtf8("color: rgb(120, 120, 120);"));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        label_13 = new QLabel(tab_3);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(0, 0, 651, 461));
        label_13->setStyleSheet(QString::fromUtf8("background-color: rgb(238, 247, 255);"));
        label_14 = new QLabel(tab_3);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(60, 40, 81, 31));
        label_14->setFont(font1);
        label_15 = new QLabel(tab_3);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(275, 40, 251, 31));
        label_15->setFont(font2);
        label_15->setStyleSheet(QString::fromUtf8("color: rgb(120, 120, 120);"));
        label_16 = new QLabel(tab_3);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(60, 100, 81, 31));
        label_16->setFont(font1);
        pushButton_8 = new QPushButton(tab_3);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(150, 103, 111, 28));
        pushButton_8->setFont(font3);
        pushButton_8->setStyleSheet(QString::fromUtf8("QPushButton{border-style:none;background: rgb(89, 164, 222);color: rgb(255, 255, 255);}\n"
"QPushButton:hover{background:rgb(100, 178, 232);color: rgb(255, 255, 255);}"));
        pushButton_9 = new QPushButton(tab_3);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(290, 103, 111, 28));
        pushButton_9->setFont(font3);
        pushButton_9->setStyleSheet(QString::fromUtf8("QPushButton{border-style:none;background: rgb(89, 164, 222);color: rgb(255, 255, 255);}\n"
"QPushButton:hover{background:rgb(100, 178, 232);color: rgb(255, 255, 255);}"));
        label_17 = new QLabel(tab_3);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(60, 160, 81, 31));
        label_17->setFont(font1);
        checkBox_2 = new QCheckBox(tab_3);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));
        checkBox_2->setGeometry(QRect(150, 195, 141, 20));
        checkBox_2->setFont(font3);
        label_18 = new QLabel(tab_3);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(150, 160, 181, 31));
        label_18->setFont(font2);
        label_18->setStyleSheet(QString::fromUtf8("color: rgb(120, 120, 120);"));
        checkBox_3 = new QCheckBox(tab_3);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));
        checkBox_3->setGeometry(QRect(150, 225, 151, 20));
        checkBox_3->setFont(font3);
        label_19 = new QLabel(tab_3);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(150, 260, 201, 31));
        label_19->setFont(font2);
        label_19->setStyleSheet(QString::fromUtf8("color: rgb(120, 120, 120);"));
        checkBox_4 = new QCheckBox(tab_3);
        checkBox_4->setObjectName(QString::fromUtf8("checkBox_4"));
        checkBox_4->setGeometry(QRect(150, 295, 141, 20));
        checkBox_4->setFont(font3);
        checkBox_5 = new QCheckBox(tab_3);
        checkBox_5->setObjectName(QString::fromUtf8("checkBox_5"));
        checkBox_5->setGeometry(QRect(300, 295, 211, 20));
        checkBox_5->setFont(font3);
        checkBox_6 = new QCheckBox(tab_3);
        checkBox_6->setObjectName(QString::fromUtf8("checkBox_6"));
        checkBox_6->setGeometry(QRect(150, 325, 151, 20));
        checkBox_6->setFont(font3);
        widget = new QWidget(tab_3);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(161, 350, 341, 81));
        widget->setStyleSheet(QString::fromUtf8("QWidget{background-color: rgb(255, 255, 255);}"));
        label_20 = new QLabel(widget);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(10, 10, 72, 21));
        label_20->setFont(font2);
        label_21 = new QLabel(widget);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(10, 45, 72, 20));
        label_21->setFont(font2);
        lineEdit_3 = new QLineEdit(widget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(80, 49, 245, 28));
        lineEdit_3->setFont(font1);
        lineEdit_2 = new QLineEdit(widget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(80, 10, 245, 28));
        lineEdit_2->setFont(font1);
        comboBox = new QComboBox(tab_3);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(151, 42, 108, 28));
        comboBox->setFont(font3);
        tabWidget->addTab(tab_3, QString());
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(7, 7, 686, 506));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(656, 11, 34, 34));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{border-image: url(:/image/close.png);}\n"
"QPushButton:hover{background: rgb(211, 64, 67);}"));
        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(619, 11, 34, 34));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton{border-image: url(:/image/minimum.png);background-color: rgb(63, 63, 63);}\n"
"QPushButton:hover{background: rgb(100, 100, 100);}"));
        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 16, 51, 21));
        label_2->setFont(font1);
        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(7, 7, 686, 44));
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(63, 63, 63);"));
        label->raise();
        label_3->raise();
        pushButton->raise();
        pushButton_2->raise();
        label_2->raise();
        tabWidget->raise();

        retranslateUi(setting);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(setting);
    } // setupUi

    void retranslateUi(QDialog *setting)
    {
        setting->setWindowTitle(QCoreApplication::translate("setting", "\350\256\276\347\275\256", nullptr));
        label_4->setText(QString());
        label_5->setText(QCoreApplication::translate("setting", " \346\226\207\344\273\266\347\256\241\347\220\206", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("setting", "\351\200\232\347\224\250\350\256\276\347\275\256", nullptr));
        label_6->setText(QString());
        label_7->setText(QCoreApplication::translate("setting", "<html><head/><body><p>\345\257\206\347\240\201\357\274\232</p></body></html>", nullptr));
        label_8->setText(QCoreApplication::translate("setting", "\344\275\240\350\256\276\347\275\256\344\272\206\350\256\260\344\275\217\345\257\206\347\240\201\357\274\214\347\231\273\345\275\225\346\227\266\346\227\240\351\234\200\350\276\223\345\205\245", nullptr));
        checkBox->setText(QCoreApplication::translate("setting", " \350\256\260\344\275\217\345\257\206\347\240\201", nullptr));
        label_9->setText(QCoreApplication::translate("setting", "<html><head/><body><p>\350\256\276\347\275\256\345\220\216\357\274\214\347\231\273\345\275\225\346\227\266\346\227\240\351\234\200\350\276\223\345\205\245</p></body></html>", nullptr));
        pushButton_3->setText(QCoreApplication::translate("setting", "\344\277\256\346\224\271\345\257\206\347\240\201", nullptr));
        label_10->setText(QCoreApplication::translate("setting", "<html><head/><body><p>\346\266\210\346\201\257\350\256\260\345\275\225\357\274\232</p></body></html>", nullptr));
        pushButton_4->setText(QCoreApplication::translate("setting", "\345\210\240\351\231\244\346\266\210\346\201\257\350\256\260\345\275\225", nullptr));
        pushButton_5->setText(QCoreApplication::translate("setting", "\346\266\210\346\201\257\350\256\260\345\275\225\345\212\240\345\257\206", nullptr));
        label_11->setText(QCoreApplication::translate("setting", "<html><head/><body><p>\344\275\240\345\217\257\344\273\245\345\210\206\346\227\266\351\227\264\346\256\265\345\210\240\351\231\244</p></body></html>", nullptr));
        label_12->setText(QCoreApplication::translate("setting", "<html><head/><body><p>\345\212\240\345\257\206\345\220\216\357\274\214\346\237\245\347\234\213\346\266\210\346\201\257\350\256\260\345\275\225\351\234\200\350\246\201\350\276\223\345\205\245\345\257\206\347\240\201</p></body></html>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("setting", "\345\256\211\345\205\250\350\256\276\347\275\256", nullptr));
        label_13->setText(QString());
        label_14->setText(QCoreApplication::translate("setting", "<html><head/><body><p>\344\270\252\344\272\272\350\265\204\346\226\231\357\274\232</p></body></html>", nullptr));
        label_15->setText(QCoreApplication::translate("setting", "<html><head/><body><p>\344\275\240\345\217\257\344\273\245\350\256\276\347\275\256\350\260\201\345\217\257\344\273\245\347\234\213\344\275\240\347\232\204\344\270\252\344\272\272\350\265\204\346\226\231</p></body></html>", nullptr));
        label_16->setText(QCoreApplication::translate("setting", "<html><head/><body><p>\350\201\212\345\244\251\345\261\217\350\224\275\357\274\232</p></body></html>", nullptr));
        pushButton_8->setText(QCoreApplication::translate("setting", "\345\261\217\350\224\275\350\201\224\347\263\273\344\272\272", nullptr));
        pushButton_9->setText(QCoreApplication::translate("setting", "\345\261\217\350\224\275\347\276\244\350\201\212", nullptr));
        label_17->setText(QCoreApplication::translate("setting", "<html><head/><body><p>\345\245\275\345\217\213\346\267\273\345\212\240\357\274\232</p></body></html>", nullptr));
        checkBox_2->setText(QCoreApplication::translate("setting", " \350\264\246\345\217\267\345\222\214\346\230\265\347\247\260\346\237\245\346\211\276", nullptr));
        label_18->setText(QCoreApplication::translate("setting", "<html><head/><body><p>\345\210\253\344\272\272\350\203\275\345\244\237\346\237\245\346\211\276\345\210\260\344\275\240\347\232\204\346\226\271\345\274\217</p></body></html>", nullptr));
        checkBox_3->setText(QCoreApplication::translate("setting", "\345\217\252\350\203\275\351\200\232\350\277\207\350\264\246\345\217\267\346\237\245\346\211\276", nullptr));
        label_19->setText(QCoreApplication::translate("setting", "<html><head/><body><p>\345\210\253\344\272\272\346\267\273\345\212\240\344\275\240\351\234\200\350\246\201\347\232\204\351\252\214\350\257\201\346\226\271\345\274\217</p></body></html>", nullptr));
        checkBox_4->setText(QCoreApplication::translate("setting", "\344\273\273\344\275\225\344\272\272", nullptr));
        checkBox_5->setText(QCoreApplication::translate("setting", "\351\234\200\350\246\201\351\252\214\350\257\201\346\266\210\346\201\257\345\271\266\347\224\261\346\210\221\347\241\256\350\256\244", nullptr));
        checkBox_6->setText(QCoreApplication::translate("setting", "\351\234\200\350\246\201\346\255\243\347\241\256\345\233\236\347\255\224\351\227\256\351\242\230", nullptr));
        label_20->setText(QCoreApplication::translate("setting", "\350\256\276\347\275\256\351\227\256\351\242\230", nullptr));
        label_21->setText(QCoreApplication::translate("setting", "\350\256\276\347\275\256\347\255\224\346\241\210", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("setting", "\346\211\200\346\234\211\344\272\272\345\217\257\350\247\201", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("setting", "\344\273\205\345\245\275\345\217\213\345\217\257\350\247\201", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("setting", "\344\273\205\350\207\252\345\267\261\345\217\257\350\247\201", nullptr));

        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("setting", "\346\235\203\351\231\220\350\256\276\347\275\256", nullptr));
        label->setText(QString());
        pushButton->setText(QString());
        pushButton_2->setText(QString());
        label_2->setText(QCoreApplication::translate("setting", "<html><head/><body><p><span style=\" color:#ffffff;\"> \350\256\276\347\275\256</span></p></body></html>", nullptr));
        label_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class setting: public Ui_setting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTING_H
