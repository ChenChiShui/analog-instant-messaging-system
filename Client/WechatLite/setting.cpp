#include "setting.h"
#include "mainwindow.h"
#include "ui_setting.h"
#include "pwdChange.h"

settingCCS::settingCCS(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::setting)
{
    ui->setupUi(this);

    setWindowFlags(Qt::FramelessWindowHint | Qt::WindowSystemMenuHint | Qt::WindowMinMaxButtonsHint);
    setFixedSize(this->width(),this->height());

    setAttribute(Qt::WA_TranslucentBackground);
    QGraphicsDropShadowEffect *effect = new QGraphicsDropShadowEffect(this);
//    effect->setOffset(0, 0);          //设置向哪个方向产生阴影效果(dx,dy)，特别地，(0,0)代表向四周发散
//    effect->setColor(Qt::gray);       //设置阴影颜色，也可以setColor(QColor(220,220,220))
//    effect->setBlurRadius(20);        //设定阴影的模糊半径，数值越大越模糊
//    ui->frame->setGraphicsEffect(effect);

    QButtonGroup* pButtonGroup = new QButtonGroup(this);
    pButtonGroup->addButton(ui->checkBox_4, 1);
    pButtonGroup->addButton(ui->checkBox_5, 2);
    pButtonGroup->addButton(ui->checkBox_6, 3);

    // 建立数据库连接
    QSqlDatabase db = QSqlDatabase::database("sqlite1");

    // 创建一个用于执行数据库查询的QSqlQuery对象
    QSqlQuery query(db);

    // 初始化变量jizhu为0
    int jizhu = 0;

    // 执行查询语句，从loginuser表中选择user_id和ifrem列的值
    query.exec("select user_id, ifrem from loginuser");

    // 如果查询结果存在下一行记录
    if (query.next())
    {
        // 将user_id列的值转换为QString并赋给变量id
        id = query.value(0).toString();

        // 将ifrem列的值转换为整数并赋给变量jizhu
        jizhu = query.value(1).toInt();
    }

    // 如果jizhu的值为1
    if (jizhu == 1)
    {
        // 设置ui界面上名为checkBox的复选框的状态为选中
        ui->checkBox->setCheckState(Qt::Checked);

        // 隐藏ui界面上名为label_9的标签
        ui->label_9->hide();

        // 显示ui界面上名为label_8的标签
        ui->label_8->show();
    }
    else
    {
        // 隐藏ui界面上名为label_8的标签
        ui->label_8->hide();

        // 显示ui界面上名为label_9的标签
        ui->label_9->show();
    }

    // 构建查询语句，用变量id的值替换字符串中的占位符'%1'
    QString str = QString("select cansearch, canlookover from userdata where user_id='%1'").arg(id);

    // 执行查询语句
    query.exec(str);

    // 初始化变量search和lookover为1
    int search = 1;
    int lookover = 1;

    // 如果查询结果存在下一行记录
    if (query.next())
    {
        // 将cansearch列的值转换为整数并赋给变量search
        search = query.value(0).toInt();

        // 将canlookover列的值转换为整数并赋给变量lookover
        lookover = query.value(1).toInt();
    }

    // 如果search的值为1
    if (search == 1)
    {
        // 设置ui界面上名为checkBox_2的复选框的状态为选中
        ui->checkBox_2->setCheckState(Qt::Checked);
    }
    else
    {
        // 设置ui界面上名为checkBox_3的复选框的状态为选中
        ui->checkBox_3->setCheckState(Qt::Checked);
    }
    if(lookover==1)
    {
        ui->comboBox->setCurrentText("所有人可见");
    }
    else if(lookover==2)
    {
        ui->comboBox->setCurrentText("仅好友可见");
    }
    else if(lookover==3)
    {
        ui->comboBox->setCurrentText("仅自己可见");
    }
    // 隐藏名为widget的UI部件
    ui->widget->hide();

    // 构建查询语句，用变量id的值替换字符串中的占位符'%1'
    QString str2 = QString("select addway, addquestion, addanswer from userdata where user_id='%1'").arg(id);

    // 执行查询语句
    query.exec(str2);

    // 初始化变量way为1，ques和answ为空字符串
    int way = 1;
    QString ques, answ;

    // 如果查询结果存在下一行记录
    if (query.next())
    {
        // 将addway列的值转换为整数并赋给变量way
        way = query.value(0).toInt();

        // 将addquestion列的值转换为QString并赋给变量ques
        ques = query.value(1).toString();

        // 将addanswer列的值转换为QString并赋给变量answ
        answ = query.value(2).toString();
    }

    // 根据way的值进行条件判断
    if (way == 1)
    {
        // 设置ui界面上名为checkBox_4的复选框的状态为选中
        ui->checkBox_4->setCheckState(Qt::Checked);
    }
    else if (way == 2)
    {
        // 设置ui界面上名为checkBox_5的复选框的状态为选中
        ui->checkBox_5->setCheckState(Qt::Checked);
    }
    else if (way == 3)
    {
        // 设置ui界面上名为checkBox_6的复选框的状态为选中
        ui->checkBox_6->setCheckState(Qt::Checked);

        // 将ques的值设置为ui界面上名为lineEdit_2的文本框的文本
        ui->lineEdit_2->setText(ques);

        // 将answ的值设置为ui界面上名为lineEdit_3的文本框的文本
        ui->lineEdit_3->setText(answ);

        // 显示名为widget的UI部件
        ui->widget->show();
    }
}
settingCCS::~settingCCS()
{
    delete ui;
}
//下面是三个鼠标事件
void settingCCS::mousePressEvent(QMouseEvent *event)
{
    if(ui->label_3->geometry().contains(event->pos())||ui->label_2->geometry().contains(event->pos()))
    {
        m_pressed = true;
        m_movePos = event->globalPos() - pos();
    }

    return QDialog::mousePressEvent(event);
}
void settingCCS::mouseMoveEvent(QMouseEvent *event)
{
    if(ui->label_3->geometry().contains(event->pos())||ui->label_2->geometry().contains(event->pos()))
    {
        if (m_pressed && (event->buttons()== Qt::LeftButton)
            && (event->globalPos() - m_movePos).manhattanLength() > QApplication::startDragDistance())
        {
            QPoint movePos = event->globalPos() - m_movePos;
            this->move(movePos);
            m_movePos = event->globalPos() - pos();
        }
    }

    return QDialog::mouseMoveEvent(event);
}
void settingCCS::mouseReleaseEvent(QMouseEvent *event)
{
    m_pressed = false;

    return QDialog::mouseReleaseEvent(event);
}


