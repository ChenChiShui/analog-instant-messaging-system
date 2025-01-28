#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>

namespace Ui {
class login;
}

class loginCCS : public QDialog
{
    Q_OBJECT

public:
    explicit loginCCS(QWidget *parent = nullptr);
    ~loginCCS();
    QString getid();
private slots:
    QPixmap PixmapToRound(const QPixmap &src, int radius);
     
    void mousePressEvent(QMouseEvent *event);

    void mouseMoveEvent(QMouseEvent *event);

    void mouseReleaseEvent(QMouseEvent *event);

    void on_pushButton_3_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();


    void on_lineEdit_editingFinished();

private:
    Ui::login *ui;

    bool     m_pressed;
    QPoint   m_movePos;
    QString trueid;
};

#endif // LOGIN_H
