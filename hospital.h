#ifndef HOSPITAL_H
#define HOSPITAL_H

#include <QDialog>
#include "player.h"

namespace Ui {
class Hospital;
}

class Hospital : public QDialog
{
    Q_OBJECT

public:
    explicit Hospital(Player *player,QWidget *parent = nullptr);
    ~Hospital();

    void setHealth(long long h);
    void updateTipLabel();

private slots:
    void on_cureButton_clicked();
    void on_cancelButton_clicked();

private:
    Ui::Hospital *ui;
    long long health;
    Player *player;

signals:
    void healthChanged(long long health);
};

#endif // HOSPITAL_H
