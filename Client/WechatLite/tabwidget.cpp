#include "tabwidget.h"

tabwidget::tabwidget(QWidget *parent):QTabWidget(parent)
{
    setTabBar(new TabBar);
    setTabPosition(QTabWidget::West);
}

QSize TabBar::tabSizeHint(int index) const
{
    // 调用基类的 tabSizeHint() 函数获取原始的 tab 大小
    QSize s = QTabBar::tabSizeHint(index);

    // 将宽度和高度进行交换
    s.transpose();

    // 返回交换后的大小
    return s;
}

void TabBar::paintEvent(QPaintEvent *)
{
    // 创建一个 QStylePainter 对象，用于绘制样式元素
    QStylePainter painter(this);

    // 创建一个 QStyleOptionTab 对象，用于描述 Tab 的样式选项
    QStyleOptionTab opt;

    // 对每个 Tab 进行绘制
    for (int i = 0; i < count(); i++)
    {
        // 初始化样式选项
        initStyleOption(&opt, i);

        // 绘制 Tab 的形状
        painter.drawControl(QStyle::CE_TabBarTabShape, opt);

        // 保存当前的绘制状态
        painter.save();

        // 获取样式选项的矩形大小
        QSize s = opt.rect.size();

        // 交换矩形的宽度和高度
        s.transpose();

        // 创建一个居中的矩形
        QRect r(QPoint(), s);
        r.moveCenter(opt.rect.center());

        // 更新样式选项的矩形
        opt.rect = r;

        // 获取当前 Tab 的中心点
        QPoint c = tabRect(i).center();

        // 进行绘制坐标变换：平移、旋转、再平移回来
        painter.translate(c);
        painter.rotate(90);
        painter.translate(-c);

        // 绘制 Tab 的标签
        painter.drawControl(QStyle::CE_TabBarTabLabel, opt);

        // 恢复之前保存的绘制状态
        painter.restore();
    }
}
