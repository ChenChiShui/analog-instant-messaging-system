#include "group.h"
#include "ui_group.h"
#include "qstringlist.h"
#include "newFriend.h"

groupCCS::groupCCS(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::groupCCS)
{

    ui->setupUi(this);
    //设置列数
    ui->tableWidget->setColumnCount(2);
    ui->tableWidget->setRowCount(4);
    //设置表头
    ui->tableWidget->setHorizontalHeaderLabels(QStringList()<<"昵称" << "id");
    QStringList nameList;

    nameList<<"ccs"<<"abc"<<"2023"<<"55220331"<<"test"<<"walter_chen";

    connect(ui->pushButton, &QPushButton::clicked,[=](){
        //设置列数
        ui->tableWidget->setColumnCount(2);
        ui->tableWidget->setRowCount(4);
        //设置表头
        ui->tableWidget->setHorizontalHeaderLabels(QStringList()<<"昵称" << "id");
        for(int i=0;i<4;i++)
        {
        int col = 0;
        ui->tableWidget->setItem(i,col++,new QTableWidgetItem(nameList[i]));
        ui->tableWidget->setItem(i,col++,new QTableWidgetItem(QString::number(rand())));//将数字转为QString
        }
    });

    connect(ui->pushButton_2, &QPushButton::clicked,[=](){
        nowRow = 4;
        //设置列数
        ui->tableWidget->setColumnCount(2);
        ui->tableWidget->setRowCount(4);
        //设置表头
        ui->tableWidget->setHorizontalHeaderLabels(QStringList()<<"昵称" << "id");
        for(int i=0;i<4;i++)
        {
        int col = 0;
        ui->tableWidget->setItem(i,col++,new QTableWidgetItem(nameList[i]));
        ui->tableWidget->setItem(i,col++,new QTableWidgetItem(QString::number(rand())));//将数字转为QString
        }
    });

    connect(ui->pushButton_3, &QPushButton::clicked,[=](){
        nowRow = 4;
        //设置列数
        ui->tableWidget->setColumnCount(2);
        ui->tableWidget->setRowCount(4);
        //设置表头
        ui->tableWidget->setHorizontalHeaderLabels(QStringList()<<"昵称" << "id");
        for(int i=0;i<4;i++)
        {
        int col = 0;
        ui->tableWidget->setItem(i,col++,new QTableWidgetItem(nameList[i]));
        ui->tableWidget->setItem(i,col++,new QTableWidgetItem(QString::number(rand())));//将数字转为QString
        }
    });

    connect(ui->pushButton_4, &QPushButton::clicked,[=](){
        nowRow = 4;
        //设置列数
        ui->tableWidget->setColumnCount(2);
        ui->tableWidget->setRowCount(4);
        //设置表头
        ui->tableWidget->setHorizontalHeaderLabels(QStringList()<<"昵称" << "id");
        for(int i=0;i<4;i++)
        {
        int col = 0;
        ui->tableWidget->setItem(i,col++,new QTableWidgetItem(nameList[i]));
        ui->tableWidget->setItem(i,col++,new QTableWidgetItem(QString::number(rand())));//将数字转为QString
        }
    });

    connect(ui->pushButton_5, &QPushButton::clicked,[=](){
        nowRow = 4;
        //设置列数
        ui->tableWidget->setColumnCount(2);
        ui->tableWidget->setRowCount(4);
        //设置表头
        ui->tableWidget->setHorizontalHeaderLabels(QStringList()<<"昵称" << "id");
        for(int i=0;i<4;i++)
        {
        int col = 0;
        ui->tableWidget->setItem(i,col++,new QTableWidgetItem(nameList[i]));
        ui->tableWidget->setItem(i,col++,new QTableWidgetItem(QString::number(rand())));//将数字转为QString
        }
    });

    connect(ui->pushButton_6, &QPushButton::clicked,[=](){
        nowRow = 4;
        //设置列数
        ui->tableWidget->setColumnCount(2);
        ui->tableWidget->setRowCount(4);
        //设置表头
        ui->tableWidget->setHorizontalHeaderLabels(QStringList()<<"昵称" << "id");
        for(int i=0;i<4;i++)
        {
        int col = 0;
        ui->tableWidget->setItem(i,col++,new QTableWidgetItem(nameList[i]));
        ui->tableWidget->setItem(i,col++,new QTableWidgetItem(QString::number(rand())));//将数字转为QString
        }
    });
    // 增添一个成员
    connect(ui->pushButton_7, &QPushButton::clicked,[=](){
        newFriendCCS * a = new newFriendCCS;
        ui->tableWidget->insertRow(4);
        ui->tableWidget->setItem(4,0,new QTableWidgetItem("陈驰水"));
        ui->tableWidget->setItem(4,1,new QTableWidgetItem("2313"));
        a->show();
    });

    // 删除一个成员
    //设置目前的行数
    connect(ui->pushButton_8, &QPushButton::clicked,[=](){
        ui->tableWidget->removeRow(nowRow);
        nowRow --;

    });
}

groupCCS::~groupCCS()
{
    delete ui;
}
