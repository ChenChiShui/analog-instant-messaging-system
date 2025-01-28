#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "login.h"
#include "group.h"
#include <QVBoxLayout>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ip_address=getHostIpAddress();
        /////文件传送相关变量初始化
        ///每次发送数据大小为64kb
        perDataSize = 64*1024;
        totalBytes = 0;
        bytestoWrite = 0;
        bytesWritten = 0;
        bytesReceived = 0;
        filenameSize = 0;

        connect(this->ui->pushButton_10,SIGNAL(clicked()),this,SLOT(selectFile()));
        //connect(this->ui.pushButton_sendFile,SIGNAL(clicked()),this,SLOT(sendFile()));


    ui->textEdit->installEventFilter(this);
    setWindowFlags(Qt::FramelessWindowHint | Qt::WindowSystemMenuHint | Qt::WindowMinMaxButtonsHint);
    setFixedSize(this->width(),this->height());

    setAttribute(Qt::WA_TranslucentBackground);
    QGraphicsDropShadowEffect *effect = new QGraphicsDropShadowEffect(this);
    effect->setOffset(0, 0);          //设置向哪个方向产生阴影效果(dx,dy)，特别地，(0,0)代表向四周发散
    effect->setColor(Qt::gray);       //设置阴影颜色，也可以setColor(QColor(220,220,220))
    effect->setBlurRadius(20);        //设定阴影的模糊半径，数值越大越模糊
    ui->frame->setGraphicsEffect(effect);

    loginCCS a;
    ifopen=true;
    if(a.exec()==QDialog::Accepted)
    {
        nowid=a.getid();
        initTCP();
        initial_friendlist();
        initial_talklist();
        a.close();
        this->show();
    }
    else
    {
        ifopen=false;
    }
    ui->lineEdit->setPlaceholderText(" 搜索");
    ui->lineEdit->setStyleSheet("border:gray");
    ui->lineEdit_2->setPlaceholderText(" 搜索");
    ui->lineEdit_2->setStyleSheet("border:gray");
    ui->textEdit->setStyleSheet("border:gray");
    ui->listWidget_3->setStyleSheet("border:gray");
    ui->label_17->setStyleSheet("background:red; border-radius:5px;");
    ui->label_17->setAttribute(Qt::WA_TransparentForMouseEvents, true);
    ui->label_18->setAttribute(Qt::WA_TransparentForMouseEvents, true);
    ui->label_20->setAttribute(Qt::WA_TransparentForMouseEvents, true);
    ui->pushButton_24->hide();
    ui->widget_2->hide();
    ui->widget_3->hide();
    ui->widget_4->hide();
    ui->widget_5->hide();
    ui->listWidget->setFrameShape(QListWidget::NoFrame);
    ui->listWidget_4->setFrameShape(QListWidget::NoFrame);

    ui->listWidget->setStyleSheet("QListWidget{background:rgb(238, 247, 255);}"
                                  "QListWidget::item:hover{background-color:rgb(200, 230, 250);}"
                                  "QListWidget::item:selected{background-color:rgb(170, 210, 250);}"
                                  "QListWidget{outline:0px;}"
                                  "QListWidget::item{background-color:rgb(225, 240, 250);}");
    ui->listWidget->verticalScrollBar()->setStyleSheet("QScrollArea{border:0px solid;"
                                                       "border-radius: 2px;}"
                                                       "QScrollBar:vertical{width: 4px;border:0px solid;"
                                                       "border-radius: 2px;margin: 0px,0px,0px,0px;"
                                                       "background-color: transparent;background:#e1f0fa;}"
                                                       "QScrollBar:vertical:hover{width: 4px;"
                                                       "border:0px solid;margin: 0px,0px,0px,0px;background:#e1f0fa;}"
                                                       "QScrollBar::handle:vertical{width:4px;background:#c0ddee;"
                                                       "border-radius: 2px;height: 40px;}"
                                                       "QScrollBar::handle:vertical:hover{background:#c0ddee;"
                                                       "border-radius: 2px;}"
                                                       "QScrollBar::add-line:vertical{height:11px;background-color: transparent;"
                                                       "subcontrol-position:bottom;border:0px solid;"
                                                       "border-radius: 2px;}"
                                                       "QScrollBar::sub-line:vertical{height:11px;"
                                                       "background-color: transparent;subcontrol-position:top;"
                                                       "border:0px solid;border-radius: 2px;}"
                                                       "QScrollBar::add-page:vertical{background-color: #e1f0fa;"
                                                       "border:0px solid;border-radius: 2px;}"
                                                       "QScrollBar::sub-page:vertical{background-color: #e1f0fa;"
                                                       "border:0px solid;border-radius: 2px;}"
                                                       "QScrollBar::up-arrow:vertical{"
                                                       "border:0px solid;border-radius: 3px;}"
                                                       "QScrollBar::down-arrow:vertical {"
                                                       "border:0px solid;border-radius: 3px;}");

    ui->listWidget_2->setStyleSheet("QListWidget{background:rgb(238, 247, 255);border:0px;}"
                                  "QListWidget::item:hover{background-color:rgb(200, 230, 250);}"
                                  "QListWidget::item:selected{background-color:rgb(170, 210, 250);}"
                                  "QListWidget{outline:0px;}"
                                  "QListWidget::item{background-color:rgb(225, 240, 250);}");
    ui->listWidget_2->verticalScrollBar()->setStyleSheet("QScrollArea{border:0px solid;"
                                                       "border-radius: 2px;}"
                                                       "QScrollBar:vertical{width: 4px;border:0px solid;"
                                                       "border-radius: 2px;margin: 0px,0px,0px,0px;"
                                                       "background-color: transparent;background:#e1f0fa;}"
                                                       "QScrollBar:vertical:hover{width: 4px;"
                                                       "border:0px solid;margin: 0px,0px,0px,0px;background:#e1f0fa;}"
                                                       "QScrollBar::handle:vertical{width:4px;background:#c0ddee;"
                                                       "border-radius: 2px;height: 40px;}"
                                                       "QScrollBar::handle:vertical:hover{background:#c0ddee;"
                                                       "border-radius: 2px;}"
                                                       "QScrollBar::add-line:vertical{height:11px;background-color: transparent;"
                                                       "subcontrol-position:bottom;border:0px solid;"
                                                       "border-radius: 2px;}"
                                                       "QScrollBar::sub-line:vertical{height:11px;"
                                                       "background-color: transparent;subcontrol-position:top;"
                                                       "border:0px solid;border-radius: 2px;}"
                                                       "QScrollBar::add-page:vertical{background-color: #e1f0fa;"
                                                       "border:0px solid;border-radius: 2px;}"
                                                       "QScrollBar::sub-page:vertical{background-color: #e1f0fa;"
                                                       "border:0px solid;border-radius: 2px;}"
                                                       "QScrollBar::up-arrow:vertical{"
                                                       "border:0px solid;border-radius: 3px;}"
                                                       "QScrollBar::down-arrow:vertical {"
                                                       "border:0px solid;border-radius: 3px;}");
    ui->listWidget_3->setStyleSheet("QListWidget{background-color: rgb(245, 249, 253);border:0px;}"
                                  "QListWidget{outline:0px;}"
                                  "QListWidget::item{background-color: rgb(245, 249, 253);}");
    ui->listWidget_3->verticalScrollBar()->setStyleSheet("QScrollArea{border:0px solid;"
                                                       "border-radius: 5px;}"
                                                       "QScrollBar:vertical{width: 10px;border:0px solid;"
                                                       "border-radius: 5px;margin: 0px,0px,0px,0px;"
                                                       "background-color: transparent;background:#e1f0fa;}"
                                                       "QScrollBar:vertical:hover{width: 10px;"
                                                       "border:0px solid;margin: 0px,0px,0px,0px;background:#e1f0fa;}"
                                                       "QScrollBar::handle:vertical{width:10px;background:#c0ddee;"
                                                       "border-radius: 5px;height: 40px;}"
                                                       "QScrollBar::handle:vertical:hover{background:#c0ddee;"
                                                       "border-radius: 5px;}"
                                                       "QScrollBar::add-line:vertical{height:11px;background-color: transparent;"
                                                       "subcontrol-position:bottom;border:0px solid;"
                                                       "border-radius: 5px;}"
                                                       "QScrollBar::sub-line:vertical{height:11px;"
                                                       "background-color: transparent;subcontrol-position:top;"
                                                       "border:0px solid;border-radius: 5px;}"
                                                       "QScrollBar::add-page:vertical{background-color: #e1f0fa;"
                                                       "border:0px solid;border-radius: 5px;}"
                                                       "QScrollBar::sub-page:vertical{background-color: #e1f0fa;"
                                                       "border:0px solid;border-radius: 5px;}"
                                                       "QScrollBar::up-arrow:vertical{"
                                                       "border:0px solid;border-radius: 3px;}"
                                                       "QScrollBar::down-arrow:vertical {"
                                                       "border:0px solid;border-radius: 3px;}");
    ui->listWidget_4->setStyleSheet("QListWidget{background:rgb(238, 247, 255);}"
                                  "QListWidget::item:hover{background-color:rgb(200, 230, 250);}"
                                  "QListWidget::item:selected{background-color:rgb(170, 210, 250);}"
                                  "QListWidget{outline:0px;}"
                                  "QListWidget::item{background-color:rgb(225, 240, 250);}");
    ui->listWidget_4->verticalScrollBar()->setStyleSheet("QScrollArea{border:0px solid;"
                                                       "border-radius: 2px;}"
                                                       "QScrollBar:vertical{width: 4px;border:0px solid;"
                                                       "border-radius: 2px;margin: 0px,0px,0px,0px;"
                                                       "background-color: transparent;background:#e1f0fa;}"
                                                       "QScrollBar:vertical:hover{width: 4px;"
                                                       "border:0px solid;margin: 0px,0px,0px,0px;background:#e1f0fa;}"
                                                       "QScrollBar::handle:vertical{width:4px;background:#c0ddee;"
                                                       "border-radius: 2px;height: 40px;}"
                                                       "QScrollBar::handle:vertical:hover{background:#c0ddee;"
                                                       "border-radius: 2px;}"
                                                       "QScrollBar::add-line:vertical{height:11px;background-color: transparent;"
                                                       "subcontrol-position:bottom;border:0px solid;"
                                                       "border-radius: 2px;}"
                                                       "QScrollBar::sub-line:vertical{height:11px;"
                                                       "background-color: transparent;subcontrol-position:top;"
                                                       "border:0px solid;border-radius: 2px;}"
                                                       "QScrollBar::add-page:vertical{background-color: #e1f0fa;"
                                                       "border:0px solid;border-radius: 2px;}"
                                                       "QScrollBar::sub-page:vertical{background-color: #e1f0fa;"
                                                       "border:0px solid;border-radius: 2px;}"
                                                       "QScrollBar::up-arrow:vertical{"
                                                       "border:0px solid;border-radius: 3px;}"
                                                       "QScrollBar::down-arrow:vertical {"
                                                       "border:0px solid;border-radius: 3px;}");

    connect(ui->listWidget->action1,SIGNAL(clicked()), this, SLOT(send_message()));
    connect(ui->listWidget->action2,SIGNAL(clicked()), this, SLOT(delete_frd()));
    connect(ui->listWidget->action3,SIGNAL(clicked()), this, SLOT(frdinform_display()));
    connect(ui->listWidget_2->action1,SIGNAL(clicked()), this, SLOT(set_top()));
    connect(ui->listWidget_2->action2,SIGNAL(clicked()), this, SLOT(delete_talk()));
    connect(ui->listWidget_2->action3,SIGNAL(clicked()), this, SLOT(talkto()));
}

