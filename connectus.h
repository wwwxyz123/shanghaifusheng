#ifndef CONNECTUS_H
#define CONNECTUS_H

#include <QWidget>

namespace Ui {
class connectUs;
}

class connectUs : public QWidget
{
    Q_OBJECT

public:
    explicit connectUs(QWidget *parent = nullptr);
    ~connectUs();

private:
    Ui::connectUs *ui;
};

#endif // CONNECTUS_H
