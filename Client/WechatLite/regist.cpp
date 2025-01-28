#include "mainwindow.h"
#include "regist.h"
#include "ui_regist.h"

// 注册界面的构造函数
registCCS::registCCS(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::regist)
{
    ui->setupUi(this);

    // 设置占位文本
    ui->lineEdit->setPlaceholderText(" 用户名");
    ui->lineEdit_2->setPlaceholderText(" 密码");
    ui->lineEdit_3->setPlaceholderText(" 手机号");
    ui->lineEdit_4->setPlaceholderText(" 再次输入密码");

    // 设置密码输入框的显示模式为密码
    // 隐藏密码
    ui->lineEdit_2->setEchoMode(QLineEdit::Password);
    ui->lineEdit_4->setEchoMode(QLineEdit::Password);

    // 隐藏一些标签和小部件
    ui->label_3->hide();
    ui->label_4->hide();
    ui->label_5->hide();
    ui->label_6->hide();
    ui->label_7->hide();
    ui->widget->hide();
}

// 注册界面的析构函数
registCCS::~registCCS()
{
    delete ui;
}

// 鼠标按下事件
void registCCS::mousePressEvent(QMouseEvent *event)
{
    m_pressed = true;
    m_movePos = event->globalPos() - pos();

    // 调用父类的鼠标按下事件
    return QDialog::mousePressEvent(event);
}

// 鼠标移动事件
void registCCS::mouseMoveEvent(QMouseEvent *event)
{
    // 判断是否按下鼠标左键并且移动的距离大于启动拖动的距离
    if (m_pressed && (event->buttons() == Qt::LeftButton)
        && (event->globalPos() - m_movePos).manhattanLength() > QApplication::startDragDistance())
    {
        // 计算移动后的位置，并移动窗口
        QPoint movePos = event->globalPos() - m_movePos;
        this->move(movePos);
        m_movePos = event->globalPos() - pos();
    }

    // 调用父类的鼠标移动事件
    return QDialog::mouseMoveEvent(event);
}

// 鼠标释放事件
void registCCS::mouseReleaseEvent(QMouseEvent *event)
{
    m_pressed = false;

    // 调用父类的鼠标释放事件
    return QDialog::mouseReleaseEvent(event);
}

