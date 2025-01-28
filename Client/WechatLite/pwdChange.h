#ifndef CHANGEPW_H
#define CHANGEPW_H

#include <QDialog>

namespace Ui {
class changepw;
}

class pwdChangeCCS : public QDialog
{
    Q_OBJECT

public:
    explicit pwdChangeCCS(QWidget *parent = nullptr);
    ~pwdChangeCCS();

    int ifchange;

private slots:
    void mousePressEvent(QMouseEvent *event);

    void mouseMoveEvent(QMouseEvent *event);

    void mouseReleaseEvent(QMouseEvent *event);

    void on_pushButton_clicked();

    void on_lineEdit_editingFinished();

    void on_lineEdit_2_editingFinished();

    void on_lineEdit_3_editingFinished();

private:
    Ui::changepw *ui;

    bool     m_pressed;
    QPoint   m_movePos;

    QString truepwd;
    int ifright[3];
};


#endif // CHANGEPW_H
