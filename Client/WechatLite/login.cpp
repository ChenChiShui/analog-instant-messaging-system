#include "login.h"
#include "ui_login.h"
#include "mainwindow.h"
#include "loginFind.h"
#include "regist.h"
#include "pwdFind.h"

// 登录对话框的构造函数
loginCCS::loginCCS(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);

    // 设置窗口标志，隐藏窗口边框和系统菜单按钮，保留最小化和最大化按钮
//    setWindowFlags(Qt::FramelessWindowHint | Qt::WindowSystemMenuHint | Qt::WindowMinMaxButtonsHint);
    setFixedSize(this->width(),this->height()); // 设置窗口大小为固定值

    setAttribute(Qt::WA_TranslucentBackground); // 设置窗口背景透明
//    QGraphicsDropShadowEffect *effect = new QGraphicsDropShadowEffect(this);
//    effect->setOffset(0, 0);          // 设置阴影偏移量
//    effect->setColor(Qt::gray);       // 设置阴影颜色
//    effect->setBlurRadius(20);        // 设置阴影模糊半径
//    ui->frame->setGraphicsEffect(effect); // 将阴影效果应用于窗口的一个部件

    ui->lineEdit->setPlaceholderText(" 用户名"); // 设置用户名输入框的占位文本
    ui->lineEdit_2->setPlaceholderText(" 密码"); // 设置密码输入框的占位文本

    ui->lineEdit_2->setEchoMode(QLineEdit::Password); // 设置密码输入框的显示模式为密码模式

    QSqlDatabase db = QSqlDatabase::database("sqlite1"); // 建立数据库连接
    QSqlQuery query(db);
    QString idd, pwd;
    int jizhu = 0;
    query.exec("select * from loginuser"); // 执行查询操作
    if (query.next()) // 获取查询结果的下一行
    {
        idd = query.value(0).toString(); // 获取第一列的值（用户名）
        pwd = query.value(1).toString(); // 获取第二列的值（密码）
        jizhu = query.value(2).toInt();  // 获取第三列的值（记住密码选项）
    }
    ui->lineEdit->setText(idd); // 在用户名输入框中显示用户名
    if (jizhu == 1) // 如果记住密码选项为1（选中状态）
    {
        ui->lineEdit_2->setText(pwd); // 在密码输入框中显示密码
        ui->checkBox_2->setCheckState(Qt::Checked); // 将记住密码的复选框设为选中状态
    }
    query.exec(QString("select touxiang from userdata where user_id='%1'").arg(idd)); // 执行查询操作
    QString toux;
    if (query.next()) // 获取查询结果的下一行
    {
        toux = query.value(0).toString(); // 获取第一列的值（头像路径）
    }
    QPixmap img1;
    img1.load(toux); // 加载头像图片
    if (idd.isEmpty()) // 如果用户名为空
        img1.load(":/image/victoricon2.png"); // 加载默认头像图片
    QPixmap pixMap = img1.scaled(90, 90, Qt::IgnoreAspectRatio, Qt::SmoothTransformation); // 缩放头像图片
//    pixMap = PixmapToRound(pixMap, 45); // 将头像图片裁剪成圆形
    ui->label_7->setPixmap(pixMap); // 在标签中显示头像图片
}


// 将给定的Pixmap对象裁剪成圆形
QPixmap loginCCS::PixmapToRound(const QPixmap &src, int radius)
{
    if (src.isNull()) {
        return QPixmap();
    }
    QSize size(2 * radius, 2 * radius);
    QBitmap mask(size);
    QPainter painter(&mask);
    painter.setRenderHint(QPainter::Antialiasing);
    painter.setRenderHint(QPainter::SmoothPixmapTransform);
    painter.fillRect(0, 0, size.width(), size.height(), Qt::white);
    painter.setBrush(QColor(0, 0, 0));
    painter.drawRoundedRect(0, 0, size.width(), size.height(), 99, 99);
    QPixmap image = src.scaled(size);
    image.setMask(mask);
    return image;
}

void loginCCS::on_pushButton_3_clicked()
{
    // 获取用户输入的用户名和密码
    QString id = ui->lineEdit->text();
    QSqlDatabase db = QSqlDatabase::database("sqlite1"); // 建立数据库连接
    QSqlQuery query(db);
    QString str = QString("select user_password from user_inform where user_id='%1'").arg(id);
    query.exec(str);
    QString truepw;
    if (query.next())
    {
        truepw = query.value(0).toString();
    }
    // 检查密码是否匹配
    if (ui->lineEdit_2->text() != "" && ui->lineEdit_2->text() == truepw)
    {
        trueid = id;
        int rem = 0;
        if (ui->checkBox_2->isChecked())
            rem = 1;
        query.exec("delete from loginuser");
        QString str1 = QString("insert into loginuser(user_id,user_password,ifrem) values('%1','%2','%3')").arg(id).arg(truepw).arg(rem);
        query.exec(str1);
        accept(); // 接受登录操作
    }
    else
    {
        loginFindCCS a;
        a.exec();
        ui->lineEdit_2->clear();
        ui->lineEdit_2->setFocus(); // 将光标移到密码框内
    }
}

void loginCCS::on_pushButton_clicked()
{
    close(); // 关闭当前窗口
}

void loginCCS::on_pushButton_2_clicked()
{
    showMinimized(); // 最小化当前窗口
}

void loginCCS::on_pushButton_4_clicked()
{
    registCCS a;
    a.exec(); // 显示注册对话框
}

void loginCCS::on_pushButton_5_clicked()
{
    pwdFindCCS a;
    a.exec(); // 显示找回密码对话框
}

void loginCCS::on_lineEdit_editingFinished()
{
    // 获取用户输入的用户名
    QString idd = ui->lineEdit->text();

    // 建立与数据库的连接
    QSqlDatabase db = QSqlDatabase::database("sqlite1");
    QSqlQuery query(db);

    // 在数据库中查询对应用户的头像路径
    query.exec(QString("select touxiang from userdata where user_id='%1'").arg(idd));
    QString toux;
    if (query.next())
    {
        toux = query.value(0).toString();
    }

    // 加载头像图片
    QPixmap img1;
    img1.load(toux);

    // 将头像图片缩放并裁剪成圆形
    QPixmap pixMap = img1.scaled(90, 90, Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
    pixMap = PixmapToRound(pixMap, 45);

    // 在标签中显示裁剪后的头像图片

    //ui->label_7->setPixmap(pixMap);
}

// 登录对话框的析构函数
loginCCS::~loginCCS()
{
    delete ui;
}

// 鼠标按下事件处理函数
void loginCCS::mousePressEvent(QMouseEvent *event)
{
    m_pressed = true;
    m_movePos = event->globalPos() - pos();

    return QDialog::mousePressEvent(event);
}// 处理鼠标移动事件
void loginCCS::mouseMoveEvent(QMouseEvent *event)
{
    // 检查鼠标左键是否按下、鼠标移动距离是否超过阈值
    if (m_pressed && (event->buttons() == Qt::LeftButton)
        && (event->globalPos() - m_movePos).manhattanLength() > QApplication::startDragDistance())
    {
        // 计算窗口移动的位置
        QPoint movePos = event->globalPos() - m_movePos;
        this->move(movePos);
        m_movePos = event->globalPos() - pos();
    }

    return QDialog::mouseMoveEvent(event);
}


// 处理鼠标释放事件
void loginCCS::mouseReleaseEvent(QMouseEvent *event)
{
    m_pressed = false;

    return QDialog::mouseReleaseEvent(event);
}

QString loginCCS::getid()
{
    return trueid;
}