void settingCCS::on_pushButton_clicked()
{
     close();
}

void settingCCS::on_pushButton_2_clicked()
{
    showMinimized();
}

void settingCCS::on_checkBox_stateChanged(int arg1)
{
    int rem;

    // 如果复选框的状态为选中（arg1为2）
    if (arg1 == 2)
    {
        rem = 1;

        // 隐藏ui界面上名为label_9的标签
        ui->label_9->hide();

        // 显示ui界面上名为label_8的标签
        ui->label_8->show();
    }
    else
    {
        rem = 0;

        // 隐藏ui界面上名为label_8的标签
        ui->label_8->hide();

        // 显示ui界面上名为label_9的标签
        ui->label_9->show();
    }

    // 建立与名为"sqlite1"的数据库的连接
    QSqlDatabase db = QSqlDatabase::database("sqlite1");

    // 创建一个用于执行数据库查询的QSqlQuery对象
    QSqlQuery query(db);

    // 构建更新语句，用变量rem和id的值替换字符串中的占位符'%1'和'%2'
    QString str = QString("update loginuser set ifrem='%1' where user_id='%2'").arg(rem).arg(id);

    // 执行更新语句
    query.exec(str);
}

void settingCCS::on_pushButton_3_clicked()
{
    // 创建一个pwdChangeCCS对象
    pwdChangeCCS a;

    // 执行pwdChangeCCS对象的exec()函数
    a.exec();

    // 如果a对象的ifchange成员变量为真
    if (a.ifchange)
    {
        // 接受对话框并关闭
        accept();
    }
    else
    {
        // 不做任何操作并返回
        return;
    }
}

void settingCCS::on_checkBox_3_stateChanged(int arg1)
{
    // 建立与名为"sqlite1"的数据库的连接
    QSqlDatabase db = QSqlDatabase::database("sqlite1");

    // 创建一个用于执行数据库查询的QSqlQuery对象
    QSqlQuery query(db);

    // 根据复选框的状态进行条件判断
    if (arg1 == 2)
    {
        // 设置ui界面上名为checkBox_2的复选框的状态为未选中
        ui->checkBox_2->setCheckState(Qt::Unchecked);

        // 初始化变量search为0
        int search = 0;

        // 构建更新语句，用变量search和id的值替换字符串中的占位符'%1'和'%2'
        QString str = QString("update userdata set cansearch='%1' where user_id='%2'").arg(search).arg(id);

        // 执行更新语句
        query.exec(str);
    }
    else if (arg1 == 0)
    {
        // 设置ui界面上名为checkBox_2的复选框的状态为选中
        ui->checkBox_2->setCheckState(Qt::Checked);

        // 初始化变量search为1
        int search = 1;

        // 构建更新语句，用变量search和id的值替换字符串中的占位符'%1'和'%2'
        QString str = QString("update userdata set cansearch='%1' where user_id='%2'").arg(search).arg(id);

        // 执行更新语句
        query.exec(str);
    }
}
void settingCCS::on_checkBox_2_stateChanged(int arg1)
{
    // 当checkBox_2的状态改变时触发该函数。

    if (arg1 == 2)
    {
        // 如果新状态等于2
        ui->checkBox_3->setCheckState(Qt::Unchecked);
        // 将checkBox_3的勾选状态设置为未勾选
    }
    else if (arg1 == 0)
    {
        // 如果新状态等于0
        ui->checkBox_3->setCheckState(Qt::Checked);
        // 将checkBox_3的勾选状态设置为勾选
    }
}

