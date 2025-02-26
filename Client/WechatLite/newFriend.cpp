#include "newFriend.h"
#include "mainwindow.h"
#include "ui_newFriend.h"

newFriendCCS::newFriendCCS(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addfrd)
{
    ui->setupUi(this);

    pagenum=1;
    setWindowFlags(Qt::FramelessWindowHint | Qt::WindowSystemMenuHint | Qt::WindowMinMaxButtonsHint);
    setFixedSize(this->width(),this->height());

    setAttribute(Qt::WA_TranslucentBackground);
    QGraphicsDropShadowEffect *effect = new QGraphicsDropShadowEffect(this);
    effect->setOffset(0, 0);          //设置向哪个方向产生阴影效果(dx,dy)，特别地，(0,0)代表向四周发散
    effect->setColor(Qt::gray);       //设置阴影颜色，也可以setColor(QColor(220,220,220))
    effect->setBlurRadius(30);        //设定阴影的模糊半径，数值越大越模糊
    ui->frame->setGraphicsEffect(effect);

    ui->textEdit->setStyleSheet("background-color: rgb(242, 249, 255);");
    ui->textEdit_2->setStyleSheet("background-color: rgb(242, 249, 255);");
    //进行大量的按钮放置
    ui->label_4->hide();
    ui->label_5->hide();
    ui->label_6->hide();
    ui->label_7->hide();
    ui->label_8->hide();
    ui->label_9->hide();
    ui->label_10->hide();
    ui->label_11->hide();
    ui->label_12->hide();
    ui->label_13->hide();
    ui->label_16->hide();
    ui->label_18->hide();
    ui->label_42->hide();
    ui->label_43->hide();
    ui->label_44->hide();
    ui->pushButton_5->hide();
    ui->widget->hide();
    ui->widget_2->hide();
    ui->widget_3->hide();
    ui->widget_4->hide();
    ui->widget_5->hide();
    ui->widget_6->hide();
    ui->widget_7->hide();
    ui->widget_8->hide();
    ui->widget_9->hide();
    ui->pushButton_12->hide();
    ui->pushButton_21->hide();
    ui->pushButton_22->hide();
}

