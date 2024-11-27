#ifndef ITEMMANAGER_H
#define ITEMMANAGER_H

#include <vector>
#include "Item.h"
#include <QString>

class ItemManager {
private:
    std::vector<Item> items; // 物品列表

public:
    ItemManager();  // 构造函数

    // 从文件加载物品
    bool loadItemsFromFile(const QString& filename);

    // 根据物品名称获取物品
    Item* getItemByName(const std::string& name);

    // 动态生成所有物品的价格
    std::vector<long long> generateAllPrices() const;

    // 获取所有物品
    const std::vector<Item>& getAllItems() const;

    // 添加物品
    void addItem(const Item& item);  // 添加物品的方法
};

#endif // ITEMMANAGER_H