void settingCCS::on_checkBox_4_stateChanged(int arg1)
{
    // 当checkBox_4的状态改变时触发该函数。

    if (arg1 == 2)
    {
        // 如果新状态等于2
        QSqlDatabase db = QSqlDatabase::database("sqlite1");
        // 使用连接名为"sqlite1"建立数据库连接
        QSqlQuery query(db);
        // 创建一个QSqlQuery对象，用于执行数据库查询
        int way = 1;
        // 将way的值设置为1
        QString str = QString("update userdata set addway='%1' where user_id='%2'").arg(way).arg(id);
        // 构造一个SQL更新语句，用于更新userdata表中的addway列
        query.exec(str);
        // 执行SQL查询
    }
    else
    {
        // 如果新状态不等于2
        return;
        // 退出函数
    }
}

void settingCCS::on_checkBox_5_stateChanged(int arg1)
{
    // 当checkBox_5的状态改变时触发该函数。

    if (arg1 == 2)
    {
        // 如果新状态等于2
        QSqlDatabase db = QSqlDatabase::database("sqlite1");
        // 使用连接名为"sqlite1"建立数据库连接
        QSqlQuery query(db);
        // 创建一个QSqlQuery对象，用于执行数据库查询
        int way = 2;
        // 将way的值设置为2
        QString str = QString("update userdata set addway='%1' where user_id='%2'").arg(way).arg(id);
        // 构造一个SQL更新语句，用于更新userdata表中的addway列
        query.exec(str);
        // 执行SQL查询
    }
    else
    {
        // 如果新状态不等于2
        return;
        // 退出函数
    }
}

void settingCCS::on_checkBox_6_stateChanged(int arg1)
{
    // 当checkBox_6的状态改变时触发该函数。

    if (arg1 == 2)
    {
        // 如果新状态等于2
        ui->widget->show();
        // 显示小部件
        QSqlDatabase db = QSqlDatabase::database("sqlite1");
        // 使用连接名为"sqlite1"建立数据库连接
        QSqlQuery query(db);
        // 创建一个QSqlQuery对象，用于执行数据库查询
        int way = 3;
        // 将way的值设置为3
        QString str = QString("update userdata set addway='%1' where user_id='%2'").arg(way).arg(id);
        // 构造一个SQL更新语句，用于更新userdata表中的addway列
        query.exec(str);
        // 执行SQL查询
    }
    else
    {
        // 如果新状态不等于2
        ui->widget->hide();
        // 隐藏小部件
        return;
        // 退出函数
    }
}
void settingCCS::on_lineEdit_2_editingFinished()
{
    QSqlDatabase db = QSqlDatabase::database("sqlite1"); // 建立数据库连接
    QSqlQuery query(db);
    QString ques = ui->lineEdit_2->text();
    QString answ = ui->lineEdit_3->text();
    QString str = QString("update userdata set addquestion='%1',addanswer='%2' where user_id='%3'").arg(ques).arg(answ).arg(id);
    query.exec(str);
}

void settingCCS::on_lineEdit_3_editingFinished()
{
    QSqlDatabase db = QSqlDatabase::database("sqlite1"); // 建立数据库连接
    QSqlQuery query(db);
    QString ques = ui->lineEdit_2->text();
    QString answ = ui->lineEdit_3->text();
    QString str = QString("update userdata set addquestion='%1',addanswer='%2' where user_id='%3'").arg(ques).arg(answ).arg(id);
    query.exec(str);
}

void settingCCS::on_comboBox_activated(const QString &arg1)
{
    QSqlDatabase db = QSqlDatabase::database("sqlite1"); // 建立数据库连接
    QSqlQuery query(db);
    int lookover = 1;
    if (arg1 == "所有人可见")
        lookover = 1;
    else if (arg1 == "仅好友可见")
        lookover = 2;
    else if (arg1 == "仅自己可见")
        lookover = 3;
    query.exec(QString("update userdata set canlookover='%1' where user_id='%2'").arg(lookover).arg(id));
}