MainWindow::~MainWindow()
{
    delete ui;
}
// 客户端方法
QString MainWindow::getHostIpAddress()
{
    QString strIpAddress;
    QList<QHostAddress> ipAddressesList = QNetworkInterface::allAddresses();
    // 获取第一个本主机的IPv4地址
    int nListSize = ipAddressesList.size();
    for (int i = 0; i < nListSize; ++i)
    {
        // 如果当前地址不是本地主机地址且为IPv4地址
        if (ipAddressesList.at(i) != QHostAddress::LocalHost &&
            ipAddressesList.at(i).toIPv4Address()) {
            // 将当前地址转换为字符串形式
            strIpAddress = ipAddressesList.at(i).toString();
            break;
        }
    }
    // 如果没有找到有效地址，则以本地IP地址为IP
    if (strIpAddress.isEmpty())
        strIpAddress = QHostAddress(QHostAddress::LocalHost).toString();
    return strIpAddress;
}

// 初始化TCP连接
void MainWindow::initTCP()
{
    // 创建QTcpSocket对象
    this->tcpSocket = new QTcpSocket(this);
    // 连接服务器
    connectServer();
}

// 连接服务器
void MainWindow::connectServer()
{
    // 中断当前连接
    tcpSocket->abort();
    // 连接到指定的IP地址和端口号
    tcpSocket->connectToHost(ip_address, 6666);
    // 当有数据可读时触发readyRead()信号，调用receiveData()槽函数
    connect(tcpSocket, SIGNAL(readyRead()), this, SLOT(receiveData()));
}

// 断开与服务器的连接
void MainWindow::disconnectServer()
{
    // 显示错误提示框
    QMessageBox::warning(this, "错误", "请检查网络或服务器设置");
}

// 处理消息
void MainWindow::dealMessage(messageChatCCS *messageW, QListWidgetItem *item, QString text, QString time, messageChatCCS::User_Type type)
{
    // 设置消息窗口的固定宽度为列表控件的宽度
    messageW->setFixedWidth(ui->listWidget_3->width());
    // 根据消息内容计算消息窗口的大小
    QSize size = messageW->fontRect(text);
    // 设置列表项的大小为消息窗口的大小
    item->setSizeHint(size);
    // 设置消息窗口的文本、时间、大小和类型
    messageW->setText(text, time, size, type);
    // 将消息窗口设置为列表项的控件
    ui->listWidget_3->setItemWidget(item, messageW);
}// 处理消息时间
void MainWindow::dealMessageTime(QString curMsgTime)
{
    bool isShowTime = false;
    if (ui->listWidget_3->count() > 0) {
        // 获取最后一个列表项
        QListWidgetItem* lastItem = ui->listWidget_3->item(ui->listWidget_3->count() - 1);
        // 获取最后一个列表项对应的消息窗口
        messageChatCCS* messageW = qobject_cast<messageChatCCS*>(ui->listWidget_3->itemWidget(lastItem));
        int lastTime = messageW->time().toInt();
        int curTime = curMsgTime.toInt();
        qDebug() << "curTime lastTime:" << curTime - lastTime;
        // 判断当前消息时间与最后一条消息时间是否相差一分钟以上
        isShowTime = ((curTime - lastTime) > 60); // 两个消息相差一分钟
//        isShowTime = true;
    }
    else
    {
        isShowTime = true;
    }
    if (isShowTime)
    {
        // 创建消息时间窗口
        messageChatCCS* messageTime = new messageChatCCS(ui->listWidget_3->parentWidget(), nowid, ui->listWidget_2->frdid);
        // 创建消息时间列表项
        QListWidgetItem* itemTime = new QListWidgetItem(ui->listWidget_3);
        QSize size = QSize(ui->listWidget_3->width(), 40);
        messageTime->resize(size);
        itemTime->setSizeHint(size);
        // 设置消息时间窗口的文本、时间、大小和类型
        messageTime->setText(curMsgTime, curMsgTime, size, messageChatCCS::User_Time);
        // 将消息时间窗口设置为消息时间列表项的控件
        ui->listWidget_3->setItemWidget(itemTime, messageTime);
    }
}

