// 包含头文件mainwindow.h
#include "mainwindow.h"
// 包含头文件login.h
#include "login.h"
// 包含Qt应用程序的头文件
#include <QApplication>

// 主函数
int main(int argc, char *argv[])
{
    // 创建Qt应用程序对象
    QApplication a(argc, argv);

    // 创建dataBaseCCS对象
    dataBaseCCS d;
    // 建立数据库连接
    d.createConnection();
    // 创建表格1
    d.createTable1();
    // 创建表格2
    d.createTable2();
    // 创建表格3
    d.createTable3();
    // 创建表格4
    d.createTable4();
    // 创建表格6
    d.createTable6();

    // 创建MainWindow对象
    MainWindow w;
    // 显示MainWindow窗口
    // 如果ifopen为false，则关闭MainWindow窗口
    if (w.ifopen == false)
        w.close();

    // 创建另一个MainWindow对象
    MainWindow g;
    // 显示另一个MainWindow窗口
    g.show();
    // 如果ifopen为false，则关闭另一个MainWindow窗口
    if (g.ifopen == false)
        g.close();

    // 执行Qt应用程序的事件循环，程序一直执行，直到主窗口关闭
    return a.exec();
}
