#include "dataBase.h"

//建立一个数据库连接
bool dataBaseCCS::createConnection()
{
    //以后就可以用"sqlite1"与数据库进行连接了
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE", "sqlite1"); // 添加一个SQLite数据库连接
    db.setDatabaseName(".//qtDb.db"); // 指定数据库文件名
    if (!db.open()) // 打开数据库连接
    {
        qDebug() << "无法建立数据库连接"; // 输出错误信息
        return false; // 连接失败
    }
    return true; // 连接成功
}

//创建数据库表1
bool dataBaseCCS::createTable1()
{
    QSqlDatabase db = QSqlDatabase::database("sqlite1"); // 获取名为"sqlite1"的数据库连接
    QSqlQuery query(db); // 创建一个用于执行SQL查询的对象
    bool success = query.exec("create table user_inform("
                              "user_id char(11),"
                              "user_password char(11),"
                              "phonenumber int(11))"); // 执行创建表的SQL语句
    if (success) // 如果创建成功
    {
        qDebug() << QObject::tr("数据库表1创建成功！"); // 输出成功信息
        return true; // 创建成功
    }
    else
    {
        return false; // 创建失败
    }
}

//创建数据库表2
bool dataBaseCCS::createTable2()
{
    QSqlDatabase db = QSqlDatabase::database("sqlite1"); // 获取名为"sqlite1"的数据库连接
    QSqlQuery query(db); // 创建一个用于执行SQL查询的对象
    bool success = query.exec("create table userdata("
                              "user_id char(11),"
                              "user_name char(11),"
                              "user_sex int,"
                              "year char(10),month char(8),date char(8),"
                              "phonenumber char(11),"
                              "user_state char(20),"
                              "user_city char(20),"
                              "signature char(40),"
                              "cansearch int,"
                              "canlookover int,"
                              "addway int,"
                              "addquestion char(30),"
                              "addanswer char(30),"
                              "touxiang char(20))"); // 执行创建表的SQL语句
    if (success) // 如果创建成功
    {
        qDebug() << QObject::tr("数据库表2创建成功！"); // 输出成功信息
        return true; // 创建成功
    }
    else
    {
        return false; // 创建失败
    }
}

//创建数据库表3
bool dataBaseCCS::createTable3()
{
    QSqlDatabase db = QSqlDatabase::database("sqlite1"); // 获取名为"sqlite1"的数据库连接
    QSqlQuery query(db); // 创建一个用于执行SQL查询的对象
    bool success = query.exec("create table loginuser("
                              "user_id char(11),"
                              "user_password char(11),"
                              "ifrem int)"); // 执行创建表的SQL语句
    if (success) // 如果创建成功
    {
        qDebug() << QObject::tr("数据库表3创建成功！"); // 输出成功信息
        return true; // 创建成功
    }
    else
    {
        return false; // 创建失败
    }
}
bool dataBaseCCS::createTable4()
{
    QSqlDatabase db = QSqlDatabase::database("sqlite1"); // 获取名为"sqlite1"的数据库连接
    QSqlQuery query(db); // 创建一个用于执行SQL查询的对象
    bool success = query.exec("create table userfriend("
                              "user_id char(11),"
                              "user_friend char(500))"); // 执行创建表的SQL语句
    if (success) // 如果创建成功
    {
        qDebug() << QObject::tr("数据库表4创建成功！"); // 输出成功信息
        return true; // 创建成功
    }
    else
    {
        return false; // 创建失败
    }
}

/*bool DataBase::createTable5()
{
    QSqlDatabase db = QSqlDatabase::database("sqlite1"); //建立数据库连接
    QSqlQuery query(db);
    bool success = query.exec("create table message("
                              "user_id char(11),"
                              "frdmessa char(50),"
                              "talkmessa char(100))");
    if(success)
    {
        qDebug() << QObject::tr("数据库表5创建成功！");
        return true;
    }
    else
    {
        qDebug()<<query.exec("drop table message");
        return false;
    }
}*/

bool dataBaseCCS::createTable6()
{
    QSqlDatabase db = QSqlDatabase::database("sqlite1"); // 获取名为"sqlite1"的数据库连接
    QSqlQuery query(db); // 创建一个用于执行SQL查询的对象
    bool success = query.exec("create table talklist("
                              "user_id char(11),"
                              "user_friend char(500))"); // 执行创建表的SQL语句
    if (success) // 如果创建成功
    {
        qDebug() << QObject::tr("数据库表6创建成功！"); // 输出成功信息
        return true; // 创建成功
    }
    else
    {
        return false; // 创建失败
    }
}