// 接收数据
void MainWindow::receiveData()
{
    QString msg;
    // 读取所有可用数据
    msg.prepend(tcpSocket->readAll());
    // 使用"|"分割消息字符串
    QStringList msglist = msg.split("|");
    if (msglist[1] != nowid)
        return;
    int flag = 0;
    for (int i = 0; i < ui->listWidget_2->count(); i++)
    {
        // 获取列表项
        QListWidgetItem* item = ui->listWidget_2->item(i);
        QWidget* pwig = ui->listWidget_2->itemWidget(item);
        // 查找该列表项下的所有QLineEdit控件
        QList<QLineEdit*> linedList = pwig->findChildren<QLineEdit*>();
        foreach(QLineEdit* lined, linedList)
        {
            if (!lined->text().isEmpty())
            {
                QString frdid = lined->text();
                if (frdid == msglist[0])
                {
                    flag = 1;
                    // 设置列表项为选中状态
                    item->setSelected(true);
                    ui->listWidget_2->frdid = msglist[0];
                    set_top();
                }
            }
        }
    }
    if (flag == 0)
    {
        QString oldfid = ui->listWidget->frdid;
        ui->listWidget->frdid = msglist[0];
        send_message();
        ui->listWidget->frdid = oldfid;
    }
    QString time = QString::number(QDateTime::currentDateTime().toTime_t()); // 时间戳
    // 处理消息时间
    dealMessageTime(time);
    // 创建消息窗口
    messageChatCCS* messageW = new messageChatCCS(ui->listWidget_3->parentWidget(), nowid, msglist[0]);
    // 创建列表项
    QListWidgetItem* item = new QListWidgetItem(ui->listWidget_3);
    // 处理消息
    dealMessage(messageW, item, msglist[2], time, messageChatCCS::User_She);
}

