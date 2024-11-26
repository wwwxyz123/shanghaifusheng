#ifndef BUYCONFIRM_H
#define BUYCONFIRM_H

#include <QWidget>

namespace Ui {
class buyconfirm;
}

class buyconfirm : public QWidget
{
    Q_OBJECT

public:
    explicit buyconfirm(QWidget *parent = nullptr);
    ~buyconfirm();

private:
    Ui::buyconfirm *ui;
};

#endif // BUYCONFIRM_H
