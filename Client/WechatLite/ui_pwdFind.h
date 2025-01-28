/********************************************************************************
** Form generated from reading UI file 'pwdFind.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PWDFIND_H
#define UI_PWDFIND_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_pwback
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton_3;
    QLabel *label_4;

    void setupUi(QDialog *pwback)
    {
        if (pwback->objectName().isEmpty())
            pwback->setObjectName(QString::fromUtf8("pwback"));
        pwback->resize(698, 533);
        pwback->setMinimumSize(QSize(0, 533));
        pwback->setMaximumSize(QSize(16777215, 533));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/image/victoricon2.png"), QSize(), QIcon::Normal, QIcon::Off);
        pwback->setWindowIcon(icon);
        label = new QLabel(pwback);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(280, 20, 251, 51));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(20);
        font.setBold(false);
        font.setWeight(50);
        label->setFont(font);
        label_2 = new QLabel(pwback);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(0, 0, 701, 541));
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(235, 255, 255);"));
        lineEdit = new QLineEdit(pwback);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(20, 110, 341, 71));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(12);
        lineEdit->setFont(font1);
        lineEdit->setStyleSheet(QString::fromUtf8(""));
        lineEdit_2 = new QLineEdit(pwback);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(20, 220, 341, 71));
        lineEdit_2->setFont(font1);
        pushButton = new QPushButton(pwback);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(50, 440, 241, 61));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font2.setPointSize(11);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setWeight(9);
        pushButton->setFont(font2);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{border-style:none;font: 75 11pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";background-color: rgb(190, 70, 180);color: rgb(255, 255, 255);}\n"
"QPushButton:hover{background: rgb(190, 70, 230);color: rgb(255, 255, 255);}"));
        label_3 = new QLabel(pwback);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(410, 100, 331, 101));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font3.setPointSize(10);
        label_3->setFont(font3);
        lineEdit_3 = new QLineEdit(pwback);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(20, 330, 341, 71));
        lineEdit_3->setFont(font1);
        pushButton_3 = new QPushButton(pwback);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(420, 220, 211, 71));
        pushButton_3->setFont(font2);
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton{border-style:none;font: 75 11pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";background-color: rgb(190, 70, 180);color: rgb(255, 255, 255);}\n"
"QPushButton:hover{background: rgb(190, 70, 230);color: rgb(255, 255, 255);}"));
        label_4 = new QLabel(pwback);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(420, 320, 331, 101));
        label_4->setFont(font3);
        label_2->raise();
        lineEdit->raise();
        lineEdit_2->raise();
        pushButton->raise();
        label->raise();
        label_3->raise();
        lineEdit_3->raise();
        pushButton_3->raise();
        label_4->raise();

        retranslateUi(pwback);

        QMetaObject::connectSlotsByName(pwback);
    } // setupUi

    void retranslateUi(QDialog *pwback)
    {
        pwback->setWindowTitle(QCoreApplication::translate("pwback", "\345\257\206\347\240\201\346\211\276\345\233\236", nullptr));
        label->setText(QCoreApplication::translate("pwback", "<html><head/><body><p>\346\211\276\345\233\236\345\257\206\347\240\201</p></body></html>", nullptr));
        label_2->setText(QString());
        pushButton->setText(QCoreApplication::translate("pwback", "\346\211\276\345\233\236", nullptr));
        label_3->setText(QCoreApplication::translate("pwback", "<html><head/><body><p>\345\241\253\345\206\231\344\275\240\347\232\204\347\224\250\346\210\267\345\220\215\345\222\214\346\211\213\346\234\272\345\217\267</p><p>\357\274\210\346\255\244\345\244\204\345\217\252\347\225\231\344\272\206\346\216\245\345\217\243\357\274\211</p></body></html>", nullptr));
        pushButton_3->setText(QCoreApplication::translate("pwback", "\345\217\221\351\200\201\351\252\214\350\257\201\347\240\201", nullptr));
        label_4->setText(QCoreApplication::translate("pwback", "<html><head/><body><p>\351\252\214\350\257\201\347\240\201api\351\234\200\350\246\201\344\273\230\350\264\271</p><p>\345\233\240\346\255\244\346\262\241\346\234\211\350\277\233\350\241\214\345\212\237\350\203\275\345\256\214\345\226\204</p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class pwback: public Ui_pwback {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PWDFIND_H
