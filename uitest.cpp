#include "uitest.h"
#include "ui_uitest.h"
#include <QTimer>

int targetMoney = 40212;   // 目标值
int targetBankMoney = 2302;
int targetHealth = 100;
int targetFame = 100;

int currentMoney = 0;
int currentBankMoney = 0;
int currentHealth = 0;
int currentFame = 0;

int stepValue = 0;  // 更新的步长

QTimer* timer; // 定时器

// 动画状态
enum AnimationState {
    None,
    Money,
    BankMoney,
    Health,
    Fame
};

AnimationState currentState = None;

uitest::uitest(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::uitest)
{
    ui->setupUi(this);

    // 初始化显示
    ui->money->setText(QString::number(currentMoney));
    ui->bankmoney->setText(QString::number(currentBankMoney));
    ui->health->setText(QString::number(currentHealth));
    ui->fame->setText(QString::number(currentFame));

    // 设置定时器
    int totalDuration = 2000;  // 总动画时间，单位毫秒
    int interval = 11;         // 定时器触发间隔，单位毫秒
    int steps = totalDuration / interval;  // 总步数

    // 计算步长时根据目标值大小动态调整
    int maxTargetValue = std::max({targetMoney, targetBankMoney, targetHealth, targetFame});
    stepValue = maxTargetValue / steps;  // 使用最大目标值来决定步长



    // 创建定时器并连接信号
    timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &uitest::updateValue);
    timer->start(interval);  // 启动定时器

    // 从 money 开始动画
    currentState = Money;
}

void uitest::updateValue()
{
    switch (currentState) {
    case Money:
        if (currentMoney < targetMoney) {
            currentMoney += stepValue;
            if (currentMoney > targetMoney) currentMoney = targetMoney;
            ui->money->setText(QString::number(currentMoney));
        } else {
            currentState = BankMoney;  // money 完成后加载 bankmoney
            currentMoney = targetMoney;  // 确保 currentMoney 完成时不再更新
        }
        break;

    case BankMoney:
        if (currentBankMoney < targetBankMoney) {
            currentBankMoney += stepValue;
            if (currentBankMoney > targetBankMoney) currentBankMoney = targetBankMoney;
            ui->bankmoney->setText(QString::number(currentBankMoney));
        } else {
            currentState = Health;  // bankmoney 完成后加载 health
            currentBankMoney = targetBankMoney;
        }
        break;

    case Health:
        if (currentHealth < targetHealth) {
            currentHealth += stepValue;
            if (currentHealth > targetHealth) currentHealth = targetHealth;
            ui->health->setText(QString::number(currentHealth));
        } else {
            currentState = Fame;  // health 完成后加载 fame
            currentHealth = targetHealth;
        }
        break;

    case Fame:
        if (currentFame < targetFame) {
            currentFame += stepValue;
            if (currentFame > targetFame) currentFame = targetFame;
            ui->fame->setText(QString::number(currentFame));
        } else {
            timer->stop();  // 所有动画完成，停止定时器
        }
        break;

    default:
        break;
    }
}

uitest::~uitest()
{
    delete ui;
}
