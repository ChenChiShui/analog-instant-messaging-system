/********************************************************************************
** Form generated from reading UI file 'pwdChange.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PWDCHANGE_H
#define UI_PWDCHANGE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_changepw
{
public:
    QFrame *frame;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLabel *label;
    QPushButton *pushButton;
    QLineEdit *lineEdit_2;
    QLabel *label_5;
    QLineEdit *lineEdit_3;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;

    void setupUi(QDialog *changepw)
    {
        if (changepw->objectName().isEmpty())
            changepw->setObjectName(QString::fromUtf8("changepw"));
        changepw->resize(489, 433);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/image/victoricon2.png"), QSize(), QIcon::Normal, QIcon::Off);
        changepw->setWindowIcon(icon);
        frame = new QFrame(changepw);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 521, 621));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(0, 0, 521, 620));
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lineEdit = new QLineEdit(frame);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(60, 90, 371, 51));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(12);
        lineEdit->setFont(font);
        lineEdit->setStyleSheet(QString::fromUtf8(""));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(160, 10, 251, 51));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(20);
        font1.setBold(false);
        font1.setWeight(50);
        label->setFont(font1);
        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(170, 360, 161, 51));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font2.setPointSize(11);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setWeight(9);
        pushButton->setFont(font2);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{border-style:none;font: 75 11pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";background-color: rgb(190, 70, 180);color: rgb(255, 255, 255);}\n"
"QPushButton:hover{background: rgb(190, 70, 230);color: rgb(255, 255, 255);}"));
        lineEdit_2 = new QLineEdit(frame);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(60, 170, 371, 51));
        lineEdit_2->setFont(font);
        label_5 = new QLabel(frame);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(123, 170, 321, 31));
        label_5->setFont(font);
        lineEdit_3 = new QLineEdit(frame);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(60, 260, 371, 51));
        lineEdit_3->setFont(font);
        lineEdit_3->setStyleSheet(QString::fromUtf8(""));
        label_6 = new QLabel(frame);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(360, 140, 201, 21));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        label_6->setFont(font3);
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));
        label_7 = new QLabel(frame);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(330, 230, 201, 21));
        label_7->setFont(font3);
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));
        label_8 = new QLabel(frame);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(310, 320, 201, 21));
        label_8->setFont(font3);
        label_8->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));
        label_2->raise();
        lineEdit->raise();
        pushButton->raise();
        lineEdit_2->raise();
        label->raise();
        label_5->raise();
        lineEdit_3->raise();
        label_6->raise();
        label_7->raise();
        label_8->raise();

        retranslateUi(changepw);

        QMetaObject::connectSlotsByName(changepw);
    } // setupUi

    void retranslateUi(QDialog *changepw)
    {
        changepw->setWindowTitle(QCoreApplication::translate("changepw", "\344\277\256\346\224\271\345\257\206\347\240\201", nullptr));
        label_2->setText(QString());
        label->setText(QCoreApplication::translate("changepw", "<html><head/><body><p>\344\277\256\346\224\271\345\257\206\347\240\201</p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("changepw", "\344\277\256\346\224\271", nullptr));
        label_5->setText(QString());
        label_6->setText(QCoreApplication::translate("changepw", "\346\227\247\345\257\206\347\240\201\351\224\231\350\257\257", nullptr));
        label_7->setText(QCoreApplication::translate("changepw", "\346\226\260\345\257\206\347\240\201\344\270\215\350\203\275\344\270\272\347\251\272", nullptr));
        label_8->setText(QCoreApplication::translate("changepw", "\344\270\244\346\254\241\350\276\223\345\205\245\345\257\206\347\240\201\344\270\215\344\270\200\350\207\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class changepw: public Ui_changepw {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PWDCHANGE_H
