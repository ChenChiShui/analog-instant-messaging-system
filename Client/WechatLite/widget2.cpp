#include "widget2.h"
#include "mainwindow.h"

listwidget2::listwidget2(QWidget *parent):QListWidget(parent)
{
}
void listwidget2::contextMenuEvent(QContextMenuEvent *event)
{
    // 获取鼠标右键点击位置的 QListWidgetItem
    QListWidgetItem *item = this->itemAt(event->pos());

    // 获取 QListWidgetItem 对应的 QWidget
    QWidget* pwig = this->itemWidget(item);

    // 在 pwig 中查找所有的 QLineEdit 控件
    QList<QLineEdit*> linedList = pwig->findChildren<QLineEdit*>();

    // 遍历找到的 QLineEdit 控件
    foreach (QLineEdit *lined, linedList)
    {
        // 如果 QLineEdit 的文本不为空，则保存到 frdid 变量中
        if (!lined->text().isEmpty())
        {
            frdid = lined->text();
        }
    }

    // 创建右键菜单对象
    QMenu* popMenu = new QMenu(this);

    // 设置右键菜单的样式
    popMenu->setStyleSheet("QMenu{color: rbg(80,80,80)}"
                           "QMenu::item:selected {background-color:rgb(128, 185, 240);color: rgb(245,245,245);}"
                           "QMenu::item{font-size: 9pt;"
                           "border: 0px solid rgb(140, 195, 245); background-color:rgb(232, 240, 255);"
                           "padding:5px 40px;"
                           "}");

    // 设置右键菜单的字体
    QFont font("微软雅黑", 10, 50);
    popMenu->setFont(font);

    // 如果右键点击的位置有 QListWidgetItem
    if (this->itemAt(event->pos()))
    {
        // 创建两个 QAction 对象，分别为 "置顶" 和 "删除聊天"
        QAction *action1 = new QAction("置顶", this);
        QAction *action2 = new QAction("删除聊天", this);

        // 将 QAction 添加到右键菜单中
        popMenu->addAction(action1);
        popMenu->addAction(action2);

        // 连接 QAction 的 triggered() 信号到相应的槽函数
        connect(action1, SIGNAL(triggered()), this, SLOT(actionone()));
        connect(action2, SIGNAL(triggered()), this, SLOT(actiontwo()));
    }

    // 在当前鼠标位置弹出右键菜单
    popMenu->exec(QCursor::pos());
}
void listwidget2::mousePressEvent(QMouseEvent * event)
{
    if(this->itemAt(event->pos()))
    {
        QListWidgetItem *item=this->itemAt(event->pos());
        item->setSelected(true);
        QWidget* pwig = this->itemWidget(item);
        QList<QLineEdit*> linedList = pwig->findChildren<QLineEdit*>();
        foreach(QLineEdit *lined, linedList)
        {
            if(!lined->text().isEmpty())
            {
                frdid=lined->text();
            }
        }
        action3->clicked();
    }
}

void listwidget2::actionone()
{
    action1->clicked();
}

void listwidget2::actiontwo()
{
    action2->clicked();
}
