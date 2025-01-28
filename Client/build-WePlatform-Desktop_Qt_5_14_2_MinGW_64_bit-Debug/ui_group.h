/********************************************************************************
** Form generated from reading UI file 'group.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GROUP_H
#define UI_GROUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_groupCCS
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QTableWidget *tableWidget;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QWidget *widget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;

    void setupUi(QWidget *groupCCS)
    {
        if (groupCCS->objectName().isEmpty())
            groupCCS->setObjectName(QString::fromUtf8("groupCCS"));
        groupCCS->resize(811, 403);
        groupCCS->setStyleSheet(QString::fromUtf8("background-color: rgb(200, 255, 255);"));
        pushButton = new QPushButton(groupCCS);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(90, 40, 61, 61));
        pushButton_2 = new QPushButton(groupCCS);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(10, 110, 61, 61));
        pushButton_3 = new QPushButton(groupCCS);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(90, 110, 61, 61));
        pushButton_4 = new QPushButton(groupCCS);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(10, 40, 61, 61));
        pushButton_5 = new QPushButton(groupCCS);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(10, 180, 61, 61));
        pushButton_6 = new QPushButton(groupCCS);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(90, 180, 61, 61));
        tableWidget = new QTableWidget(groupCCS);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(185, 50, 321, 301));
        tableWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        pushButton_7 = new QPushButton(groupCCS);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(10, 280, 61, 61));
        pushButton_8 = new QPushButton(groupCCS);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(90, 280, 61, 61));
        widget = new QWidget(groupCCS);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(540, 60, 221, 271));
        widget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 20, 161, 21));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 40, 91, 21));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 70, 111, 21));
        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(30, 90, 81, 21));
        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(30, 120, 101, 21));
        label_6 = new QLabel(widget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(30, 140, 61, 31));

        retranslateUi(groupCCS);

        QMetaObject::connectSlotsByName(groupCCS);
    } // setupUi

    void retranslateUi(QWidget *groupCCS)
    {
        groupCCS->setWindowTitle(QCoreApplication::translate("groupCCS", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("groupCCS", "02\347\276\244", nullptr));
        pushButton_2->setText(QCoreApplication::translate("groupCCS", "03\347\276\244", nullptr));
        pushButton_3->setText(QCoreApplication::translate("groupCCS", "04\347\276\244", nullptr));
        pushButton_4->setText(QCoreApplication::translate("groupCCS", "01\347\276\244", nullptr));
        pushButton_5->setText(QCoreApplication::translate("groupCCS", "05\347\276\244", nullptr));
        pushButton_6->setText(QCoreApplication::translate("groupCCS", "06\347\276\244", nullptr));
        pushButton_7->setText(QCoreApplication::translate("groupCCS", "\345\242\236\345\212\240", nullptr));
        pushButton_8->setText(QCoreApplication::translate("groupCCS", "\345\210\240\351\231\244", nullptr));
#if QT_CONFIG(accessibility)
        widget->setAccessibleName(QCoreApplication::translate("groupCCS", "\347\276\244\350\201\212\347\225\214\351\235\242", nullptr));
#endif // QT_CONFIG(accessibility)
        label->setText(QCoreApplication::translate("groupCCS", "19:20 55220331:", nullptr));
        label_2->setText(QCoreApplication::translate("groupCCS", "\345\244\247\345\256\266\345\245\275\357\274\201", nullptr));
        label_3->setText(QCoreApplication::translate("groupCCS", "19:21 2023\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("groupCCS", "\344\275\240\345\245\275\343\200\202", nullptr));
        label_5->setText(QCoreApplication::translate("groupCCS", "19:22 test\357\274\232", nullptr));
        label_6->setText(QCoreApplication::translate("groupCCS", "\360\237\244\243\360\237\244\243", nullptr));
    } // retranslateUi

};

namespace Ui {
    class groupCCS: public Ui_groupCCS {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GROUP_H
