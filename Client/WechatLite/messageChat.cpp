#include "messageChat.h"
#include <QFontMetrics>
#include <QPaintEvent>
#include <QDateTime>
#include <QPainter>
#include <QMovie>
#include <QLabel>
#include <QDebug>
#include <mainwindow.h>
messageChatCCS::messageChatCCS(QWidget *parent,QString send_id,QString receive_id) : QWidget(parent)
{
    // 设置字体
    QFont te_font = this->font();
    te_font.setFamily("微软雅黑");
    te_font.setPointSize(11);
    // 设置字间距选项（在此代码中被注释掉）
    // ...
    this->setFont(te_font);

    // 存储发送者和接收者的ID
    id = send_id;
    fid = receive_id;

    // 建立数据库连接
    QSqlDatabase db = QSqlDatabase::database("sqlite1");

    // 从数据库中获取发送者的头像
    QSqlQuery query(db);
    query.exec(QString("select touxiang from userdata where user_id='%1'").arg(id));
    QString toux;
    if(query.next())
    {
        toux = query.value(0).toString();
    }

    // 从数据库中获取接收者的头像
    query.exec(QString("select touxiang from userdata where user_id='%1'").arg(fid));
    QString ftoux;
    if(query.next())
    {
        ftoux = query.value(0).toString();
    }

    // 将发送者和接收者的头像加载为 QPixmap 对象
    m_leftPixmap = QPixmap(ftoux);
    m_rightPixmap = QPixmap(toux);

    // 创建用于加载动画的 QMovie 对象
    m_loadingMovie = new QMovie(this);
    m_loadingMovie->setFileName(":/touxiang/girl3.jpg");

    // 创建 QLabel 以显示加载动画
    m_loading = new QLabel(this);
    m_loading->setMovie(m_loadingMovie);
    m_loading->resize(0,0);
    m_loading->setAttribute(Qt::WA_TranslucentBackground , true);
    m_loading->setAutoFillBackground(false);
}

// 当文本成功发送时调用此函数
void messageChatCCS::setTextSuccess()
{
    // 隐藏加载动画并标记消息为已发送
    m_loading->hide();
    m_loadingMovie->stop();
    m_isSending = true;
}

void messageChatCCS::setText(QString text, QString time, QSize allSize, messageChatCCS::User_Type userType)
{
    // 存储消息文本、时间、大小和用户类型
    m_msg = text;
    m_userType = userType;
    m_time = time;
    m_curTime = QDateTime::fromTime_t(time.toInt()).toString("hh:mm");
    m_allSize = allSize;

    // 如果用户类型为 "User_Me"（当前用户）
    if(userType == User_Me)
    {
        // 如果消息尚未发送，则显示加载动画
        if(!m_isSending)
        {
            // 将加载动画定位在消息气泡的左侧
            m_loading->move(m_kuangRightRect.x() - m_loading->width() - 10, m_kuangRightRect.y()+m_kuangRightRect.height()/2- m_loading->height()/2);
            m_loading->show();
            m_loadingMovie->start();
        }
    }
    else
    {
        // 如果用户类型不是 "User_Me"，则隐藏加载动画
        m_loading->hide();
    }

    // 更新小部件以反映更改
    this->update();
}
QSize messageChatCCS::fontRect(QString str)
{
    m_msg = str;
    int minHei = 30;  // 最小高度
    int iconWH = 50;  // 头像宽高
    int iconSpaceW = 20;  // 头像与框之间的间距
    int iconRectW = 10;  // 头像与框的间距
    int iconTMPH = 15;  // 头像与文字的上边距
    int sanJiaoW = 10;  // 三角形宽度
    int kuangTMP = 15;  // 框与边缘的间距
    int textSpaceRect = 14;  // 文字与框之间的间距
    m_kuangWidth = this->width() - kuangTMP - 2*(iconWH+iconSpaceW+iconRectW);  // 框的宽度
    m_textWidth = m_kuangWidth - 2*textSpaceRect;  // 文字的宽度
    m_spaceWid = this->width() - m_textWidth;  // 空白宽度
    m_iconLeftRect = QRect(iconSpaceW, iconTMPH, iconWH, iconWH);  // 左侧头像矩形
    m_iconRightRect = QRect(this->width() - iconSpaceW - iconWH, iconTMPH, iconWH, iconWH);  // 右侧头像矩形

    QSize size = getRealString(m_msg);  // 计算实际字符串的大小

    qDebug() << "fontRect Size:" << size;
    int hei = size.height() < minHei ? minHei : size.height();  // 计算实际高度，如果小于最小高度则取最小高度

    m_sanjiaoLeftRect = QRect(iconWH+iconSpaceW+iconRectW, m_lineHeight/2, sanJiaoW, hei - m_lineHeight);  // 左侧三角形矩形
    m_sanjiaoRightRect = QRect(this->width() - iconRectW - iconWH - iconSpaceW - sanJiaoW, m_lineHeight/2, sanJiaoW, hei - m_lineHeight);  // 右侧三角形矩形

    if(size.width() < (m_textWidth+m_spaceWid)) {
        // 如果字符串宽度小于框的宽度，则框的宽度为字符串宽度
        m_kuangLeftRect.setRect(m_sanjiaoLeftRect.x()+m_sanjiaoLeftRect.width(), m_lineHeight/4*3, size.width()-m_spaceWid+2*textSpaceRect, hei-m_lineHeight);
        m_kuangRightRect.setRect(this->width() - size.width() + m_spaceWid - 2*textSpaceRect - iconWH - iconSpaceW - iconRectW,
                                 m_lineHeight/4*3, size.width()-m_spaceWid+2*textSpaceRect, hei-m_lineHeight);
    } else {
        // 如果字符串宽度大于框的宽度，则框的宽度为预设的框宽度
        m_kuangLeftRect.setRect(m_sanjiaoLeftRect.x()+m_sanjiaoLeftRect.width(), m_lineHeight/4*3, m_kuangWidth, hei-m_lineHeight);
        m_kuangRightRect.setRect(iconWH + kuangTMP + iconSpaceW + iconRectW - sanJiaoW, m_lineHeight/4*3, m_kuangWidth, hei-m_lineHeight);
    }
    m_textLeftRect.setRect(m_kuangLeftRect.x()+textSpaceRect,m_kuangLeftRect.y()+iconTMPH,
                           m_kuangLeftRect.width()-2*textSpaceRect,m_kuangLeftRect.height()-2*iconTMPH);  // 左侧文本矩形
    m_textRightRect.setRect(m_kuangRightRect.x()+textSpaceRect,m_kuangRightRect.y()+iconTMPH,
                            m_kuangRightRect.width()-2*textSpaceRect,m_kuangRightRect.height()-2*iconTMPH);  // 右侧文本矩形

    return QSize(size.width(), hei);  // 返回计算出的大小
}

