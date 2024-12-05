#ifndef SETTLEMENT_H
#define SETTLEMENT_H

#include <QWidget>

namespace Ui {
class settlement;
}

class settlement : public QWidget
{
    Q_OBJECT

public:
    explicit settlement(QWidget *parent = nullptr);
    ~settlement();

private:
    Ui::settlement *ui;
};

#endif // SETTLEMENT_H
