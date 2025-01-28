#ifndef LOGINLOSE_H
#define LOGINLOSE_H

#include <QDialog>

namespace Ui {
class loginlose;
}

class loginFindCCS : public QDialog
{
    Q_OBJECT

public:
    explicit loginFindCCS(QWidget *parent = nullptr);
    ~loginFindCCS();

private slots:
    void on_pushButton_clicked();

private:
    Ui::loginlose *ui;
};

#endif // LOGINLOSE_H
