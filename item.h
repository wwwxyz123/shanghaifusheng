#ifndef ITEM_H
#define ITEM_H

#include <string>
#include <QtGlobal>
class AdditionalEffect; // 附加效果的前向声明

class Item {
private:
    std::string name;          // 物品名称
    qint64 basePrice;       // 基础价格
    qint64 priceFluctuation;// 波动价格范围
    AdditionalEffect* effect;  // 附加效果指针

public:
    // 构造函数
    Item(const std::string& name, long long basePrice, long long priceFluctuation, AdditionalEffect* effect = nullptr);

    // 获取物品名称
    std::string getName() const;

    // 获取基础价格
    long long getBasePrice() const;

    // 获取波动范围
    long long getPriceFluctuation() const;

    // 动态生成当前价格
    long long generatePrice() const;

    // 获取附加效果
    AdditionalEffect* getEffect() const;

    // 设置附加效果
    void setEffect(AdditionalEffect* newEffect);
};

#endif // ITEM_H
