#ifndef REGIST_H
#define REGIST_H

#include <QDialog>

namespace Ui {
class regist;
}

class registCCS : public QDialog
{
    Q_OBJECT

public:
    explicit registCCS(QWidget *parent = nullptr);
    ~registCCS();

private slots:
    void mousePressEvent(QMouseEvent *event);

    void mouseMoveEvent(QMouseEvent *event);

    void mouseReleaseEvent(QMouseEvent *event);

    void on_pushButton_clicked();

    void on_lineEdit_editingFinished();

    void on_lineEdit_4_editingFinished();

    void on_lineEdit_2_editingFinished();

    void on_lineEdit_3_editingFinished();

    void on_pushButton_2_clicked();

private:
    Ui::regist *ui;

    bool     m_pressed;
    QPoint   m_movePos;
    int ifregist[5];
};

#endif // REGIST_H
