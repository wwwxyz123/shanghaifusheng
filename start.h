#ifndef START_H
#define START_H

#include <QWidget>
#include "loading.h"
namespace Ui {
class start;
}

class start : public QWidget
{
    Q_OBJECT

public:
    explicit start(QWidget *parent = nullptr);
    ~start();
private slots:

    void on_startbutton_clicked();

private:
    Ui::start *ui;
    loading *loadingwindow=nullptr;
};

#endif // START_H