void MainWindow::on_pushButton_11_clicked()
{
    // 获取文本框中的消息内容
    QString msg = ui->textEdit->toPlainText();
    if (msg.isEmpty())
    {
        // 如果消息为空，则设置焦点到文本框，并返回
        ui->textEdit->setFocus();
        return;
    }
    // 清空文本框内容
    ui->textEdit->setText("");
    // 获取当前时间的时间戳
    QString time = QString::number(QDateTime::currentDateTime().toTime_t()); // 时间戳
    bool isSending = true; // 发送中
    //if(ui->listWidget_3->count()%2)
    //{
        if (isSending)
        {
            // 处理消息时间
            dealMessageTime(time);
            // 创建消息窗口
            messageChatCCS* messageW = new messageChatCCS(ui->listWidget_3->parentWidget(), nowid, ui->listWidget_2->frdid);
            // 创建列表项
            QListWidgetItem* item = new QListWidgetItem(ui->listWidget_3);
            // 处理消息
            dealMessage(messageW, item, msg, time, messageChatCCS::User_Me);
        }
        /*else
        {
            bool isOver = true;
            for(int i = ui->listWidget_3->count()-1; i>0; i--)
            {
                QNChatMessage* messageW = qobject_cast<QNChatMessage*>(ui->listWidget_3->itemWidget(ui->listWidget_3->item(i)));
                if(messageW->text() == msg)
                {
                    isOver = false;
                    messageW->setTextSuccess();
                }
            }
            if(isOver)
            {
                dealMessageTime(time);
                QNChatMessage* messageW = new QNChatMessage(ui->listWidget_3->parentWidget());
                QListWidgetItem* item = new QListWidgetItem(ui->listWidget_3);
                dealMessage(messageW, item, msg, time, QNChatMessage::User_Me);
                messageW->setTextSuccess();
            }

        }
    else
    {
        if(msg != "")
        {
            dealMessageTime(time);
            QNChatMessage* messageW = new QNChatMessage(ui->listWidget_3->parentWidget());
            QListWidgetItem* item = new QListWidgetItem(ui->listWidget_3);
            dealMessage(messageW, item, msg, time, QNChatMessage::User_She);
        }
    }*/
    // 设置当前选择的列表项为最后一个列表项
    ui->listWidget_3->setCurrentRow(ui->listWidget_3->count() - 1);
    // 构造发送的消息字符串
    QString fid = ui->listWidget_2->frdid;
    msg = nowid + "|" + fid + "|" + msg;
    // 写入TCP套接字发送消息
    this->tcpSocket->write(msg.toUtf8());
}
void MainWindow::send_message()
{
    // 设置焦点到文本框
    ui->textEdit->setFocus();
    // 清空列表控件
    ui->listWidget_3->clear();
    // 设置当前标签页为第三个标签页
    ui->tabWidget->setCurrentWidget(ui->tab_3);
    // 获取当前选中的好友ID
    QString fid = ui->listWidget->frdid;
    // 建立与名为"sqlite1"的数据库的连接
    QSqlDatabase db = QSqlDatabase::database("sqlite1");
    QSqlQuery query(db);
    // 查询当前用户的好友列表
    QString str = QString("select user_friend from talklist where user_id='%1'").arg(nowid);
    query.exec(str);
    QString frdlist1, frdlist2;
    if (query.next())
    {
        frdlist1 = query.value(0).toString();
    }
    // 查询好友的用户名和头像
    QString str1 = QString("select user_name,touxiang from userdata where user_id='%1'").arg(fid);
    query.exec(str1);
    QString name;
    QString toux;
    if (query.next())
    {
        name = query.value(0).toString();
        toux = query.value(1).toString();
    }
    // 获取当前好友列表的项数
    int num = ui->listWidget_2->count();
    if (num == 0)
    {
        // 更新数据库中的好友列表
        query.exec(QString("update talklist set user_friend='%1' where user_id='%2'").arg(fid).arg(nowid));
        // 创建新的列表项和控件
        QWidget *widget = new QWidget(this);
        QLabel *touLabel = new QLabel(widget);
        QLabel *namelabel = new QLabel(widget);
        QLineEdit *idlinet = new QLineEdit(widget);

        // 设置控件样式
        widget->setStyleSheet("background: transparent");
        namelabel->setFixedSize(180, 30);
        namelabel->move(80, 10);
        namelabel->setText(name);
        namelabel->setAlignment(Qt::AlignLeft);
        namelabel->setAlignment(Qt::AlignVCenter);
        QFont font("微软雅黑", 10, 50);
        namelabel->setFont(font);
        namelabel->setStyleSheet("color: rgb(70, 70, 70)");
        touLabel->setFixedSize(50, 50);
        touLabel->move(15, 15);
        QPixmap pixmap = QPixmap(toux);
        QPixmap fitpixmap = pixmap.scaled(50, 50, Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
        touLabel->setPixmap(fitpixmap);
        touLabel->setScaledContents(true);
        idlinet->setText(fid);
        idlinet->hide();
        QListWidgetItem *item = new QListWidgetItem;
        QSize size = item->sizeHint();
        item->setSizeHint(QSize(size.width(), 80));
        ui->listWidget_2->addItem(item);
        widget->setSizeIncrement(size.width(), 80);
        ui->listWidget_2->setItemWidget(item, widget);
        item->setSelected(true);
        ui->listWidget_2->frdid = fid;
    }
    else
    {
        int flag = 0;
        // 遍历好友列表中的项，查找是否已存在该好友
        for (int i = 0; i < num; i++)
        {
            QListWidgetItem *olditem = ui->listWidget_2->item(i);
            QWidget *pwig = ui->listWidget_2->itemWidget(olditem);
            QList<QLineEdit *> linedList = pwig->findChildren<QLineEdit *>();
            foreach (QLineEdit *lined, linedList)
            {
                if (!lined->text().isEmpty())
                {
                    if (fid == lined->text())
                    {
                        flag = 1;
                        olditem->setSelected(true);
                        break;
                    }
                }
            }
        }
        if (flag == 0)
        {
            // 更新数据库中的好友列表
            frdlist2 = frdlist1 + "|" + fid;
            query.exec(QString("update talklist set user_friend='%1' where user_id='%2'").arg(frdlist2).arg(nowid));
            // 创建新的列表项和控件
            QWidget *widget = new QWidget(this);
            QLabel *touLabel = new QLabel(widget);
            QLabel *namelabel = new QLabel(widget);
            QLineEdit *idlinet = new QLineEdit(widget);
            // 设置控件样式
            widget->setStyleSheet("background: transparent");
            namelabel->setFixedSize(180, 30);
            namelabel->move(80, 10);
            namelabel->setText(name);
            namelabel->setAlignment(Qt::AlignLeft);
            namelabel->setAlignment(Qt::AlignVCenter);
            QFont font("微软雅黑", 10, 50);
            namelabel->setFont(font);
            namelabel->setStyleSheet("color: rgb(70, 70, 70)");
            touLabel->setFixedSize(50, 50);
            touLabel->move(15, 15);
            QPixmap pixmap = QPixmap(toux);
            QPixmap fitpixmap = pixmap.scaled(50, 50, Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
            touLabel->setPixmap(fitpixmap);
            touLabel->setScaledContents(true);
            idlinet->setText(fid);
            idlinet->hide();
            QListWidgetItem *item = new QListWidgetItem;
            QSize size = item->sizeHint();
            item->setSizeHint(QSize(size.width(), 80));
            ui->listWidget_2->insertItem(0, item);
            widget->setSizeIncrement(size.width(), 80);
            ui->listWidget_2->setItemWidget(item, widget);
            item->setSelected(true);
            ui->listWidget_2->frdid = fid;
        }
    }
}
void MainWindow::selectFile()
{
    this->fileSocket = new QTcpSocket(this); // 创建一个QTcpSocket对象fileSocket
    fileSocket->abort(); // 中止之前的连接
    fileSocket->connectToHost(ip_address, 8888); // 连接到指定的主机地址和端口号

    // 文件传送进度更新信号与槽的连接
    connect(fileSocket, SIGNAL(bytesWritten(qint64)), this, SLOT(updateFileProgress(qint64)));
    connect(fileSocket, SIGNAL(readyRead()), this, SLOT(updateFileProgress()));

    // 打开文件选择对话框，获取用户选择的文件名
    this->filename = QFileDialog::getOpenFileName(this, "Open a file", "/", "files (*)");
}

void MainWindow::sendFile()
{
    this->localFile = new QFile(filename); // 创建一个QFile对象localFile，以选定的文件名作为参数
    if (!localFile->open(QFile::ReadOnly)) // 以只读方式打开文件
    {
        QMessageBox::critical(this, "失败", "文件传输失败");
        return;
    }

    // 获取文件大小
    this->totalBytes = localFile->size();

    QDataStream sendout(&outBlock, QIODevice::WriteOnly); // 创建一个QDataStream对象sendout，将其与outBlock关联
    sendout.setVersion(QDataStream::Qt_4_8); // 设置数据流的版本，使用Qt 4.8版本

    // 从文件路径中提取文件名
    QString currentFileName = filename.right(filename.size() - filename.lastIndexOf('/') - 1);

    qDebug() << sizeof(currentFileName); // 输出currentFileName的大小

    // 保留总代大小信息空间、文件名大小信息空间、文件名
    sendout << qint64(0) << qint64(0) << currentFileName;

    totalBytes += outBlock.size(); // 更新总字节数，包括用于存储文件大小和文件名大小的空间
    sendout.device()->seek(0); // 重新设置数据流的读写位置为起始位置
    sendout << totalBytes << qint64((outBlock.size() - sizeof(qint64) * 2)); // 在空间中写入总字节数和文件名大小

    bytestoWrite = totalBytes - fileSocket->write(outBlock); // 计算还需要发送的字节数
    outBlock.resize(0); // 清空发送缓冲区
}

void MainWindow::updateFileProgress(qint64 numBytes)
{
    // 已经发送的数据大小
    bytesWritten += (int)numBytes;

    // 如果已经发送了数据
    if (bytestoWrite > 0)
    {
        outBlock = localFile->read(qMin(bytestoWrite, perDataSize)); // 从文件中读取一部分数据
        // 发送完一次数据后还剩余数据的大小
        bytestoWrite -= ((int)fileSocket->write(outBlock));
        outBlock.resize(0); // 清空发送缓冲区
    }
    else
    {
        localFile->close(); // 文件发送完毕，关闭文件
    }

    // 如果发送完毕
    if (bytesWritten == totalBytes)
    {
        localFile->close(); // 关闭文件
    }
}

void MainWindow::updateFileProgress()
{
    QDataStream inFile(this->fileSocket); // 创建一个QDataStream对象inFile，将其与fileSocket关联
    inFile.setVersion(QDataStream::Qt_4_8); // 设置数据流的版本，使用Qt 4.8版本

    // 如果接收到的数据小于16个字节，保存到来的文件头结构
    if (bytesReceived <= sizeof(qint64) * 2)
    {
        if ((fileSocket->bytesAvailable() >= (sizeof(qint64)) * 2) && (filenameSize == 0))
        {
            inFile >> totalBytes >> filenameSize; // 从数据流中读取总字节数和文件名大小
            bytesReceived += sizeof(qint64) * 2; // 更新已接收的字节数
        }
        if ((fileSocket->bytesAvailable() >= filenameSize) && (filenameSize != 0))
        {
            inFile >> filename; // 从数据流中读取文件名
            bytesReceived += filenameSize; // 更新已接收的字节数
            filename = "ServerData/" + filename; // 拼接文件保存路径localFile = new QFile(filename); // 创建一个QFile对象localFile，以拼接后的文件名作为参数

            if (!localFile->open(QFile::WriteOnly)) // 以只写方式打开文件
            {
                qDebug() << "Server::open file error!";
                return;
            }
        }
        else
        {
            return;
        }
    }

    // 如果接收的数据小于总数据，则写入文件
    if (bytesReceived < totalBytes)
    {
        bytesReceived += fileSocket->bytesAvailable(); // 更新已接收的字节数
        inBlock = fileSocket->readAll(); // 读取所有可用数据
        localFile->write(inBlock); // 将数据写入文件
        inBlock.resize(0); // 清空接收缓冲区
    }

    // 数据接收完成时
    if (bytesReceived == totalBytes)
    {
        qDebug() << "Receive file successfully!";
        bytesReceived = 0;
        totalBytes = 0;
        filenameSize = 0;
        localFile->close(); // 关闭文件
    }
}
void MainWindow::initial_friendlist()
{
    ui->listWidget->clear(); // 清空列表控件

    QSqlDatabase db = QSqlDatabase::database("sqlite1"); // 建立数据库连接
    QSqlQuery query(db);

    // 查询当前用户的头像信息
    query.exec(QString("select touxiang from userdata where user_id='%1'").arg(nowid));
    QString toux;
    if(query.next())
    {
        toux=query.value(0).toString();
    }

    QPixmap touxiang;
    touxiang.load(toux);

    // 设置按钮的图标为当前用户的头像
    ui->pushButton_6->setIcon(touxiang);

    QString str = QString("select user_friend from userfriend where user_id='%1'").arg(nowid);
    query.exec(str);

    QString frd;
    if(query.next())
    {
        frd = query.value(0).toString();
    }

    if(frd.isEmpty())
        return;

    QStringList frdlist = frd.split("|");

    // 遍历好友列表
    for(int i = 0; i < frdlist.count(); i++)
    {
        QString str1 = QString("select user_name,touxiang from userdata where user_id='%1'").arg(frdlist[i]);
        query.exec(str1);

        QString name;
        QString toux;
        if(query.next())
        {
            name = query.value(0).toString();
            toux = query.value(1).toString();
        }

        // 创建QWidget和相关控件
        QWidget *widget = new QWidget(this);
        QLabel *touLabel = new QLabel(widget);
        QLabel *namelabel = new QLabel(widget);
        QLineEdit *idlinet = new QLineEdit(widget);

        // 设置不同控件的样式
        widget->setStyleSheet(" background: transparent");
        namelabel->setFixedSize(180, 60);
        namelabel->move(80, 10);
        namelabel->setText(name);
        namelabel->setAlignment(Qt::AlignLeft);
        namelabel->setAlignment(Qt::AlignVCenter);
        QFont font("微软雅黑", 11, 50);
        namelabel->setFont(font);
        namelabel->setStyleSheet("color: rgb(70,70,70)");
        touLabel->setFixedSize(50, 50);
        touLabel->move(15, 15);
        QPixmap pixmap = QPixmap(toux);
        QPixmap fitpixmap = pixmap.scaled(50, 50, Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
        touLabel->setPixmap(fitpixmap);
        touLabel->setScaledContents(true);
        idlinet->setText(frdlist[i]);
        idlinet->hide();

        QListWidgetItem *item = new QListWidgetItem;
        QSize size = item->sizeHint();
        item->setSizeHint(QSize(size.width(), 80));

        ui->listWidget->addItem(item);
        widget->setSizeIncrement(size.width(), 80);
        ui->listWidget->setItemWidget(item, widget);
    }
}
void MainWindow::initial_talklist()
{
    ui->listWidget_2->clear();
    QSqlDatabase db = QSqlDatabase::database("sqlite1"); //建立数据库连接
    QSqlQuery query(db);
    query.exec(QString("select touxiang from userdata where user_id='%1'").arg(nowid));
    QString toux;
    if(query.next())
        {
            toux=query.value(0).toString();
        }
    QPixmap touxiang;
    touxiang.load(toux);
    ui->pushButton_6->setIcon(touxiang);
    QString str=QString("select user_friend from talklist where user_id='%1'").arg(nowid);
    query.exec(str);
    QString frd;
    if(query.next())
    {
        frd=query.value(0).toString();
    }
    if(frd.isEmpty())return;
    QStringList frdlist=frd.split("|");
    for(int i=0;i<frdlist.count();i++)
    {
        QString str1=QString("select user_name,touxiang from userdata where user_id='%1'").arg(frdlist[i]);
        query.exec(str1);
        QString name;
        QString toux;
        if(query.next())
        {
            name=query.value(0).toString();
            toux=query.value(1).toString();
        }
        QWidget *widget=new QWidget(this);
        QLabel *touLabel = new QLabel(widget);
        QLabel *namelabel=new QLabel(widget);
        QLineEdit *idlinet=new QLineEdit(widget);

        //设置不同控件的样式
        widget->setStyleSheet(" background: transparent");
        namelabel->setFixedSize(180,30);
        namelabel->move(80,10);
        namelabel->setText(name);
        namelabel->setAlignment(Qt::AlignLeft);
        namelabel->setAlignment(Qt::AlignVCenter);
        QFont font("微软雅黑",10,50);
        namelabel->setFont(font);
        namelabel->setStyleSheet("color: rgb(70,70,70)");
        touLabel->setFixedSize(50,50);
        //touLabel->setStyleSheet("background:red; border-radius:15px;color:white;");
        touLabel->move(15,15);
        QPixmap pixmap=QPixmap(toux);
        QPixmap fitpixmap = pixmap.scaled(50, 50, Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
        touLabel->setPixmap(fitpixmap);
        touLabel-> setScaledContents(true);
        //QIcon icon3(":/image/WeCloudIcon2.png");
        idlinet->setText(frdlist[i]);
        idlinet->hide();
        QListWidgetItem *item=new QListWidgetItem;
        QSize size = item->sizeHint();
        item->setSizeHint(QSize(size.width(), 80));
        ui->listWidget_2->addItem(item);
        widget->setSizeIncrement(size.width(), 80);
        ui->listWidget_2->setItemWidget(item, widget);
        item->setSelected(true);
        ui->listWidget_2->frdid=frdlist[i];
    }
}


void MainWindow::frdinform_display()
{
    ui->widget_5->show();  // 显示名为widget_5的UI部件

    QString fid = ui->listWidget->frdid;  // 从listWidget的frdid属性中获取好友ID

    QSqlDatabase db = QSqlDatabase::database("sqlite1");  // 建立名为sqlite1的数据库连接
    QSqlQuery query(db);  // 在数据库上创建查询对象

    QString str = QString("select user_name,user_sex,year,month,date,user_state,user_city,signature,canlookover,touxiang from userdata where user_id='%1'").arg(fid);
    // 构建SQL查询语句，选择userdata表中user_id等于fid的行，并选择特定的列

    query.exec(str);  // 执行查询语句

    // 以下变量用于存储从查询结果中提取的数据
    QString name;
    int sex = 1;
    QString yearr;
    QString monthh;
    QString datee;
    QString state;
    QString city;
    QString sign;
    int lookover = 1;
    QString toux;

    if (query.next())  // 如果查询结果存在
    {
        // 从查询结果中提取数据并存储在相应的变量中
        name = query.value(0).toString();
        sex = query.value(1).toInt();
        yearr = query.value(2).toString();
        monthh = query.value(3).toString();
        datee = query.value(4).toString();
        state = query.value(5).toString();
        city = query.value(6).toString();
        sign = query.value(7).toString();
        lookover = query.value(8).toInt();
        toux = query.value(9).toString();
    }

    if (lookover == 1 || lookover == 2)  // 如果lookover的值为1或2
    {
        ui->label_24->setText(fid);  // 设置label_24的文本为好友ID

        if (!name.isEmpty())  // 如果姓名不为空
        {
            ui->label_22->setText(name);  // 设置label_22的文本为姓名
            ui->label_22->adjustSize();  // 调整label_22的大小以适应文本
            int a = ui->label_22->width();
            int b = ui->label_22->y();
            ui->label_22->move(235 - a / 2, b);  // 将label_22水平居中
        }
        else
        {
            ui->label_22->setText("");  // 如果姓名为空，设置label_22的文本为空
            ui->label_22->adjustSize();  // 调整label_22的大小以适应文本
            int a = ui->label_22->width();
            int b = ui->label_22->y();
            ui->label_22->move(235 - a / 2, b);  // 将label_22水平居中
        }

        if (sex == 1)  // 如果性别为1
        {
            int aa = ui->label_22->width();
            int bb = ui->label_22->y();
            ui->label_23->move(235 + aa / 2 + 1, bb);  // 将label_23放置在label_22右边
            ui->label_23->show();  // 显示label_23
            ui->label_33->hide();  // 隐藏label_33
        }
        else  // 如果性别不为1
        {
            int aa = ui->label_22->width();
            int bb = ui->label_22->y();
            ui->label_33->move(235 + aa / 2 + 1, bb);  // 将label_33放置在label_22右边
            ui->label_23->hide();  // 隐藏label_23
            ui->label_33->show();  // 显示label_33
        }

        if (!yearr.isEmpty())  // 如果年份不为空
        {
            ui->label_25->setText(yearr + " " + monthh + " " + datee);  // 设置label_25的文本为年份、月份和日期
        }

        // 其他待添加的逻辑和代码注释...
        if(!state.isEmpty())
            ui->label_26->setText("- -");
        QPixmap pixmap=QPixmap(toux);
        QPixmap fitpixmap = pixmap.scaled(121, 121, Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
        ui->label_21->setPixmap(fitpixmap);
    }
}
void MainWindow::delete_frd()
{
    QString fid = ui->listWidget->frdid;  // 获取要删除的好友ID

    QSqlDatabase db = QSqlDatabase::database("sqlite1");  // 建立名为sqlite1的数据库连接
    QSqlQuery query(db);  // 在数据库上创建查询对象

    // 查询当前用户的好友列表
    QString stq = QString("select user_friend from userfriend where user_id='%1'").arg(nowid);
    query.exec(stq);

    QString frd;
    if (query.next())
    {
        frd = query.value(0).toString();  // 获取查询结果中的好友列表
    }

    QStringList frdlist = frd.split("|");  // 将好友列表拆分为字符串列表
    frdlist.removeOne(fid);  // 从列表中移除要删除的好友ID
    QString frd1 = frdlist.join("|");  // 将列表重新连接为字符串
    QString str = QString("update userfriend set user_friend='%1' where user_id='%2'").arg(frd1).arg(nowid);
    // 构建更新当前用户的好友列表的SQL语句
    query.exec(str);  // 执行更新操作

    // 查询要删除的好友的好友列表
    QString sts = QString("select user_friend from userfriend where user_id='%1'").arg(fid);
    query.exec(sts);

    QString frd2;
    if (query.next())
    {
        frd2 = query.value(0).toString();  // 获取查询结果中的好友列表
    }

    QStringList frdlist1 = frd2.split("|");  // 将好友列表拆分为字符串列表
    frdlist1.removeOne(nowid);  // 从列表中移除当前用户ID
    QString frd3 = frdlist1.join("|");  // 将列表重新连接为字符串
    QString stx = QString("update userfriend set user_friend='%1' where user_id='%2'").arg(frd3).arg(fid);
    // 构建更新要删除的好友的好友列表的SQL语句
    query.exec(stx);  // 执行更新操作

    initial_friendlist();  // 更新好友列表显示
    ui->widget_5->hide();  // 隐藏widget_5部件
}
void MainWindow::set_top()
{
    int num = ui->listWidget_2->count();  // 获取listWidget_2中的项数
    QString fid = ui->listWidget_2->frdid;  // 获取当前项的好友ID

    // 遍历listWidget_2中的每一项
    for (int i = 0; i < num; i++)
    {
        QListWidgetItem *olditem = ui->listWidget_2->item(i);  // 获取当前项
        QWidget* pwig = ui->listWidget_2->itemWidget(olditem);  // 获取当前项的部件
        QList<QLineEdit*> linedList = pwig->findChildren<QLineEdit*>();  // 在当前部件中查找QLineEdit控件

        // 遍历当前部件中的每个QLineEdit控件
        foreach(QLineEdit *lined, linedList)
        {
            if (!lined->text().isEmpty())
            {
                if (fid == lined->text())  // 如果好友ID与当前QLineEdit的文本一致
                {
                    ui->listWidget_2->takeItem(i);  // 移除当前项

                    QSqlDatabase db = QSqlDatabase::database("sqlite1");  // 建立名为sqlite1的数据库连接
                    QSqlQuery query(db);  // 在数据库上创建查询对象

                    QString str1 = QString("select user_name,touxiang from userdata where user_id='%1'").arg(fid);
                    // 查询好友名称和头像路径的SQL语句
                    query.exec(str1);  // 执行查询操作

                    QString name;
                    QString toux;
                    if (query.next())
                    {
                        name = query.value(0).toString();  // 获取查询结果中的好友名称
                        toux = query.value(1).toString();  // 获取查询结果中的头像路径
                    }

                    QWidget *widget = new QWidget(this);  // 创建新的部件
                    QLabel *touLabel = new QLabel(widget);  // 创建显示头像的标签
                    QLabel *namelabel = new QLabel(widget);  // 创建显示好友名称的标签
                    QLineEdit *idlinet = new QLineEdit(widget);  // 创建存储好友ID的文本框

                    widget->setStyleSheet(" background: transparent");  // 设置部件的样式表
                    namelabel->setFixedSize(180, 30);
                    namelabel->move(80, 10);
                    namelabel->setText(name);  // 设置好友名称的文本
                    namelabel->setAlignment(Qt::AlignLeft);
                    namelabel->setAlignment(Qt::AlignVCenter);
                    QFont font("微软雅黑", 10, 50);
                    namelabel->setFont(font);
                    namelabel->setStyleSheet("color: rgb(70, 70, 70)");  // 设置好友名称的样式表
                    touLabel->setFixedSize(50, 50);
                    touLabel->move(15, 15);
                    QPixmap pixmap = QPixmap(toux);  // 加载头像图片
                    QPixmap fitpixmap = pixmap.scaled(50, 50, Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
                    touLabel->setPixmap(fitpixmap);  // 设置头像标签显示的图片
                    touLabel->setScaledContents(true);
                    idlinet->setText(fid);  // 设置好友ID的文本
                    idlinet->hide();  // 隐藏好友ID的文本框

                    QListWidgetItem *item = new QListWidgetItem;
                    QSize size = item->sizeHint();
                    item->setSizeHint(QSize(size.width(), 80));  // 设置项的大小
                    ui->listWidget_2->insertItem(0, item);  // 在列表中插入项
                    widget->setSizeIncrement(size.width(), 80);
                    ui->listWidget_2->setItemWidget(item, widget);  // 在列表项中设置部件
                    item->setSelected(true);  // 选中当前项
                    break;  // 结束循环
                }
            }
        }
    }
}
void MainWindow::delete_talk()
{
    int num = ui->listWidget_2->count();  // 获取listWidget_2中的项数
    QString fid = ui->listWidget_2->frdid;  // 获取当前项的好友ID

    // 遍历listWidget_2中的每一项
    for (int i = 0; i < num; i++)
    {
        QListWidgetItem *olditem = ui->listWidget_2->item(i);  // 获取当前项
        QWidget* pwig = ui->listWidget_2->itemWidget(olditem);  // 获取当前项的部件
        QList<QLineEdit*> linedList = pwig->findChildren<QLineEdit*>();  // 在当前部件中查找QLineEdit控件

        // 遍历当前部件中的每个QLineEdit控件
        foreach(QLineEdit *lined, linedList)
        {
            if (!lined->text().isEmpty())
            {
                if (fid == lined->text())  // 如果好友ID与当前QLineEdit的文本一致
                {
                    ui->listWidget_2->takeItem(i);  // 移除当前项
                    break;  // 结束循环
                }
            }
        }
    }

    QSqlDatabase db = QSqlDatabase::database("sqlite1");  // 建立名为sqlite1的数据库连接
    QSqlQuery query(db);  // 在数据库上创建查询对象

    QString stq = QString("select user_friend from talklist where user_id='%1'").arg(nowid);
    // 查询当前用户的好友列表的SQL语句
    query.exec(stq);  // 执行查询操作

    QString frd;
    if (query.next())
    {
        frd = query.value(0).toString();  // 获取查询结果中的好友列表
    }

    QStringList frdlist = frd.split("|");  // 将好友列表按"|"分割为字符串列表
    frdlist.removeOne(fid);  // 从好友列表中移除指定的好友ID
    QString frd1 = frdlist.join("|");  // 将更新后的好友列表重新组合为字符串
    QString str = QString("update talklist set user_friend='%1' where user_id='%2'").arg(frd1).arg(nowid);
    // 更新当前用户的好友列表的SQL语句
    query.exec(str);  // 执行更新操作

    QString sts = QString("select user_friend from talklist where user_id='%1'").arg(fid);
    // 查询好友的好友列表的SQL语句
    query.exec(sts);  // 执行查询操作

    QString frd2;
    if (query.next())
    {
        frd2 = query.value(0).toString();  // 获取查询结果中的好友的好友列表
    }

    QStringList frdlist1 = frd2.split("|");  // 将好友的好友列表按"|"分割为字符串列表
    frdlist1.removeOne(nowid);  // 从好友的好友列表中移除当前用户的ID
    QString frd3 = frdlist1.join("|");  // 将更新后的好友的好友列表重新组合为字符串
    QString stx = QString("update talklist set user_friend='%1' where user_id='%2'").arg(frd3).arg(fid);
    // 更新好友的好友列表的SQL语句
    query.exec(stx);  // 执行更新操作
}

void MainWindow::talkto()
{
    ui->listWidget_3->clear();  // 清空listWidget_3中的内容
    QString fid = ui->listWidget_2->frdid;  // 获取当前选中项的好友ID

    QSqlDatabase db = QSqlDatabase::database("sqlite1");  // 建立名为sqlite1的数据库连接
    QSqlQuery query(db);  // 在数据库上创建查询对象

    query.exec("delete from talkuser");  // 删除talkuser表中的所有记录
    query.exec(QString("insert into talkuser (user_id) values('%1')").arg(fid));
    // 向talkuser表中插入指定好友ID的记录
}

void MainWindow::mousePressEvent(QMouseEvent *event)
{
    m_pressed = true;  // 标记鼠标按下事件发生
    m_movePos = event->globalPos() - pos();  // 记录鼠标按下时的位置与窗口位置的差值

    return QMainWindow::mousePressEvent(event);
}

void MainWindow::mouseMoveEvent(QMouseEvent *event)
{
    if (m_pressed
        && (event->buttons() == Qt::LeftButton)
        && (event->globalPos() - m_movePos).manhattanLength() > QApplication::startDragDistance())
    {
        QPoint movePos = event->globalPos() - m_movePos;  // 计算窗口应该移动到的位置
        this->move(movePos);  // 移动窗口到新位置
        m_movePos = event->globalPos() - pos();  // 更新鼠标移动时的位置与窗口位置的差值
    }

    return QMainWindow::mouseMoveEvent(event);
}

void MainWindow::mouseReleaseEvent(QMouseEvent *event)
{
    m_pressed = false;  // 标记鼠标释放事件发生

    return QMainWindow::mouseReleaseEvent(event);
}

bool MainWindow::eventFilter(QObject *target, QEvent *event)
{
    if (target == ui->textEdit)  // 如果事件目标是textEdit控件
    {
        if (event->type() == QEvent::KeyPress)  // 捕捉按键事件
        {
            QKeyEvent *k = static_cast<QKeyEvent *>(event);
            if (k->key() == Qt::Key_Return)  // 如果按下的是回车键
            {
                on_pushButton_11_clicked();  // 调用按钮的点击事件响应函数
                return true;  // 告知事件已处理
            }
        }
    }
    return QWidget::eventFilter(target, event);
}
/*void MainWindow::resizeEvent(QResizeEvent *event)

{
    Q_UNUSED(event)
    ui->textEdit->resize(ui->listWidget_3->width() - 20, ui->widget->height() - 20);
    for(int i = 0; i < ui->listWidget_3->count(); i++)
    {
        QNChatMessage* messageW = qobject_cast<QNChatMessage*>(ui->listWidget_3->itemWidget(ui->listWidget_3->item(i)));
        QListWidgetItem* item = ui->listWidget_3->item(i);
        dealMessage(messageW, item, messageW->text(), messageW->time(), messageW->userType());
    }

}*/

void MainWindow::on_pushButton_2_clicked()
{
    bool a=QProcess::startDetached("C:\\Program Files (x86)\\Tencent\\QQ\\Bin\\QQScLauncher.exe",QStringList());
    if(!a)QDesktopServices::openUrl(QUrl("https://im.qq.com/pcqq"));
}

void MainWindow::on_pushButton_clicked()
{
    bool a=QProcess::startDetached("C:\\Program Files (x86)\\Tencent\\WeChat\\WeChat.exe",QStringList());
    if(!a)QDesktopServices::openUrl(QUrl("https://weixin.qq.com"));
}

void MainWindow::on_pushButton_3_clicked()
{
    QDesktopServices::openUrl(QUrl("https://www.weibo.com"));
}

void MainWindow::on_pushButton_4_clicked()
{
    close();
}

void MainWindow::on_pushButton_5_clicked()
{
    showMinimized();
}

void MainWindow::on_pushButton_7_clicked()
{
    settingCCS a;
    loginCCS b;
    if(a.exec()==QDialog::Accepted)
    {
       this->hide();
        if(b.exec()==QDialog::Accepted)
        {
            ui->widget_3->hide();
            ui->widget_4->hide();
            ui->widget_5->hide();
            ui->pushButton_8->setChecked(false);
            ui->pushButton_15->setChecked(false);
            nowid=b.getid();
            initial_friendlist();
            initial_talklist();
            b.close();
            this->show();
        }
    }
    else
    {
        ifopen=false;
    }
}

void MainWindow::on_pushButton_15_clicked(bool checked)
{
    if(!checked)
    {
        ui->widget_3->hide();
    }
    else ui->widget_3->show();
}

void MainWindow::on_pushButton_6_clicked()
{
    tellsCCS a(nowid);
    a.exec();
    QSqlDatabase db = QSqlDatabase::database("sqlite1"); //建立数据库连接
    QSqlQuery query(db);
    query.exec(QString("select touxiang from userdata where user_id='%1'").arg(nowid));
    QString toux;
    if(query.next())
    {
        toux=query.value(0).toString();
    }
    ui->pushButton_6->setIcon(QIcon(toux));
}
void MainWindow::on_pushButton_17_clicked()
{
    // 隐藏主窗口
    this->hide();

    // 创建 loginCCS 对话框的实例
    loginCCS a;

    // 执行 loginCCS 对话框并检查是否被接受
    if (a.exec() == QDialog::Accepted)
    {
        // 从 loginCCS 对话框中获取 ID
        nowid = a.getid();

        // 执行好友列表和聊天列表的初始化
        initial_friendlist();
        initial_talklist();

        // 隐藏特定的小部件
        ui->widget_3->hide();
        ui->widget_4->hide();
        ui->widget_5->hide();

        // 取消选中特定的按钮
        ui->pushButton_8->setChecked(false);
        ui->pushButton_15->setChecked(false);

        // 关闭 loginCCS 对话框
        a.close();

        // 显示主窗口
        this->show();
    }
    else
    {
        // 设置一个标志，表示登录不成功
        ifopen = false;
    }
}

void MainWindow::on_pushButton_19_clicked()
{
    // 隐藏 widget_2
    ui->widget_2->hide();
}

void MainWindow::on_pushButton_16_clicked()
{
    // 显示 widget_2，隐藏 widget_3，并取消选中 pushButton_15
    ui->widget_2->show();
    ui->widget_3->hide();
    ui->pushButton_15->setChecked(false);
}

void MainWindow::on_pushButton_8_clicked(bool checked)
{
    // 如果 pushButton_8 未选中，则隐藏 widget_4；否则显示它
    if (!checked)
    {
        ui->widget_4->hide();
    }
    else
    {
        ui->widget_4->show();
    }
}

void MainWindow::on_pushButton_20_clicked()
{
    // 创建 newFriendCCS 对话框的实例
    newFriendCCS a;

    // 隐藏 widget_4，并取消选中 pushButton_8
    ui->widget_4->hide();
    ui->pushButton_8->setChecked(false);

    // 执行 newFriendCCS 对话框
    a.exec();

    // 执行好友列表的初始化
    initial_friendlist();
}

void MainWindow::on_pushButton_21_clicked()
{
    // 创建一个指向 groupCCS 对话框的指针
    groupCCS *a = new groupCCS;

    // 显示 groupCCS 对话框
    a->show();
}

//建立数据库的按钮
void MainWindow::on_pushButton_23_clicked()
{
    ui->listWidget_3->clear();
    ui->tabWidget->setCurrentWidget(ui->tab_3);
    QString fid=ui->label_24->text();
    QSqlDatabase db = QSqlDatabase::database("sqlite1"); //建立数据库连接
    QSqlQuery query(db);
    query.exec("delete from talkuser");
    query.exec(QString("insert into talkuser (user_id) values('%1')").arg(fid));
    QString str1=QString("select user_name,touxiang from userdata where user_id='%1'").arg(fid);
    query.exec(str1);
    QString name;
    QString toux;
    if(query.next())
    {
        name=query.value(0).toString();
        toux=query.value(1).toString();
    }
    int num=ui->listWidget_2->count();
    if(num==0)
    {
        QWidget *widget=new QWidget(this);
        QLabel *touLabel = new QLabel(widget);
        QLabel *namelabel=new QLabel(widget);
        QLineEdit *idlinet=new QLineEdit(widget);

        //设置不同控件的样式
        widget->setStyleSheet(" background: transparent");
        namelabel->setFixedSize(180,30);
        namelabel->move(80,10);
        namelabel->setText(name);
        namelabel->setAlignment(Qt::AlignLeft);
        namelabel->setAlignment(Qt::AlignVCenter);
        QFont font("微软雅黑",10,50);
        namelabel->setFont(font);
        namelabel->setStyleSheet("color: rgb(70,70,70)");
        touLabel->setFixedSize(50,50);
        //touLabel->setStyleSheet("background:red; border-radius:15px;color:white;");
        touLabel->move(15,15);
        QPixmap pixmap=QPixmap(toux);
        QPixmap fitpixmap = pixmap.scaled(50, 50, Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
        touLabel->setPixmap(fitpixmap);
        touLabel-> setScaledContents(true);
        //QIcon icon3(":/image/WeCloudIcon2.png");
        idlinet->setText(fid);
        idlinet->hide();
        QListWidgetItem *item=new QListWidgetItem;
        QSize size = item->sizeHint();
        item->setSizeHint(QSize(size.width(), 80));
        ui->listWidget_2->addItem(item);
        widget->setSizeIncrement(size.width(), 80);
        ui->listWidget_2->setItemWidget(item, widget);
        item->setSelected(true);
    }
    else
    {
        int flag=0;
        for(int i=0;i<num;i++)
        {
            QListWidgetItem *olditem=ui->listWidget_2->item(i);
            QWidget* pwig = ui->listWidget_2->itemWidget(olditem);
            QList<QLineEdit*> linedList = pwig->findChildren<QLineEdit*>();
            foreach(QLineEdit *lined, linedList)
            {
                if(!lined->text().isEmpty())
                {
                    if(fid==lined->text())
                    {
                        flag=1;
                        olditem->setSelected(true);
                        break;
                    }
                }
            }
        }
        if(flag==0)
        {
            QWidget *widget=new QWidget(this);
            QLabel *touLabel = new QLabel(widget);
            QLabel *namelabel=new QLabel(widget);
            QLineEdit *idlinet=new QLineEdit(widget);

            //设置不同控件的样式
            widget->setStyleSheet(" background: transparent");
            namelabel->setFixedSize(180,30);
            namelabel->move(80,10);
            namelabel->setText(name);
            namelabel->setAlignment(Qt::AlignLeft);
            namelabel->setAlignment(Qt::AlignVCenter);
            QFont font("微软雅黑",10,50);
            namelabel->setFont(font);
            namelabel->setStyleSheet("color: rgb(70,70,70)");
            touLabel->setFixedSize(50,50);
            //touLabel->setStyleSheet("background:red; border-radius:15px;color:white;");
            touLabel->move(15,15);
            QPixmap pixmap=QPixmap(toux);
            QPixmap fitpixmap = pixmap.scaled(50, 50, Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
            touLabel->setPixmap(fitpixmap);
            touLabel-> setScaledContents(true);
            //QIcon icon3(":/image/WeCloudIcon2.png");
            idlinet->setText(fid);
            idlinet->hide();
            QListWidgetItem *item=new QListWidgetItem;
            QSize size = item->sizeHint();
            item->setSizeHint(QSize(size.width(), 80));
            ui->listWidget_2->insertItem(0,item);
            widget->setSizeIncrement(size.width(), 80);
            ui->listWidget_2->setItemWidget(item, widget);
            item->setSelected(true);
        }
    }
}



//用另一个对象模拟微信
void MainWindow::on_pushButton_25_clicked()
{
    MainWindow g;
    loginCCS a;
    g.show();
}

void MainWindow::on_lineEdit_2_textChanged(const QString &arg1)
{
    ui->pushButton_24->show(); // 显示 pushButton_24 按钮

    if (!arg1.isEmpty()) { // 检查 arg1 是否非空
        int num = ui->listWidget->count(); // 获取 listWidget 中的项数

        for (int i = 0; i < num; i++) { // 遍历 listWidget 中的每一项
            QListWidgetItem *olditem = ui->listWidget->item(i); // 获取当前项
            QWidget* pwig = ui->listWidget->itemWidget(olditem); // 获取当前项关联的小部件
            QList<QLabel*> linedList = pwig->findChildren<QLabel*>(); // 在小部件中查找所有的 QLabel 小部件

            foreach (QLabel *lined, linedList) { // 遍历找到的 QLabel 小部件
                if (!lined->text().isEmpty()) { // 检查 QLabel 的文本是否非空
                    if (lined->text().contains(arg1, Qt::CaseInsensitive)) { // 检查 QLabel 的文本是否包含 arg1（不区分大小写）
                        QList<QLineEdit*> linedList2 = pwig->findChildren<QLineEdit*>(); // 在小部件中查找所有的 QLineEdit 小部件

                        foreach (QLineEdit *lined2, linedList2) { // 遍历找到的 QLineEdit 小部件
                            if (!lined2->text().isEmpty()) { // 检查 QLineEdit 的文本是否非空
                                QSqlDatabase db = QSqlDatabase::database("sqlite1"); // 建立数据库连接
                                QSqlQuery query(db);
                                QString str1 = QString("select user_name, touxiang from userdata where user_id='%1'").arg(lined2->text());
                                query.exec(str1);
                                QString name;
                                QString toux;

                                if (query.next()) {
                                    name = query.value(0).toString(); // 从查询结果中获取姓名
                                    toux = query.value(1).toString(); // 从查询结果中获取头像
                                }

                                QWidget *widget = new QWidget(this);
                                QLabel *touLabel = new QLabel(widget);
                                QLabel *namelabel = new QLabel(widget);
                                QLineEdit *idlinet = new QLineEdit(widget);

                                widget->setStyleSheet("background: transparent");
                                namelabel->setFixedSize(180, 60);
                                namelabel->move(80, 10);
                                namelabel->setText(name); // 设置 namelabel 的文本为获取的姓名
                                namelabel->setAlignment(Qt::AlignLeft);
                                namelabel->setAlignment(Qt::AlignVCenter);
                                QFont font("微软雅黑", 11, 50);
                                namelabel->setFont(font);
                                namelabel->setStyleSheet("color: rgb(70,70,70)");
                                touLabel->setFixedSize(50, 50);
                                touLabel->move(15, 15);
                                QPixmap pixmap = QPixmap(toux);
                                QPixmap fitpixmap = pixmap.scaled(50, 50, Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
                                touLabel->setPixmap(fitpixmap);
                                touLabel->setScaledContents(true);
                                idlinet->setText(lined2->text());
                                idlinet->hide();

                                QListWidgetItem *item = new QListWidgetItem;
                                QSize size = item->sizeHint();
                                item->setSizeHint(QSize(size.width(), 80));

                                ui->listWidget->addItem(item); // 将项添加到 listWidget 中
                                widget->setSizeIncrement(size.width(), 80);
                                ui->listWidget->setItemWidget(item, widget); // 设置项的关联小部件
                            }
                        }
                    }
                }
            }
        }

        for (int i = 0; i < num; i++) {
            ui->listWidget->takeItem(0); // 从 listWidget 中移除所有的项
        }
    }
    else {
        initial_friendlist(); // 调用函数初始化好友列表
    }
}

void MainWindow::on_pushButton_24_clicked()
{
    ui->lineEdit_2->clear(); // 清空 lineEdit_2 中的文本
    ui->pushButton_24->hide(); // 隐藏 pushButton_24 按钮
}

void MainWindow::on_commandLinkButton_clicked()
{
    QUrl url("");
    QDesktopServices::openUrl(url);
}

void MainWindow::on_pushButton_18_clicked()
{
    QMessageBox::information(this,"","");
}

void MainWindow::on_pushButton_22_clicked()
{
    QMessageBox::information(this,"验证消息","有人请求加你好友");
}
