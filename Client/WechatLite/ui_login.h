/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QFrame *frame;
    QLabel *label_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QCheckBox *checkBox_2;
    QPushButton *pushButton_5;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QLabel *label_7;
    QLabel *label_2;
    QLabel *label;

    void setupUi(QDialog *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName(QString::fromUtf8("login"));
        login->resize(552, 423);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/image/victoricon2.png"), QSize(), QIcon::Normal, QIcon::Off);
        login->setWindowIcon(icon);
        frame = new QFrame(login);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 552, 423));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(6, -4, 541, 421));
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(513, 8, 32, 32));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{border-image: url(:/image/close.png);}\n"
"QPushButton:hover{background: rgb(211, 64, 67);}"));
        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(479, 8, 32, 32));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton{border-image: url(:/image/minimum.png);}\n"
"QPushButton:hover{background:rgb(87, 148, 239);}\n"
""));
        lineEdit = new QLineEdit(frame);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(260, 190, 231, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(11);
        lineEdit->setFont(font);
        lineEdit->setStyleSheet(QString::fromUtf8(""));
        lineEdit_2 = new QLineEdit(frame);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(260, 260, 231, 31));
        lineEdit_2->setFont(font);
        checkBox_2 = new QCheckBox(frame);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));
        checkBox_2->setGeometry(QRect(420, 310, 121, 21));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        checkBox_2->setFont(font1);
        pushButton_5 = new QPushButton(frame);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(50, 320, 91, 28));
        pushButton_5->setFont(font1);
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton{background:transparent;color: rgb(135, 135, 135);}\n"
"QPushButton:hover{color:rgb(65, 155, 255);}"));
        pushButton_3 = new QPushButton(frame);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(270, 350, 211, 41));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font2.setPointSize(11);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setWeight(9);
        pushButton_3->setFont(font2);
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton{border-style:none;font: 75 11pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";background-color: rgb(190, 70, 180);color: rgb(255, 255, 255);}\n"
"QPushButton:hover{background: rgb(190, 70, 230);color: rgb(255, 255, 255);}"));
        pushButton_3->setAutoDefault(true);
        pushButton_3->setFlat(false);
        pushButton_4 = new QPushButton(frame);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(50, 370, 91, 28));
        pushButton_4->setFont(font1);
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton{background:transparent;color: rgb(135, 135, 135);}\n"
"QPushButton:hover{color:rgb(65, 155, 255);}"));
        label_7 = new QLabel(frame);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(80, 190, 111, 111));
        label_7->setStyleSheet(QString::fromUtf8(""));
        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(-10, -10, 571, 161));
        label_2->setStyleSheet(QString::fromUtf8("image: url(:/image/CollegeSign (2).png);"));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 170, 151, 21));

        retranslateUi(login);

        pushButton_3->setDefault(false);


        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QDialog *login)
    {
        login->setWindowTitle(QCoreApplication::translate("login", "\347\231\273\345\275\225", nullptr));
        label_3->setText(QString());
        pushButton->setText(QString());
        pushButton_2->setText(QString());
        checkBox_2->setText(QCoreApplication::translate("login", "\350\256\260\344\275\217\345\257\206\347\240\201", nullptr));
        pushButton_5->setText(QCoreApplication::translate("login", "\346\211\276\345\233\236\345\257\206\347\240\201", nullptr));
        pushButton_3->setText(QCoreApplication::translate("login", "\347\231\273\345\275\225", nullptr));
        pushButton_4->setText(QCoreApplication::translate("login", "\346\263\250\345\206\214\350\264\246\345\217\267", nullptr));
        label_7->setText(QString());
        label_2->setText(QString());
        label_2->setProperty("55220331陈驰水", QVariant(QString()));
        label->setText(QCoreApplication::translate("login", "55220331\351\231\210\351\251\260\346\260\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