QSize messageChatCCS::getRealString(QString src)
{
    // 使用当前对象的字体创建 QFontMetricsF 对象
    QFontMetricsF fm(this->font());

    // 计算行高度，使用 QFontMetricsF 的 lineSpacing() 方法
    m_lineHeight = fm.lineSpacing();

    // 统计 src 字符串中换行符的数量
    double nCount = src.count("\n");

    // 初始化最大宽度为 0
    double nMaxWidth = 0;

    // 如果字符串中没有换行符
    if (nCount == 0.0) {
        // 使用 QFontMetricsF 的 width() 方法计算字符串的最大宽度
        nMaxWidth = fm.width(src);

        // 创建 src 字符串的副本
        QString value = src;

        // 如果最大宽度超过了 m_textWidth
        if (nMaxWidth > m_textWidth) {
            // 将最大宽度设为 m_textWidth
            nMaxWidth = m_textWidth;

            // 计算能够适应 m_textWidth 的子字符串的大小
            int size = (int)(m_textWidth / fm.width(" "));

            // 计算调整后的字符串在 m_textWidth 内需要的子字符串数量
            int num = (int)(fm.width(value) / m_textWidth);

            // 临时变量用于计算
            double ttmp = num * fm.width(" ");

            // 更新需要的换行符数量
            num = (int)((fm.width(value)) / m_textWidth);
            nCount += num;

            // 构建调整后的字符串，其中包含大小为 'size' 的子字符串和换行符
            QString temp = "";
            for (int i = 0; i < num; i++) {
                temp += value.mid(i * size, (i + 1) * size) + "\n";
            }

            // 用调整后的字符串替换原始字符串
            src.replace(value, temp);
        }
    } else {
        // 如果字符串中有换行符
        for (int i = 0; i < (nCount + 1); i++) {
            // 使用换行符拆分原始字符串，并获取第 i 个子字符串
            QString value = src.split("\n").at(i);

            // 更新最大宽度，如果当前子字符串的宽度更大
            nMaxWidth = fm.width(value) > nMaxWidth ? fm.width(value) : nMaxWidth;

            // 如果当前子字符串的宽度超过了 m_textWidth
            if (fm.width(value) > m_textWidth) {
                // 将最大宽度设为 m_textWidth
                nMaxWidth = m_textWidth;

                // 计算能够适应 m_textWidth 的子字符串的大小
                int size = (int)(m_textWidth / fm.width(" "));

                // 计算调整后的子字符串在 m_textWidth 内需要的子字符串数量
                int num = (int)(fm.width(value) / m_textWidth);

                // 计算需要的换行符总数
                num = (int)(((i + num) * fm.width(" ") + fm.width(value)) / m_textWidth);
                nCount += num;

                // 构建调整后的子字符串，其中包含大小为 'size' 的子字符串和换行符
                QString temp = "";
                for (int i = 0; i < num; i++) {
                    temp += value.mid(i * size, (i + 1) * size) + "\n";
                }

                // 使用调整后的子字符串替换原始子字符串
            }
        }
    }

    // 返回一个 QSize 对象，其中包含计算得到的宽度和高度
    return QSize(nMaxWidth + m_spaceWid, (nCount + 1) * m_lineHeight + 2 * m_lineHeight);
}
void messageChatCCS::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event)

    QPainter painter(this);
    painter.setRenderHints(QPainter::Antialiasing | QPainter::SmoothPixmapTransform);//消锯齿
    painter.setPen(Qt::NoPen);
    painter.setBrush(QBrush(Qt::gray));

    if(m_userType == User_Type::User_She) { // 用户
        //头像
//        painter.drawRoundedRect(m_iconLeftRect,m_iconLeftRect.width(),m_iconLeftRect.height());
        painter.drawPixmap(m_iconLeftRect, m_leftPixmap);

        //框加边
        QColor col_KuangB(234, 234, 234);
        painter.setBrush(QBrush(col_KuangB));
        painter.drawRoundedRect(m_kuangLeftRect.x()-1,m_kuangLeftRect.y()-1,m_kuangLeftRect.width()+2,m_kuangLeftRect.height()+2,4,4);
        //框
        QColor col_Kuang(255,255,255);
        painter.setBrush(QBrush(col_Kuang));
        painter.drawRoundedRect(m_kuangLeftRect,4,4);

        //三角
        QPointF points[3] = {
            QPointF(m_sanjiaoLeftRect.x(), 30),
            QPointF(m_sanjiaoLeftRect.x()+m_sanjiaoLeftRect.width(), 25),
            QPointF(m_sanjiaoLeftRect.x()+m_sanjiaoLeftRect.width(), 35),
        };
        QPen pen;
        pen.setColor(col_Kuang);
        painter.setPen(pen);
        painter.drawPolygon(points, 3);

        //三角加边
        QPen penSanJiaoBian;
        penSanJiaoBian.setColor(col_KuangB);
        painter.setPen(penSanJiaoBian);
        painter.drawLine(QPointF(m_sanjiaoLeftRect.x() - 1, 30), QPointF(m_sanjiaoLeftRect.x()+m_sanjiaoLeftRect.width(), 24));
        painter.drawLine(QPointF(m_sanjiaoLeftRect.x() - 1, 30), QPointF(m_sanjiaoLeftRect.x()+m_sanjiaoLeftRect.width(), 36));

        //内容
        QPen penText;
        penText.setColor(QColor(51,51,51));
        painter.setPen(penText);
        QTextOption option(Qt::AlignLeft | Qt::AlignVCenter);
        option.setWrapMode(QTextOption::WrapAtWordBoundaryOrAnywhere);
        painter.setFont(this->font());
        painter.drawText(m_textLeftRect, m_msg,option);
    }  else if(m_userType == User_Type::User_Me) { // 自己
        //头像
//        painter.drawRoundedRect(m_iconRightRect,m_iconRightRect.width(),m_iconRightRect.height());
        painter.drawPixmap(m_iconRightRect, m_rightPixmap);
        //框
        QColor col_Kuang(99, 178, 230);
        painter.setBrush(QBrush(col_Kuang));
        painter.drawRoundedRect(m_kuangRightRect,4,4);
        //三角
        QPointF points[3] = {
            QPointF(m_sanjiaoRightRect.x()+m_sanjiaoRightRect.width(), 30),
            QPointF(m_sanjiaoRightRect.x(), 25),
            QPointF(m_sanjiaoRightRect.x(), 35),
        };
        QPen pen;
        pen.setColor(col_Kuang);
        painter.setPen(pen);
        painter.drawPolygon(points, 3);
        //内容
        QPen penText;
        penText.setColor(Qt::white);
        painter.setPen(penText);
        QTextOption option(Qt::AlignLeft | Qt::AlignVCenter);
        option.setWrapMode(QTextOption::WrapAtWordBoundaryOrAnywhere);
        painter.setFont(this->font());
        painter.drawText(m_textRightRect,m_msg,option);
    }  else if(m_userType == User_Type::User_Time) { // 时间
        QPen penText;
        penText.setColor(QColor(153,153,153));
        painter.setPen(penText);
        QTextOption option(Qt::AlignCenter);
        option.setWrapMode(QTextOption::WrapAtWordBoundaryOrAnywhere);
        QFont te_font = this->font();
        te_font.setFamily("微软雅黑");
        te_font.setPointSize(10);
        painter.setFont(te_font);
        painter.drawText(this->rect(),m_curTime,option);
    }
}