// 注册按钮点击事件
void registCCS::on_pushButton_clicked()
{
    // 设置随机数种子
    qsrand(QTime(0, 0, 0).secsTo(QTime::currentTime()));

    // 判断是否已经注册了5个用户
    int flr = 1;
    for (int i = 0; i < 5; i++)
    {
        if (ifregist[i] == 0)
        {
            flr = 0;
            break;
        }
    }
    if (flr == 0)
        return;

    // 建立与数据库的连接
    QSqlDatabase db = QSqlDatabase::database("sqlite1");
    QSqlQuery query(db);

    // 获取用户输入的用户名、密码、手机号
    QString name = ui->lineEdit->text();
    QString password = ui->lineEdit_2->text();
    QString password2 = ui->lineEdit_4->text();
    QString phone = ui->lineEdit_3->text();

    int sex = 1;
    int search = 1;
    int add = 2;
    int lookover = 1;
    QString toux = ":/image/CCS.jpg";//设置默认头像

    QString id;
    bool flagg = false;

    // 生成唯一的用户ID
    while (flagg == false)
    {
        flagg = true;
        int idnumber = qrand() % 10000;//用一个不重复的随机数
        id = QString::number(idnumber, 10);
        query.exec("select user_id from user_infrom");
        while (query.next())
        {
            QString oldid = query.value(0).toString();
            if (id == oldid)//检测是否重复
            {
                flagg = false;
                break;
            }
        }
    }

    // 构造插入数据库的SQL语句
    QString str = QString("insert into user_inform(user_id, user_password, phonenumber) values('%1', '%2', '%3')").arg(id).arg(password).arg(phone);
    QString str2 = QString("insert into userdata(user_id,user_name,user_sex,phonenumber,cansearch,canlookover,addway,touxiang) values('%1','%2','%3','%4','%5','%6','%7','%8')").arg(id).arg(name).arg(sex).arg(phone).arg(search).arg(lookover).arg(add).arg(toux);
    QString str3 = QString("insert into userfriend(user_id) values('%1')").arg(id);
    QString str4 = QString("insert into talklist(user_id) values('%1')").arg(id);

    // 执行SQL语句插入数据，并判断是否成功
    bool flag = query.exec(str);
    bool flag2 = query.exec(str2);
    bool flag3 = query.exec(str3);
    bool flag4 = query.exec(str4);

    // 根据插入结果显示注册成功或失败的信息
    if (flag && flag2 && flag3 && flag4)
    {
        ui->widget->show();
        ui->label_10->setText(id);
        ui->label_10->adjustSize();
        int a = ui->label_10->width();
        int b = ui->label_10->y();
        ui->label_10->move(260 - a / 2, b);
    }
    else// 错误显示
    {
        QMessageBox::warning(this, "注册失败", "请检查你的输入格式");
    }
}void registCCS::on_lineEdit_4_editingFinished()//检测密码是否匹配
{
    // 获取密码和确认密码的文本内容
    QString password = ui->lineEdit_2->text();
    QString password2 = ui->lineEdit_4->text();

    // 检查密码和确认密码是否匹配
    if (password != password2)
    {
        // 如果不匹配，设置第一个注册标志为0，显示密码不匹配的提示信息，并清空密码和确认密码输入框的内容
        ifregist[0] = 0;
        ui->label_5->show();
        ui->lineEdit_2->clear();
        ui->lineEdit_4->clear();
        return;
    }
    else
    {
        // 如果匹配，设置第一个注册标志为1，隐藏密码不匹配的提示信息
        ifregist[0] = 1;
        ui->label_5->hide();
    }
}

void registCCS::on_lineEdit_2_editingFinished()//检测密码
{
    // 获取密码的文本内容
    QString password = ui->lineEdit_2->text();

    // 检查密码是否为空
    if (password.isEmpty())
    {
        // 如果为空，设置第二个注册标志为0，显示密码为空的提示信息
        ifregist[1] = 0;
        ui->label_4->show();
        return;
    }
    else
    {
        // 如果不为空，设置第二个注册标志为1，隐藏密码为空的提示信息
        ifregist[1] = 1;
        ui->label_4->hide();
    }
}

void registCCS::on_lineEdit_editingFinished()//检查用户名是
{
    // 获取用户名的文本内容
    QString name = ui->lineEdit->text();

    // 检查用户名是否为空
    if (name.isEmpty())
    {
        // 如果为空，设置第三个注册标志为0，显示用户名为空的提示信息
        ifregist[2] = 0;
        ui->label_3->show();
        return;
    }
    else
    {
        // 如果不为空，设置第三个注册标志为1，隐藏用户名为空的提示信息
        ifregist[2] = 1;
        ui->label_3->hide();
    }
}

void registCCS::on_lineEdit_3_editingFinished()
{
    // 获取手机号的文本内容
    QString phone = ui->lineEdit_3->text();

    // 检查手机号是否为空
    if (phone.isEmpty())
    {
        // 如果为空，设置第四个注册标志为0，显示手机号为空的提示信息
        ifregist[3] = 0;
        ui->label_6->show();
        return;
    }
    else
    {
        // 如果不为空，设置第四个注册标志为1，隐藏手机号为空的提示信息
        ifregist[3] = 1;
        ui->label_6->hide();
    }

    // 检查手机号长度是否为4
    if (phone.length() != 11)
    {
        // 如果长度不为11，设置第五个注册标志为0，显示手机号格式错误的提示信息
        ifregist[4] = 0;
        ui->label_7->show();
        return;
    }
    else
    {
        // 如果长度为11，设置第五个注册标志为1，隐藏手机号格式错误的提示信息
        ifregist[4] = 1;
        ui->label_7->hide();
    }
}

void registCCS::on_pushButton_2_clicked()
{
    // 关闭当前注册界面
    close();
}
