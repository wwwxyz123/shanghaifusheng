#ifndef UITEST_H
#define UITEST_H

#include <QWidget>

namespace Ui {
class uitest;
}

class uitest : public QWidget
{
    Q_OBJECT

public:
    explicit uitest(QWidget *parent = nullptr);
    ~uitest();
    void updateValue();
    int stepValue;
private:
    Ui::uitest *ui;
};

#endif // UITEST_H
