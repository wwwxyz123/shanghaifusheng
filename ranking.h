#ifndef RANKING_H
#define RANKING_H

#include <QWidget>
class start;
namespace Ui {
class Ranking;
}

class Ranking : public QWidget
{
    Q_OBJECT

public:
    explicit Ranking(QWidget *parent = nullptr);
    ~Ranking();

private slots:


    void on_backButton_clicked();

private:
    Ui::Ranking *ui;
    start *startingwindow=nullptr;
};

#endif // RANKING_H