newFriendCCS::~newFriendCCS()
{
    delete ui;
}
//三个鼠标移动事件
void newFriendCCS::mousePressEvent(QMouseEvent *event)
{
    if(ui->label->geometry().contains(event->pos())
            ||ui->label_15->geometry().contains(event->pos()))
    {
        m_pressed = true;
        m_movePos = event->globalPos() - pos();
    }

    return QDialog::mousePressEvent(event);
}
void newFriendCCS::mouseMoveEvent(QMouseEvent *event)
{
    if(ui->label->geometry().contains(event->pos())
            ||ui->label_15->geometry().contains(event->pos()))
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
void newFriendCCS::mouseReleaseEvent(QMouseEvent *event)
{
    m_pressed = false;

    return QDialog::mouseReleaseEvent(event);
}


void newFriendCCS::on_pushButton_clicked()
{
    close();
}

void newFriendCCS::on_pushButton_2_clicked()
{
    showMinimized();
}

void newFriendCCS::on_pushButton_3_clicked()
{
    ui->widget->hide();
    ui->widget_2->hide();
    ui->widget_3->hide();
    ui->widget_4->hide();
    ui->widget_5->hide();
    ui->widget_6->hide();
    ui->widget_7->hide();
    ui->pushButton_12->hide();
    ui->pushButton_21->hide();
    pagenum=1;
    ui->pushButton_22->hide();
    QString idname=ui->lineEdit->text();
    if(idname.isEmpty())
        return;
    else
    {
        QString way=ui->comboBox->currentText();
        if(way=="账号")
        {
            QSqlDatabase db = QSqlDatabase::database("sqlite1"); //建立数据库连接
            QSqlQuery query(db);
            QString stq=QString("select count(*) from userdata where user_id='%1'").arg(idname);
            query.exec(stq);
            int num=0;

            //用num表示对数据库的查找
            if(query.next())
                num=query.value(0).toInt();
            if(num==0)
            {
                ui->label_18->show();
            }
            else
            {
                QString str=QString("select user_name,user_sex,year,month,date,user_state,user_city,signature,canlookover,touxiang from userdata where user_id='%1'").arg(idname);
                query.exec(str);
                QString name;
                int sex=1;
                QString yearr;
                QString monthh;
                QString datee;
                QString state;
                QString city;
                QString sign;
                int lookover=1;
                QString toux;
                //此数据库中有10项
                if(query.next())
                {
                    name=query.value(0).toString();
                    sex=query.value(1).toInt();
                    yearr=query.value(2).toString();
                    monthh=query.value(3).toString();
                    datee=query.value(4).toString();
                    state=query.value(5).toString();
                    city=query.value(6).toString();
                    sign=query.value(7).toString();
                    //表示用户设置的状态
                    lookover=query.value(8).toInt();
                    toux=query.value(9).toString();
                }
                // 如果状态为可见状态
                if(lookover==1)
                {
                    ui->label_8->setText(idname);
                    if(!name.isEmpty())
                        ui->label_13->setText(name);
                    //将数据解码
                    if(sex==1)
                    {
                        ui->label_9->setText("男");
                    }
                    else ui->label_9->setText("女");
                    if(!yearr.isEmpty())
                    {
                        ui->label_10->setText(yearr+" "+monthh+" "+datee);
                    }
                    if(!state.isEmpty())
                        ui->label_11->setText(state+" "+city);
                    //准备好好友的添加
                    QPixmap pixmap=QPixmap(toux);
                    QPixmap fitpixmap = pixmap.scaled(121, 121, Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
                    ui->label_12->setPixmap(fitpixmap);
                    ui->label_4->show();
                    ui->label_5->show();
                    ui->label_6->show();
                    ui->label_7->show();
                    ui->label_8->show();
                    ui->label_9->show();
                    ui->label_10->show();
                    ui->label_11->show();
                    ui->label_12->show();
                    ui->label_13->show();
                    ui->label_16->show();
                    ui->label_18->hide();
                    ui->pushButton_5->show();
                }
                //则此时为好友不可加状态或不可搜索状态
                else if(lookover==2||lookover==3)
                {
                    ui->label_8->setText(idname);
                    if(!name.isEmpty())
                        ui->label_13->setText(name);
                    ui->label_9->setText("- -");
                    if(!yearr.isEmpty())
                    {
                        ui->label_10->setText("- -");
                    }
                    if(!state.isEmpty())
                        ui->label_11->setText("- -");
                    QPixmap pixmap=QPixmap(toux);
                    QPixmap fitpixmap = pixmap.scaled(121, 121, Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
                    ui->label_12->setPixmap(fitpixmap);
                    ui->label_4->show();
                    ui->label_5->show();
                    ui->label_6->show();
                    ui->label_7->show();
                    ui->label_8->show();
                    ui->label_9->show();
                    ui->label_10->show();
                    ui->label_11->show();
                    ui->label_12->show();
                    ui->label_13->show();
                    ui->label_16->show();
                    ui->label_18->hide();
                    ui->pushButton_5->show();
                }
            }
        }
        // 进行昵称搜索时的进程
        else if(way=="昵称")
        {
            QSqlDatabase db = QSqlDatabase::database("sqlite1"); //建立数据库连接
            QSqlQuery query(db);
            int search=1;
            int num=0;
            QString stw=QString("select user_name from userdata where cansearch='%2'").arg(search);
            query.exec(stw);
            QString name;
            while(query.next())
            {
                name=query.value(0).toString();
                if(name.contains(idname))
                    num++;
            }
            if(num==0)
            {
                ui->label_4->hide();
                ui->label_5->hide();
                ui->label_6->hide();
                ui->label_7->hide();
                ui->label_8->hide();
                ui->label_9->hide();
                ui->label_10->hide();
                ui->label_11->hide();
                ui->label_12->hide();
                ui->label_13->hide();
                ui->label_16->hide();
                ui->pushButton_5->hide();
                ui->label_18->show();
            }
            else
            {
                ui->widget->show();
                QString str=QString("select user_id,user_name from userdata where cansearch='%2'").arg(search);
                query.exec(str);
                QString name;
                QString id1;
                QString state1;
                QString city1;
                int lookover;
                QString toux;
                int tag=-1;
                QSqlQuery query2(db);
                while(query.next())
                {
                    id1=query.value(0).toString();
                    name=query.value(1).toString();

                    /*

                     * 根据tag的值进行条件判断，依次更新UI界面上的标签、按钮和图像元素的显示。

 如果tag达到了6，即已经更新了6个元素的显示，就跳出循环。

根据tag的余数，分别更新不同的UI元素的显示内容和图像。

最后，通过调用show()方法显示更新后的UI元素。

                     */

                    if(name.contains(idname))
                    {
                        tag++;
                        QString str1=QString("select user_state,user_city,canlookover,touxiang from userdata where user_id='%1'").arg(id1);
                        query2.exec(str1);
                        if(query2.next())
                        {
                            state1=query2.value(0).toString();
                            city1=query2.value(1).toString();
                            lookover=query2.value(2).toInt();
                            toux=query2.value(3).toString();
                            if(tag==6)
                                break;
                            if(tag%6==0)
                            {
                                QPixmap pixMap;
                                pixMap.load(toux);
                                pixMap=pixMap.scaled(72,72, Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
                                ui->label_45->setPixmap(pixMap);
                                ui->pushButton_6->setText(name);
                                ui->label_19->setText(id1);
                                if(lookover!=1) ui->label_20->setText("- -");
                                else ui->label_20->setText(state1+" "+city1);
                                ui->widget_2->show();
                            }
                            if(tag%6==1)
                            {
                                QPixmap pixMap;
                                pixMap.load(toux);
                                pixMap=pixMap.scaled(72,72, Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
                                ui->label_46->setPixmap(pixMap);
                                ui->pushButton_7->setText(name);
                                ui->label_21->setText(id1);
                                if(lookover!=1) ui->label_22->setText("- -");
                                else ui->label_22->setText(state1+" "+city1);
                                ui->widget_3->show();
                            }
                            if(tag%6==2)
                            {
                                QPixmap pixMap;
                                pixMap.load(toux);
                                pixMap=pixMap.scaled(72,72, Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
                                ui->label_47->setPixmap(pixMap);
                                ui->pushButton_8->setText(name);
                                ui->label_23->setText(id1);
                                if(lookover!=1) ui->label_24->setText("- -");
                                else ui->label_24->setText(state1+" "+city1);
                                ui->widget_4->show();
                            }
                            if(tag%6==3)
                            {
                                QPixmap pixMap;
                                pixMap.load(toux);
                                pixMap=pixMap.scaled(72,72, Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
                                ui->label_48->setPixmap(pixMap);
                                ui->pushButton_9->setText(name);
                                ui->label_25->setText(id1);
                                if(lookover!=1) ui->label_26->setText("- -");
                                else ui->label_26->setText(state1+" "+city1);
                                ui->widget_5->show();
                            }
                            if(tag%6==4)
                            {
                                QPixmap pixMap;
                                pixMap.load(toux);
                                pixMap=pixMap.scaled(72,72, Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
                                ui->label_49->setPixmap(pixMap);
                                ui->pushButton_11->setText(name);
                                ui->label_29->setText(id1);
                                if(lookover!=1) ui->label_30->setText("- -");
                                else ui->label_30->setText(state1+" "+city1);
                                ui->widget_6->show();
                            }
                            if(tag%6==5)
                            {
                                QPixmap pixMap;
                                pixMap.load(toux);
                                pixMap=pixMap.scaled(72,72, Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
                                ui->label_50->setPixmap(pixMap);
                                ui->pushButton_20->setText(name);
                                ui->label_31->setText(id1);
                                if(lookover!=1) ui->label_32->setText("- -");
                                else ui->label_32->setText(state1+" "+city1);
                                ui->widget_7->show();
                            }
                        }
                    }
                }
                if(num>pagenum*6)
                {
                    ui->pushButton_12->show();
                }
            }
        }
    }
}
//与上面函数基本相同，都是函数复用
void newFriendCCS::on_pushButton_12_clicked()
{
    pagenum++;
    ui->pushButton_21->show();
    QString idname=ui->lineEdit->text();
    QSqlDatabase db = QSqlDatabase::database("sqlite1"); //建立数据库连接
    QSqlQuery query(db);
    QString stq=QString("select count(*) from userdata where user_name='%1'").arg(idname);
    query.exec(stq);
    int num=0;
    if(query.next())
        num=query.value(0).toInt();
    int search=1;
    QString str1=QString("select user_id,user_state,user_city,canlookover,touxiang from userdata where user_name='%1' and cansearch='%2'").arg(idname).arg(search);
    query.exec(str1);
    //获取一些数据库中干的参数
    QString id1;
    QString state1;
    QString city1;
    QString sign1;
    int lookover;
    QString toux;
    int tag;


//根据tag的值进行条件判断，依次更新UI界面上的标签、按钮和图像元素的显示。
//如果tag达到了6，即已经更新了6个元素的显示，就跳出循环。
    if(num>pagenum*6)
    {
        ui->pushButton_12->show();
    }
    else ui->pushButton_12->hide();
    while(query.next())
    {
        tag=query.at();
        id1=query.value(0).toString();
        state1=query.value(1).toString();
        city1=query.value(2).toString();
        lookover=query.value(3).toInt();
        toux=query.value(4).toString();
        if(tag==pagenum*6)break;
        if(tag%6==0)
        {
            ui->widget_2->hide();
            ui->widget_3->hide();
            ui->widget_4->hide();
            ui->widget_5->hide();
            ui->widget_6->hide();
            ui->widget_7->hide();
            QPixmap pixMap;
            pixMap.load(toux);
            pixMap=pixMap.scaled(72,72, Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
            ui->label_45->setPixmap(pixMap);
            ui->pushButton_6->setText(idname);
            ui->label_19->setText(id1);
            if(lookover!=1) ui->label_20->setText("- -");
            else ui->label_20->setText(state1+" "+city1);
            ui->widget_2->show();
        }
        if(tag%6==1)
        {
            QPixmap pixMap;
            pixMap.load(toux);
            pixMap=pixMap.scaled(72,72, Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
            ui->label_46->setPixmap(pixMap);
            ui->pushButton_7->setText(idname);
            ui->label_21->setText(id1);
            if(lookover!=1) ui->label_22->setText("- -");
            else ui->label_22->setText(state1+" "+city1);
            ui->widget_3->show();
        }
        if(tag%6==2)
        {
            QPixmap pixMap;
            pixMap.load(toux);
            pixMap=pixMap.scaled(72,72, Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
            ui->label_47->setPixmap(pixMap);
            ui->pushButton_8->setText(idname);
            ui->label_23->setText(id1);
            if(lookover!=1) ui->label_24->setText("- -");
            else ui->label_24->setText(state1+" "+city1);
            ui->widget_4->show();
        }
        if(tag%6==3)
        {
            QPixmap pixMap;
            pixMap.load(toux);
            pixMap=pixMap.scaled(72,72, Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
            ui->label_48->setPixmap(pixMap);
            ui->pushButton_9->setText(idname);
            ui->label_25->setText(id1);
            if(lookover!=1) ui->label_26->setText("- -");
            else ui->label_26->setText(state1+" "+city1);
            ui->widget_5->show();
        }
        if(tag%6==4)
        {
            QPixmap pixMap;
            pixMap.load(toux);
            pixMap=pixMap.scaled(72,72, Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
            ui->label_49->setPixmap(pixMap);
            ui->pushButton_11->setText(idname);
            ui->label_29->setText(id1);
            if(lookover!=1) ui->label_30->setText("- -");
            else ui->label_30->setText(state1+" "+city1);
            ui->widget_6->show();
        }
        if(tag%6==5)
        {
            QPixmap pixMap;
            pixMap.load(toux);
            pixMap=pixMap.scaled(72,72, Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
            ui->label_50->setPixmap(pixMap);
            ui->pushButton_20->setText(idname);
            ui->label_31->setText(id1);
            if(lookover!=1) ui->label_32->setText("- -");
            else ui->label_32->setText(state1+" "+city1);
            ui->widget_7->show();
        }
    }
}
//和上代码完全一样
void newFriendCCS::on_pushButton_21_clicked()
{
    pagenum--;
    ui->pushButton_12->show();
    QString idname=ui->lineEdit->text();
    QSqlDatabase db = QSqlDatabase::database("sqlite1"); //建立数据库连接
    QSqlQuery query(db);
    int search=1;
    QString str1=QString("select user_id,user_state,user_city,canlookover,touxiang from userdata where user_name='%1' and cansearch='%2'").arg(idname).arg(search);
    query.exec(str1);
    QString id1;
    QString state1;
    QString city1;
    QString sign1;
    int lookover=1;
    QString toux;
    int tag;

    if(pagenum!=1)
    {
        ui->pushButton_21->show();
    }
    else ui->pushButton_21->hide();
    while(query.next())
    {
        tag=query.at();
        id1=query.value(0).toString();
        state1=query.value(1).toString();
        city1=query.value(2).toString();
        lookover=query.value(3).toInt();
        toux=query.value(4).toString();
        if(tag==pagenum*6)break;
        if(tag%6==0)
        {
            ui->widget_2->hide();
            ui->widget_3->hide();
            ui->widget_4->hide();
            ui->widget_5->hide();
            ui->widget_6->hide();
            ui->widget_7->hide();
            QPixmap pixMap;
            pixMap.load(toux);
            pixMap=pixMap.scaled(72,72, Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
            ui->label_45->setPixmap(pixMap);
            ui->pushButton_6->setText(idname);
            ui->label_19->setText(id1);
            if(lookover!=1) ui->label_20->setText("- -");
            else ui->label_20->setText(state1+" "+city1);
            ui->widget_2->show();
        }
        if(tag%6==1)
        {
            QPixmap pixMap;
            pixMap.load(toux);
            pixMap=pixMap.scaled(72,72, Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
            ui->label_46->setPixmap(pixMap);
            ui->pushButton_7->setText(idname);
            ui->label_21->setText(id1);
            if(lookover!=1) ui->label_22->setText("- -");
            else ui->label_22->setText(state1+" "+city1);
            ui->widget_3->show();
        }
        if(tag%6==2)
        {
            QPixmap pixMap;
            pixMap.load(toux);
            pixMap=pixMap.scaled(72,72, Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
            ui->label_47->setPixmap(pixMap);
            ui->pushButton_8->setText(idname);
            ui->label_23->setText(id1);
            if(lookover!=1) ui->label_24->setText("- -");
            else ui->label_24->setText(state1+" "+city1);
            ui->widget_4->show();
        }
        if(tag%6==3)
        {
            QPixmap pixMap;
            pixMap.load(toux);
            pixMap=pixMap.scaled(72,72, Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
            ui->label_48->setPixmap(pixMap);
            ui->pushButton_9->setText(idname);
            ui->label_25->setText(id1);
            if(lookover!=1) ui->label_26->setText("- -");
            else ui->label_26->setText(state1+" "+city1);
            ui->widget_5->show();
        }
        if(tag%6==4)
        {
            QPixmap pixMap;
            pixMap.load(toux);
            pixMap=pixMap.scaled(72,72, Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
            ui->label_49->setPixmap(pixMap);
            ui->pushButton_11->setText(idname);
            ui->label_29->setText(id1);
            if(lookover!=1) ui->label_30->setText("- -");
            else ui->label_30->setText(state1+" "+city1);
            ui->widget_6->show();
        }
        if(tag%6==5)
        {
            QPixmap pixMap;
            pixMap.load(toux);
            pixMap=pixMap.scaled(72,72, Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
            ui->label_50->setPixmap(pixMap);
            ui->pushButton_20->setText(idname);
            ui->label_31->setText(id1);
            if(lookover!=1) ui->label_32->setText("- -");
            else ui->label_32->setText(state1+" "+city1);
            ui->widget_7->show();
        }
    }
}
//与前面加好友的操作基本相同
void newFriendCCS::on_pushButton_6_clicked()
{
    ui->widget->hide();
    QString idname=ui->label_19->text();
    QSqlDatabase db = QSqlDatabase::database("sqlite1"); //建立数据库连接
    QSqlQuery query(db);
    QString str=QString("select user_name,user_sex,year,month,date,user_state,user_city,signature,canlookover,touxiang from userdata where user_id='%1'").arg(idname);
    query.exec(str);
    QString name;
    int sex=1;
    QString yearr;
    QString monthh;
    QString datee;
    QString state;
    QString city;
    QString sign;
    int lookover=1;
    QString toux;

    if(query.next())
    {
        name=query.value(0).toString();
        sex=query.value(1).toInt();
        yearr=query.value(2).toString();
        monthh=query.value(3).toString();
        datee=query.value(4).toString();
        state=query.value(5).toString();
        city=query.value(6).toString();
        sign=query.value(7).toString();
        lookover=query.value(8).toInt();
        toux=query.value(9).toString();
    }
    //具体逻辑见上面的lookover解释
    if(lookover==1)
    {
        ui->label_8->setText(idname);
        if(!name.isEmpty())
            ui->label_13->setText(name);
        if(sex==1)
        {
            ui->label_9->setText("男");
        }
        else ui->label_9->setText("女");
        if(!yearr.isEmpty())
        {
            ui->label_10->setText(yearr+" "+monthh+" "+datee);
        }
        if(!state.isEmpty())
            ui->label_11->setText(state+" "+city);
        QPixmap pixmap=QPixmap(toux);
        QPixmap fitpixmap = pixmap.scaled(121, 121, Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
        ui->label_12->setPixmap(fitpixmap);
    }
    else if(lookover==2 || lookover==3)
    {
        ui->label_8->setText(idname);
        if(!name.isEmpty())
            ui->label_13->setText(name);
        ui->label_9->setText("- -");
        if(!yearr.isEmpty())
        {
            ui->label_10->setText("- -");
        }
        if(!state.isEmpty())
            ui->label_11->setText("- -");
        QPixmap pixmap=QPixmap(toux);
        QPixmap fitpixmap = pixmap.scaled(121, 121, Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
        ui->label_12->setPixmap(fitpixmap);
    }
    ui->label_4->show();
    ui->label_5->show();
    ui->label_6->show();
    ui->label_7->show();
    ui->label_8->show();
    ui->label_9->show();
    ui->label_10->show();
    ui->label_11->show();
    ui->label_12->show();
    ui->label_13->show();
    ui->label_16->show();
    ui->label_18->hide();
    ui->pushButton_5->show();
    ui->pushButton_22->show();
}
//显示函数
void newFriendCCS::on_pushButton_22_clicked()
{
    ui->widget->show();
}
//同样的函数见上面加好友的操作
void newFriendCCS::on_pushButton_7_clicked()
{
    ui->widget->hide();
    QString idname=ui->label_21->text();
    QSqlDatabase db = QSqlDatabase::database("sqlite1"); //建立数据库连接
    QSqlQuery query(db);
    QString str=QString("select user_name,user_sex,year,month,date,user_state,user_city,signature,canlookover,touxiang from userdata where user_id='%1'").arg(idname);
    query.exec(str);
    QString name;
    int sex=1;
    QString yearr;
    QString monthh;
    QString datee;
    QString state;
    QString city;
    QString sign;
    int lookover=1;
    QString toux;

    if(query.next())
    {
        name=query.value(0).toString();
        sex=query.value(1).toInt();
        yearr=query.value(2).toString();
        monthh=query.value(3).toString();
        datee=query.value(4).toString();
        state=query.value(5).toString();
        city=query.value(6).toString();
        sign=query.value(7).toString();
        lookover=query.value(8).toInt();
        toux=query.value(9).toString();
    }
    if(lookover==1)
    {
        ui->label_8->setText(idname);
        if(!name.isEmpty())
            ui->label_13->setText(name);
        if(sex==1)
        {
            ui->label_9->setText("男");
        }
        else ui->label_9->setText("女");
        if(!yearr.isEmpty())
        {
            ui->label_10->setText(yearr+" "+monthh+" "+datee);
        }
        if(!state.isEmpty())
            ui->label_11->setText(state+" "+city);
        QPixmap pixmap=QPixmap(toux);
        QPixmap fitpixmap = pixmap.scaled(121, 121, Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
        ui->label_12->setPixmap(fitpixmap);
    }
    else if(lookover==2 || lookover==3)
    {
        ui->label_8->setText(idname);
        if(!name.isEmpty())
            ui->label_13->setText(name);
        ui->label_9->setText("- -");
        if(!yearr.isEmpty())
        {
            ui->label_10->setText("- -");
        }
        if(!state.isEmpty())
            ui->label_11->setText("- -");
        QPixmap pixmap=QPixmap(toux);
        QPixmap fitpixmap = pixmap.scaled(121, 121, Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
        ui->label_12->setPixmap(fitpixmap);
    }
    ui->label_4->show();
    ui->label_5->show();
    ui->label_6->show();
    ui->label_7->show();
    ui->label_8->show();
    ui->label_9->show();
    ui->label_10->show();
    ui->label_11->show();
    ui->label_12->show();
    ui->label_13->show();
    ui->label_16->show();
    ui->label_18->hide();
    ui->pushButton_5->show();
    ui->pushButton_22->show();
}
//同样的代码复用
void newFriendCCS::on_pushButton_8_clicked()
{
    ui->widget->hide();
    QString idname=ui->label_23->text();
    QSqlDatabase db = QSqlDatabase::database("sqlite1"); //建立数据库连接
    QSqlQuery query(db);
    QString str=QString("select user_name,user_sex,year,month,date,user_state,user_city,signature,canlookover,touxiang from userdata where user_id='%1'").arg(idname);
    query.exec(str);
    QString name;
    int sex=1;
    QString yearr;
    QString monthh;
    QString datee;
    QString state;
    QString city;
    QString sign;
    int lookover=1;
    QString toux;

    if(query.next())
    {
        name=query.value(0).toString();
        sex=query.value(1).toInt();
        yearr=query.value(2).toString();
        monthh=query.value(3).toString();
        datee=query.value(4).toString();
        state=query.value(5).toString();
        city=query.value(6).toString();
        sign=query.value(7).toString();
        lookover=query.value(8).toInt();
        toux=query.value(9).toString();
    }
    if(lookover==1)
    {
        ui->label_8->setText(idname);
        if(!name.isEmpty())
            ui->label_13->setText(name);
        if(sex==1)
        {
            ui->label_9->setText("男");
        }
        else ui->label_9->setText("女");
        if(!yearr.isEmpty())
        {
            ui->label_10->setText(yearr+" "+monthh+" "+datee);
        }
        if(!state.isEmpty())
            ui->label_11->setText(state+" "+city);
        QPixmap pixmap=QPixmap(toux);
        QPixmap fitpixmap = pixmap.scaled(121, 121, Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
        ui->label_12->setPixmap(fitpixmap);
    }
    else if(lookover==2 || lookover==3)
    {
        ui->label_8->setText(idname);
        if(!name.isEmpty())
            ui->label_13->setText(name);
        ui->label_9->setText("- -");
        if(!yearr.isEmpty())
        {
            ui->label_10->setText("- -");
        }
        if(!state.isEmpty())
            ui->label_11->setText("- -");
        QPixmap pixmap=QPixmap(toux);
        QPixmap fitpixmap = pixmap.scaled(121, 121, Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
        ui->label_12->setPixmap(fitpixmap);
    }
    ui->label_4->show();
    ui->label_5->show();
    ui->label_6->show();
    ui->label_7->show();
    ui->label_8->show();
    ui->label_9->show();
    ui->label_10->show();
    ui->label_11->show();
    ui->label_12->show();
    ui->label_13->show();
    ui->label_16->show();
    ui->label_18->hide();
    ui->pushButton_5->show();
    ui->pushButton_22->show();
}
//同样的代码复用
void newFriendCCS::on_pushButton_9_clicked()
{
    ui->widget->hide();
    QString idname=ui->label_25->text();
    QSqlDatabase db = QSqlDatabase::database("sqlite1"); //建立数据库连接
    QSqlQuery query(db);
    QString str=QString("select user_name,user_sex,year,month,date,user_state,user_city,signature,canlookover,touxiang from userdata where user_id='%1'").arg(idname);
    query.exec(str);
    QString name;
    int sex=1;
    QString yearr;
    QString monthh;
    QString datee;
    QString state;
    QString city;
    QString sign;
    int lookover=1;
    QString toux;

    if(query.next())
    {
        name=query.value(0).toString();
        sex=query.value(1).toInt();
        yearr=query.value(2).toString();
        monthh=query.value(3).toString();
        datee=query.value(4).toString();
        state=query.value(5).toString();
        city=query.value(6).toString();
        sign=query.value(7).toString();
        lookover=query.value(8).toInt();
        toux=query.value(9).toString();
    }
    if(lookover==1)
    {
        ui->label_8->setText(idname);
        if(!name.isEmpty())
            ui->label_13->setText(name);
        if(sex==1)
        {
            ui->label_9->setText("男");
        }
        else ui->label_9->setText("女");
        if(!yearr.isEmpty())
        {
            ui->label_10->setText(yearr+" "+monthh+" "+datee);
        }
        if(!state.isEmpty())
            ui->label_11->setText(state+" "+city);
        QPixmap pixmap=QPixmap(toux);
        QPixmap fitpixmap = pixmap.scaled(121, 121, Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
        ui->label_12->setPixmap(fitpixmap);
    }
    else if(lookover==2 || lookover==3)
    {
        ui->label_8->setText(idname);
        if(!name.isEmpty())
            ui->label_13->setText(name);
        ui->label_9->setText("- -");
        if(!yearr.isEmpty())
        {
            ui->label_10->setText("- -");
        }
        if(!state.isEmpty())
            ui->label_11->setText("- -");
        QPixmap pixmap=QPixmap(toux);
        QPixmap fitpixmap = pixmap.scaled(121, 121, Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
        ui->label_12->setPixmap(fitpixmap);
    }
    ui->label_4->show();
    ui->label_5->show();
    ui->label_6->show();
    ui->label_7->show();
    ui->label_8->show();
    ui->label_9->show();
    ui->label_10->show();
    ui->label_11->show();
    ui->label_12->show();
    ui->label_13->show();
    ui->label_16->show();
    ui->label_18->hide();
    ui->pushButton_5->show();
    ui->pushButton_22->show();
}

void newFriendCCS::on_pushButton_11_clicked()
{
    ui->widget->hide();
    QString idname=ui->label_29->text();
    QSqlDatabase db = QSqlDatabase::database("sqlite1"); //建立数据库连接
    QSqlQuery query(db);
    QString str=QString("select user_name,user_sex,year,month,date,user_state,user_city,signature,canlookover,touxiang from userdata where user_id='%1'").arg(idname);
    query.exec(str);
    QString name;
    int sex=1;
    QString yearr;
    QString monthh;
    QString datee;
    QString state;
    QString city;
    QString sign;
    int lookover=1;
    QString toux;

    if(query.next())
    {
        name=query.value(0).toString();
        sex=query.value(1).toInt();
        yearr=query.value(2).toString();
        monthh=query.value(3).toString();
        datee=query.value(4).toString();
        state=query.value(5).toString();
        city=query.value(6).toString();
        sign=query.value(7).toString();
        lookover=query.value(8).toInt();
        toux=query.value(9).toString();
    }
    if(lookover==1)
    {
        ui->label_8->setText(idname);
        if(!name.isEmpty())
            ui->label_13->setText(name);
        if(sex==1)
        {
            ui->label_9->setText("男");
        }
        else ui->label_9->setText("女");
        if(!yearr.isEmpty())
        {
            ui->label_10->setText(yearr+" "+monthh+" "+datee);
        }
        if(!state.isEmpty())
            ui->label_11->setText(state+" "+city);
        QPixmap pixmap=QPixmap(toux);
        QPixmap fitpixmap = pixmap.scaled(121, 121, Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
        ui->label_12->setPixmap(fitpixmap);
    }
    else if(lookover==2 || lookover==3)
    {
        ui->label_8->setText(idname);
        if(!name.isEmpty())
            ui->label_13->setText(name);
        ui->label_9->setText("- -");
        if(!yearr.isEmpty())
        {
            ui->label_10->setText("- -");
        }
        if(!state.isEmpty())
            ui->label_11->setText("- -");
        QPixmap pixmap=QPixmap(toux);
        QPixmap fitpixmap = pixmap.scaled(121, 121, Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
        ui->label_12->setPixmap(fitpixmap);
    }
    ui->label_4->show();
    ui->label_5->show();
    ui->label_6->show();
    ui->label_7->show();
    ui->label_8->show();
    ui->label_9->show();
    ui->label_10->show();
    ui->label_11->show();
    ui->label_12->show();
    ui->label_13->show();
    ui->label_16->show();
    ui->label_18->hide();
    ui->pushButton_5->show();
    ui->pushButton_22->show();
}
//同样的代码复用
void newFriendCCS::on_pushButton_20_clicked()
{
    ui->widget->hide();
    QString idname=ui->label_31->text();
    QSqlDatabase db = QSqlDatabase::database("sqlite1"); //建立数据库连接
    QSqlQuery query(db);
    QString str=QString("select user_name,user_sex,year,month,date,user_state,user_city,signature,canlookover,touxiang from userdata where user_id='%1'").arg(idname);
    query.exec(str);
    QString name;
    int sex=1;
    QString yearr;
    QString monthh;
    QString datee;
    QString state;
    QString city;
    QString sign;
    int lookover=1;
    QString toux;

    if(query.next())
    {
        name=query.value(0).toString();
        sex=query.value(1).toInt();
        yearr=query.value(2).toString();
        monthh=query.value(3).toString();
        datee=query.value(4).toString();
        state=query.value(5).toString();
        city=query.value(6).toString();
        sign=query.value(7).toString();
        lookover=query.value(8).toInt();
        toux=query.value(9).toString();
    }
    if(lookover==1)
    {
        ui->label_8->setText(idname);
        if(!name.isEmpty())
            ui->label_13->setText(name);
        if(sex==1)
        {
            ui->label_9->setText("男");
        }
        else ui->label_9->setText("女");
        if(!yearr.isEmpty())
        {
            ui->label_10->setText(yearr+" "+monthh+" "+datee);
        }
        if(!state.isEmpty())
            ui->label_11->setText(state+" "+city);
        QPixmap pixmap=QPixmap(toux);
        QPixmap fitpixmap = pixmap.scaled(121, 121, Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
        ui->label_12->setPixmap(fitpixmap);
    }
    else if(lookover==2 || lookover==3)
    {
        ui->label_8->setText(idname);
        if(!name.isEmpty())
            ui->label_13->setText(name);
        ui->label_9->setText("- -");
        if(!yearr.isEmpty())
        {
            ui->label_10->setText("- -");
        }
        if(!state.isEmpty())
            ui->label_11->setText("- -");
        QPixmap pixmap=QPixmap(toux);
        QPixmap fitpixmap = pixmap.scaled(121, 121, Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
        ui->label_12->setPixmap(fitpixmap);
    }
    ui->label_4->show();
    ui->label_5->show();
    ui->label_6->show();
    ui->label_7->show();
    ui->label_8->show();
    ui->label_9->show();
    ui->label_10->show();
    ui->label_11->show();
    ui->label_12->show();
    ui->label_13->show();
    ui->label_16->show();
    ui->label_18->hide();
    ui->pushButton_5->show();
    ui->pushButton_22->show();
}
//此处是添加好友失败的方式
void newFriendCCS::on_pushButton_13_clicked()
{
    QString frdid=ui->label_19->text();
    QSqlDatabase db = QSqlDatabase::database("sqlite1"); //建立数据库连接
    QSqlQuery query(db);
    QString id;
    query.exec("select user_id from loginuser");
    if(query.next())
    {
        id=query.value(0).toString();
    }
    QString str=QString("select user_friend from userfriend where user_id='%1'").arg(id);
    query.exec(str);
    QString frdlist1,frdlist2;
    if(query.next())
    {
        frdlist1=query.value(0).toString();
    }
    if(frdlist1.isEmpty())
    {
        // 如果好友列表为空
        // 更新数据库中的用户好友信息，将新好友添加到好友列表中
        query.exec(QString("update userfriend set user_friend='%1' where user_id='%2'").arg(frdid).arg(id));
        accept();
    }
    else
    {
        // 如果好友列表不为空
        QStringList list=frdlist1.split("|"); // 将好友列表按照分隔符“|”拆分成字符串列表
        for(int i=0;i<list.count();i++)
        {
            // 遍历好友列表
            if(list[i]==frdid)
            {
                // 如果新好友已经在好友列表中，不能重复添加
                QMessageBox::warning(this,"添加失败","该用户已经是你的好友，不能重复添加");
                return; // 返回，终止继续执行下面的代码
            }
        }
        // 将新好友添加到好友列表中
        frdlist2=frdlist1+"|"+frdid;
        query.exec(QString("update userfriend set user_friend='%1' where user_id='%2'").arg(frdlist2).arg(id));
    }
}

void newFriendCCS::on_pushButton_14_clicked()
{
    QString frdid=ui->label_21->text();
    QSqlDatabase db = QSqlDatabase::database("sqlite1"); //建立数据库连接
    QSqlQuery query(db);
    QString id;
    query.exec("select user_id from loginuser");
    if(query.next())
    {
        id=query.value(0).toString();
    }
    QString str=QString("select user_friend from userfriend where user_id='%1'").arg(id);
    query.exec(str);
    QString frdlist1,frdlist2;
    if(query.next())
    {
        // 如果查询结果存在下一行数据
        // 从查询结果中获取第一列的值，并将其转换为字符串赋给frdlist1变量
        frdlist1=query.value(0).toString();
    }
    if(frdlist1.isEmpty())
    {
        // 如果好友列表为空
        // 更新数据库中的用户好友信息，将新好友添加到好友列表中
        query.exec(QString("update userfriend set user_friend='%1' where user_id='%2'").arg(frdid).arg(id));
        accept();
    }
    else
    {
        // 如果好友列表不为空
        QStringList list=frdlist1.split("|"); // 将好友列表按照分隔符“|”拆分成字符串列表
        for(int i=0;i<list.count();i++)
        {
            // 遍历好友列表
            if(list[i]==frdid)
            {
                // 如果新好友已经在好友列表中，不能重复添加
                QMessageBox::warning(this,"添加失败","该用户已经是你的好友，不能重复添加");
                return; // 返回，终止继续执行下面的代码
            }
        }
        // 将新好友添加到好友列表中
        frdlist2=frdlist1+"|"+frdid;
        query.exec(QString("update userfriend set user_friend='%1' where user_id='%2'").arg(frdlist2).arg(id));
    }
}

void newFriendCCS::on_pushButton_15_clicked()
{
    QString frdid=ui->label_23->text();
    QSqlDatabase db = QSqlDatabase::database("sqlite1"); //建立数据库连接
    QSqlQuery query(db);
    QString id;
    query.exec("select user_id from loginuser");
    if(query.next())
    {
        id=query.value(0).toString();
    }
    QString str=QString("select user_friend from userfriend where user_id='%1'").arg(id);
    query.exec(str);
    QString frdlist1,frdlist2;
    //代码完全复用，可以看前面的注释
    if(query.next())
    {
        frdlist1=query.value(0).toString();
    }
    if(frdlist1.isEmpty())
    {
        bool a=query.exec(QString("update userfriend set user_friend='%1' where user_id='%2'").arg(frdid).arg(id));
        if(a)accept();
    }
    else
    {
        QStringList list=frdlist1.split("|");
        for(int i=0;i<list.count();i++)
        {
            if(list[i]==frdid)
            {
                QMessageBox::warning(this,"添加失败","该用户已经是你的好友，不能重复添加");
                return;
            }
        }
        frdlist2=frdlist1+"|"+frdid;
        query.exec(QString("update userfriend set user_friend='%1' where user_id='%2'").arg(frdlist2).arg(id));
    }
}

void newFriendCCS::on_pushButton_16_clicked()
{
    QString frdid=ui->label_25->text();
    QSqlDatabase db = QSqlDatabase::database("sqlite1"); //建立数据库连接
    QSqlQuery query(db);
    QString id;
    query.exec("select user_id from loginuser");
    if(query.next())
    {
        id=query.value(0).toString();
    }
    QString str=QString("select user_friend from userfriend where user_id='%1'").arg(id);
    query.exec(str);
    QString frdlist1,frdlist2;

    //代码完全复用，可以看前面的注释

    if(query.next())
    {
        frdlist1=query.value(0).toString();
    }
    if(frdlist1.isEmpty())
    {
        bool a=query.exec(QString("update userfriend set user_friend='%1' where user_id='%2'").arg(frdid).arg(id));
        if(a)accept();
    }
    else
    {
        QStringList list=frdlist1.split("|");
        for(int i=0;i<list.count();i++)
        {
            if(list[i]==frdid)
            {
                QMessageBox::warning(this,"添加失败","该用户已经是你的好友，不能重复添加");
                return;
            }
        }
        frdlist2=frdlist1+"|"+frdid;
        query.exec(QString("update userfriend set user_friend='%1' where user_id='%2'").arg(frdlist2).arg(id));
    }
}

void newFriendCCS::on_pushButton_18_clicked()
{
    QString frdid=ui->label_29->text();
    QSqlDatabase db = QSqlDatabase::database("sqlite1"); //建立数据库连接
    QSqlQuery query(db);
    QString id;
    query.exec("select user_id from loginuser");
    if(query.next())
    {
        id=query.value(0).toString();
    }
    QString str=QString("select user_friend from userfriend where user_id='%1'").arg(id);
    query.exec(str);
    QString frdlist1,frdlist2;

    //代码完全复用，可以看前面的注释

    if(query.next())
    {
        frdlist1=query.value(0).toString();
    }
    if(frdlist1.isEmpty())
    {
        bool a=query.exec(QString("update userfriend set user_friend='%1' where user_id='%2'").arg(frdid).arg(id));
        if(a)accept();
    }
    else
    {
        QStringList list=frdlist1.split("|");
        for(int i=0;i<list.count();i++)
        {
            if(list[i]==frdid)
            {
                QMessageBox::warning(this,"添加失败","该用户已经是你的好友，不能重复添加");
                return;
            }
        }
        frdlist2=frdlist1+"|"+frdid;
        query.exec(QString("update userfriend set user_friend='%1' where user_id='%2'").arg(frdlist2).arg(id));
    }
}

void newFriendCCS::on_pushButton_19_clicked()
{
    QString frdid=ui->label_31->text();
    QSqlDatabase db = QSqlDatabase::database("sqlite1"); //建立数据库连接
    QSqlQuery query(db);
    QString id;
    query.exec("select user_id from loginuser");
    if(query.next())
    {
        id=query.value(0).toString();
    }
    QString str=QString("select user_friend from userfriend where user_id='%1'").arg(id);
    query.exec(str);

    //代码完全复用，可以看前面的注释

    QString frdlist1,frdlist2;
    if(query.next())
    {
        frdlist1=query.value(0).toString();
    }
    if(frdlist1.isEmpty())
    {
        bool a=query.exec(QString("update userfriend set user_friend='%1' where user_id='%2'").arg(frdid).arg(id));
        if(a)accept();
    }
    else
    {
        QStringList list=frdlist1.split("|");
        for(int i=0;i<list.count();i++)
        {
            if(list[i]==frdid)
            {
                QMessageBox::warning(this,"添加失败","该用户已经是你的好友，不能重复添加");
                return;
            }
        }
        frdlist2=frdlist1+"|"+frdid;
        query.exec(QString("update userfriend set user_friend='%1' where user_id='%2'").arg(frdlist2).arg(id));
    }
}
//处理添加好友
void newFriendCCS::addwin(QString frdid)
{
    // 建立数据库连接
    QSqlDatabase db = QSqlDatabase::database("sqlite1");
    QSqlQuery query(db);
    int way = 1;
    QString ques;
    QString answ;

    // 查询好友的添加方式、问题和答案
    query.exec(QString("select addway, addquestion, addanswer from userdata where user_id='%1'").arg(frdid));
    if(query.next())
    {
        way = query.value(0).toInt();
        ques = query.value(1).toString();
        answ = query.value(2).toString();
    }

    QString id;

    // 查询当前登录用户的ID
    query.exec("select user_id from loginuser");
    if(query.next())
    {
        id = query.value(0).toString();
    }

    QString str = QString("select user_friend from userfriend where user_id='%1'").arg(id);
    query.exec(str);
    QString frdlist1, frdlist2;

    if(query.next())
    {
        frdlist1 = query.value(0).toString();
    }

    QStringList list = frdlist1.split("|");

    if(frdlist1.isEmpty())
    {
        // 如果好友列表为空，直接将新好友添加到列表中
        query.exec(QString("update userfriend set user_friend='%1' where user_id='%2'").arg(frdid).arg(id));
    }
    else
    {
        // 如果好友列表不为空，将新好友添加到列表的开头
        frdlist2 = frdid + "|" + frdlist1;
        query.exec(QString("update userfriend set user_friend='%1' where user_id='%2'").arg(frdlist2).arg(id));
    }

    QString ste = QString("select user_friend from userfriend where user_id='%1'").arg(frdid);
    query.exec(ste);
    QString frdlist3, frdlist4;

    if(query.next())
    {
        frdlist3 = query.value(0).toString();
    }

    if(frdlist3.isEmpty())
    {
        // 如果好友的好友列表为空，直接将当前用户添加为好友的好友
        query.exec(QString("update userfriend set user_friend='%1' where user_id='%2'").arg(id).arg(frdid));
    }
    else
    {
        // 如果好友的好友列表不为空，检查当前用户是否已经是好友的好友
        QStringList list = frdlist3.split("|");
        for(int i = 0; i < list.count(); i++)
        {
            if(list[i] == id)
            {
                return; // 如果已经是好友的好友，直接返回，不进行添加操作
            }
        }
        frdlist4 = id + "|" + frdlist3;
        query.exec(QString("update userfriend set user_friend='%1' where user_id='%2'").arg(frdlist4).arg(frdid));
    }
}
void newFriendCCS::on_pushButton_5_clicked()
{
    QString frdid=ui->label_8->text();
    QSqlDatabase db = QSqlDatabase::database("sqlite1"); //建立数据库连接
    QSqlQuery query(db);
    int way=1;
    QString ques;
    QString answ;
    query.exec(QString("select addway,addquestion,addanswer from userdata where user_id='%1'").arg(frdid));
    if(query.next())//此处有些不同，从query中获取了一些数据
    {
        way=query.value(0).toInt();
        ques=query.value(1).toString();
        answ=query.value(2).toString();
    }

    //代码完全复用，可以看前面的注释

    QString id;
    query.exec("select user_id from loginuser");
    if(query.next())
    {
        id=query.value(0).toString();
    }
    QString str=QString("select user_friend from userfriend where user_id='%1'").arg(id);
    query.exec(str);
    QString frdlist1,frdlist2;
    if(query.next())
    {
        frdlist1=query.value(0).toString();
    }
    QStringList list=frdlist1.split("|");
    for(int i=0;i<list.count();i++)
    {
        if(list[i]==frdid)
        {
            QMessageBox::warning(this,"添加失败","该用户已经是你的好友，不能重复添加");
            return;
        }
    }
    if(way==1)
        addwin(frdid);
    if(way==2)
    {
        int yy=ui->label_36->y();
        ui->label_37->setText(ui->label_13->text());
        ui->label_37->adjustSize();
        ui->label_38->move(ui->label_37->x()+ui->label_37->width()+5,yy);
        ui->label_44->setText(frdid);
        ui->widget_8->show();
    }
    if(way==3)
    {
        int yy=ui->label_39->y();
        ui->label_40->setText(ui->label_13->text());
        ui->label_40->adjustSize();
        ui->label_41->move(ui->label_40->x()+ui->label_40->width()+5,yy);
        ui->label_43->setText(frdid);
        ui->widget_9->show();
        ui->textEdit_2->setText(ques);
        ui->label_42->setText(answ);
    }
}

void newFriendCCS::on_pushButton_17_clicked()
{
    ui->widget_8->hide();
}

void newFriendCCS::on_pushButton_10_clicked()
{
    addwin(ui->label_44->text());
    ui->widget_8->hide();
}
//添加失败的函数
void newFriendCCS::on_pushButton_24_clicked()
{
    if(ui->lineEdit_3->text()==ui->label_42->text())
    {
        addwin(ui->label_43->text());
        ui->widget_9->hide();
    }
    else QMessageBox::warning(this,"添加失败","答案错误，添加失败");
}

void newFriendCCS::on_pushButton_23_clicked()
{
    ui->widget_9->hide();
}
