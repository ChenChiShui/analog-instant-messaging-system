/********************************************************************************
** Form generated from reading UI file 'loginFind.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINFIND_H
#define UI_LOGINFIND_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_loginlose
{
public:
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;

    void setupUi(QDialog *loginlose)
    {
        if (loginlose->objectName().isEmpty())
            loginlose->setObjectName(QString::fromUtf8("loginlose"));
        loginlose->resize(225, 140);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/image/cuowu.png"), QSize(), QIcon::Normal, QIcon::Off);
        loginlose->setWindowIcon(icon);
        label = new QLabel(loginlose);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 0, 281, 81));
        label_2 = new QLabel(loginlose);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(0, 0, 401, 141));
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(235, 255, 255);"));
        pushButton = new QPushButton(loginlose);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(20, 90, 161, 28));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("\n"
"QPushButton{background:transparent;color: rgb(0, 140, 255);}\n"
"QPushButton:hover{color: rgb(50, 180, 255);}"));
        label_2->raise();
        label->raise();
        pushButton->raise();

        retranslateUi(loginlose);

        QMetaObject::connectSlotsByName(loginlose);
    } // setupUi

    void retranslateUi(QDialog *loginlose)
    {
        loginlose->setWindowTitle(QCoreApplication::translate("loginlose", "\347\231\273\345\275\225\345\244\261\350\264\245", nullptr));
        label->setText(QCoreApplication::translate("loginlose", "<html><head/><body><p><span style=\" font-size:12pt;\">\350\264\246\345\217\267\346\210\226\345\257\206\347\240\201\346\234\211\350\257\257\357\274\201</span></p></body></html>", nullptr));
        label_2->setText(QString());
        pushButton->setText(QCoreApplication::translate("loginlose", "\347\202\271\345\207\273\350\277\231\351\207\214\346\211\276\345\233\236\345\257\206\347\240\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class loginlose: public Ui_loginlose {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINFIND_H
