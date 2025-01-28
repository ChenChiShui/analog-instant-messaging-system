// 包含头文件loginFind.h
#include "loginFind.h"
// 包含头文件ui_loginFind.h
#include "ui_loginFind.h"
// 包含头文件pwdFind.h
#include "pwdFind.h"

// loginFindCCS类的构造函数
loginFindCCS::loginFindCCS(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::loginlose)
{
    // 设置UI界面
    ui->setupUi(this);
}

// loginFindCCS类的析构函数
loginFindCCS::~loginFindCCS()
{
    // 删除UI对象
    delete ui;
}

// "pushButton"按钮的点击事件处理函数
void loginFindCCS::on_pushButton_clicked()
{
    // 创建pwdFindCCS对象
    pwdFindCCS a;
    // 执行pwdFindCCS对象的对话框
    a.exec();
}
