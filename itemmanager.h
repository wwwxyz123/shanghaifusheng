#ifndef ITEMMANAGER_H
#define ITEMMANAGER_H

#include <Qstring>
#include<vector>
class AdditionalEffect; // 前向声明附加效果类

class Item {
private:
    std::string name;          // 物品名称
    long long minPrice;        // 最低价格
    long long maxPrice;        // 最高价格
    AdditionalEffect* effect;  // 附加效果指针

public:
    // 构造函数
    Item(const std::string& name, long long minPrice, long long maxPrice, AdditionalEffect* effect = nullptr);

    // 获取物品名称
    std::string getName() const;

    // 获取最低价格
    long long getMinPrice() const;

    // 获取最高价格
    long long getMaxPrice() const;

    // 获取附加效果
    AdditionalEffect* getEffect() const;

    // 设置附加效果
    void setEffect(AdditionalEffect* newEffect);

    // 设置价格区间
    void setPriceRange(long long minPrice, long long maxPrice);
};

class itemmanager {
private:
    std::vector<Item> items; // 用于存储物品的容器

public:
    itemmanager();  // 构造函数

    // 从文件加载物品
    bool loadItemsFromFile(const QString& filename);

    // 根据物品名称获取物品
    Item* getItemByName(const std::string& name);

    // 根据价格区间生成随机价格
    long long generateRandomPrice(const Item& item) const;

    // 获取所有物品
    const std::vector<Item>& getAllItems() const;
};

#endif // ITEMMANAGER_H
