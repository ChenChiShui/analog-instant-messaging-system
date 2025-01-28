#include "pwdChange.h"
#include "ui_pwdChange.h"
#include "mainwindow.h"

pwdChangeCCS::pwdChangeCCS(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::changepw)
{
    ui->setupUi(this);

    ifchange=0;
    ui->lineEdit->setPlaceholderText("旧密码");
    ui->lineEdit_2->setPlaceholderText("新密码");
    ui->lineEdit_3->setPlaceholderText("再次填写新密码");
    ui->lineEdit->setEchoMode(QLineEdit::Password);
    ui->lineEdit_2->setEchoMode(QLineEdit::Password);
    ui->lineEdit_3->setEchoMode(QLineEdit::Password);
    ui->label_6->hide();
    ui->label_7->hide();
    ui->label_8->hide();

    QSqlDatabase db = QSqlDatabase::database("sqlite1"); //建立数据库连接
    QSqlQuery query(db);
    QString str=QString("select user_id,user_password from loginuser");
    query.exec(str);
    QString id;
    if(query.next())
    {
        id=query.value(0).toString();
        truepwd=query.value(1).toString();
    }
    ui->label_5->setText(id);
}

pwdChangeCCS::~pwdChangeCCS()
{
    delete ui;
}
void pwdChangeCCS::on_pushButton_clicked()
{
    // 获取用户输入的账号和密码
    QString id = ui->label_5->text();
    QString pwd = ui->lineEdit_2->text();

    int suc = 1;

    // 检查 ifright 数组中的值，如果有一个为0，则表示输入不符合要求
    for(int i = 0; i < 3; i++)
    {
        if(ifright[i] == 0)
            suc = 0;
    }

    // 如果输入不符合要求，则直接返回，不执行密码修改操作
    if(suc == 0)
        return;

    // 建立与名为 "sqlite1" 的数据库的连接
    QSqlDatabase db = QSqlDatabase::database("sqlite1");
    QSqlQuery query(db);

    // 执行 SQL 语句，更新 user_inform 表中对应账号的密码
    QString str = QString("update user_inform set user_password='%1' where user_id='%2'").arg(pwd).arg(id);
    bool a = query.exec(str);

    // 执行 SQL 语句，更新 loginuser 表中对应账号的密码
    QString str1 = QString("update loginuser set user_password='%1' where user_id='%2'").arg(pwd).arg(id);
    bool b = query.exec(str1);

    // 根据执行结果进行相应的处理
    if(a && b)
    {
        // 修改成功
        ifchange = 1;
        QMessageBox::information(this, "修改成功", "修改成功，请重新登录");
        close();
    }
    else
    {
        // 修改失败
        ifchange = 0;
        QMessageBox::critical(this, "操作失败", "修改失败，请检查输入格式");
    }
}

void pwdChangeCCS::on_lineEdit_editingFinished()
{
    // 获取用户输入的旧密码
    QString pwd = ui->lineEdit->text();

    // 检查旧密码是否与真实密码匹配
    if(pwd != truepwd)
    {
        // 不匹配，显示错误提示，并清空输入框
        ifright[0] = 0;
        ui->label_6->show();
        ui->lineEdit->clear();
        return;
    }
    else
    {
        // 匹配，隐藏错误提示
        ifright[0] = 1;
        ui->label_6->hide();
    }
}

void pwdChangeCCS::on_lineEdit_2_editingFinished()
{
    // 获取用户输入的新密码
    QString newpwd = ui->lineEdit_2->text();

    // 检查新密码是否为空
    if(newpwd.isEmpty())
    {
        // 为空，显示错误提示
        ifright[1] = 0;
        ui->label_7->show();
        return;
    }
    else
    {
        // 不为空，隐藏错误提示
        ifright[1] = 1;
        ui->label_7->hide();
    }
}

void pwdChangeCCS::on_lineEdit_3_editingFinished()
{
    // 获取用户输入的新密码和确认密码
    QString newpwd = ui->lineEdit_2->text();
    QString newpwd2 = ui->lineEdit_3->text();

    // 检查新密码和确认密码是否一致
    if(newpwd != newpwd2)
    {
        // 不一致，显示错误提示，并清空输入框
        ifright[2] = 0;
        ui->label_8->show();
        ui->lineEdit_2->clear();
        ui->lineEdit_3->clear();
        return;
    }
    else
    {
        // 一致，隐藏错误提示
        ifright[2] = 1;
        ui->label_8->hide();
    }
}

//三个鼠标移动事件
void pwdChangeCCS::mousePressEvent(QMouseEvent *event)
{
    m_pressed = true;
    m_movePos = event->globalPos() - pos();

    return QDialog::mousePressEvent(event);
}
void pwdChangeCCS::mouseMoveEvent(QMouseEvent *event)
{
    if (m_pressed && (event->buttons()== Qt::LeftButton)
        && (event->globalPos() - m_movePos).manhattanLength() > QApplication::startDragDistance())
    {
        QPoint movePos = event->globalPos() - m_movePos;
        this->move(movePos);
        m_movePos = event->globalPos() - pos();
    }

    return QDialog::mouseMoveEvent(event);
}
void pwdChangeCCS::mouseReleaseEvent(QMouseEvent *event)
{
    m_pressed = false;

    return QDialog::mouseReleaseEvent(event);
}
