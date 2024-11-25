#ifndef BUYLOSE_H
#define BUYLOSE_H

#include <QWidget>

namespace Ui {
class buylose;
}

class buylose : public QWidget
{
    Q_OBJECT

public:
    explicit buylose(QWidget *parent = nullptr);
    ~buylose();

private:
    Ui::buylose *ui;
};

#endif // BUYLOSE_H
