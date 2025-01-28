
#include "pwdFind.h"
#include "ui_pwdFind.h"
#include "mainwindow.h"

pwdFindCCS::pwdFindCCS(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::pwback)
{
    ui->setupUi(this);
    ui->lineEdit->setPlaceholderText(" 用户名");
    ui->lineEdit_2->setPlaceholderText(" 手机号");
    ui->lineEdit_3->setPlaceholderText(" 验证码");
}

pwdFindCCS::~pwdFindCCS()
{
    delete ui;
}
//下述为三个鼠标移动事件
void pwdFindCCS::mousePressEvent(QMouseEvent *event)
{
    m_pressed = true;
    m_movePos = event->globalPos() - pos();

    return QDialog::mousePressEvent(event);
}
void pwdFindCCS::mouseMoveEvent(QMouseEvent *event)
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
void pwdFindCCS::mouseReleaseEvent(QMouseEvent *event)
{
    m_pressed = false;

    return QDialog::mouseReleaseEvent(event);
}
