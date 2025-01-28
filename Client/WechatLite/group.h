#ifndef GROUP_H
#define GROUP_H

#include <QWidget>

namespace Ui {
class groupCCS;
}

class groupCCS : public QWidget
{
    Q_OBJECT

public:
    explicit groupCCS(QWidget *parent = nullptr);
    int nowRow = 4;
    ~groupCCS();

private:
    Ui::groupCCS *ui;
};

#endif // GROUP_H
