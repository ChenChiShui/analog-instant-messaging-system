/********************************************************************************
** Form generated from reading UI file 'regist.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGIST_H
#define UI_REGIST_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_regist
{
public:
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QWidget *widget;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QPushButton *pushButton_2;
    QLabel *label_11;

    void setupUi(QDialog *regist)
    {
        if (regist->objectName().isEmpty())
            regist->setObjectName(QString::fromUtf8("regist"));
        regist->resize(519, 468);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/image/victoricon2.png"), QSize(), QIcon::Normal, QIcon::Off);
        regist->setWindowIcon(icon);
        label_2 = new QLabel(regist);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(0, 0, 521, 641));
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(235, 255, 255);"));
        lineEdit = new QLineEdit(regist);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(10, 110, 241, 51));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(12);
        lineEdit->setFont(font);
        lineEdit->setStyleSheet(QString::fromUtf8(""));
        lineEdit_2 = new QLineEdit(regist);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(10, 240, 241, 51));
        lineEdit_2->setFont(font);
        pushButton = new QPushButton(regist);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(270, 360, 221, 51));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(11);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(9);
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{border-style:none;font: 75 11pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";background-color: rgb(190, 70, 180);color: rgb(255, 255, 255);}\n"
"QPushButton:hover{background: rgb(190, 70, 230);color: rgb(255, 255, 255);}"));
        lineEdit_3 = new QLineEdit(regist);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(10, 360, 241, 51));
        lineEdit_3->setFont(font);
        lineEdit_4 = new QLineEdit(regist);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(260, 240, 241, 51));
        lineEdit_4->setFont(font);
        label_3 = new QLabel(regist);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 160, 101, 21));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        label_3->setFont(font2);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));
        label_4 = new QLabel(regist);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 300, 111, 21));
        label_4->setFont(font2);
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));
        label_5 = new QLabel(regist);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(270, 290, 151, 21));
        label_5->setFont(font2);
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));
        label_6 = new QLabel(regist);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(20, 420, 131, 21));
        label_6->setFont(font2);
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));
        label_7 = new QLabel(regist);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(20, 420, 181, 21));
        label_7->setFont(font2);
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));
        widget = new QWidget(regist);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(-10, -20, 521, 621));
        widget->setStyleSheet(QString::fromUtf8("background-color: rgb(235, 255, 255);"));
        label_8 = new QLabel(widget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(120, 100, 401, 61));
        label_8->setMaximumSize(QSize(401, 16777215));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font3.setPointSize(20);
        font3.setBold(false);
        font3.setWeight(50);
        label_8->setFont(font3);
        label_9 = new QLabel(widget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(120, 180, 301, 51));
        QFont font4;
        font4.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font4.setPointSize(16);
        font4.setBold(false);
        font4.setWeight(50);
        label_9->setFont(font4);
        label_10 = new QLabel(widget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(72, 265, 381, 71));
        QFont font5;
        font5.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font5.setPointSize(18);
        font5.setBold(true);
        font5.setWeight(75);
        label_10->setFont(font5);
        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(70, 330, 371, 61));
        pushButton_2->setFont(font1);
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton{border-style:none;font: 75 11pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";background-color: rgb(190, 70, 180);color: rgb(255, 255, 255);}\n"
"QPushButton:hover{background: rgb(190, 70, 230);color: rgb(255, 255, 255);}"));
        label_11 = new QLabel(regist);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(190, 40, 211, 61));
        QFont font6;
        font6.setFamily(QString::fromUtf8("\345\271\274\345\234\206"));
        font6.setPointSize(21);
        font6.setBold(true);
        font6.setItalic(true);
        font6.setUnderline(false);
        font6.setWeight(75);
        label_11->setFont(font6);
        label_11->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);"));

        retranslateUi(regist);

        QMetaObject::connectSlotsByName(regist);
    } // setupUi

    void retranslateUi(QDialog *regist)
    {
        regist->setWindowTitle(QCoreApplication::translate("regist", "\346\263\250\345\206\214", nullptr));
        label_2->setText(QString());
        pushButton->setText(QCoreApplication::translate("regist", "\346\263\250\345\206\214", nullptr));
        label_3->setText(QCoreApplication::translate("regist", "\346\230\265\347\247\260\344\270\215\350\203\275\344\270\272\347\251\272", nullptr));
        label_4->setText(QCoreApplication::translate("regist", "\345\257\206\347\240\201\344\270\215\350\203\275\344\270\272\347\251\272", nullptr));
        label_5->setText(QCoreApplication::translate("regist", "\344\270\244\346\254\241\350\276\223\345\205\245\345\257\206\347\240\201\344\270\215\344\270\200\350\207\264", nullptr));
        label_6->setText(QCoreApplication::translate("regist", "\344\270\215\350\203\275\344\270\272\347\251\272", nullptr));
        label_7->setText(QCoreApplication::translate("regist", "\350\257\267\350\276\223\345\205\245\346\234\211\346\225\210\347\232\204\346\225\260\346\215\256", nullptr));
        label_8->setText(QCoreApplication::translate("regist", "<html><head/><body><p>\344\275\240\345\267\262\346\210\220\345\212\237\346\263\250\345\206\214\357\274\214\350\260\242\350\260\242\357\274\201</p></body></html>", nullptr));
        label_9->setText(QCoreApplication::translate("regist", "<html><head/><body><p>\344\275\240\347\232\204\350\264\246\345\217\267\346\230\257\357\274\232</p></body></html>", nullptr));
        label_10->setText(QCoreApplication::translate("regist", "TextLabel", nullptr));
        pushButton_2->setText(QCoreApplication::translate("regist", "\347\241\256\345\256\232", nullptr));
        label_11->setText(QCoreApplication::translate("regist", "\346\254\242\350\277\216\346\263\250\345\206\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class regist: public Ui_regist {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGIST_H
