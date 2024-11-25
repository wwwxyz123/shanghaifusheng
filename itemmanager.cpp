#include "itemmanager.h"
#include <fstream>
#include <sstream>
#include <random>
#include <iostream>
#include <QFile>
#include <QTextStream>
#include <iostream>
#include <sstream>
/*
物品的数据结构，存储方式是什么？
物品名，价格区间，附加效果


*/

// 构造函数
Item::Item(const std::string& name, long long minPrice, long long maxPrice, AdditionalEffect* effect)
    : name(name), minPrice(minPrice), maxPrice(maxPrice), effect(effect) {}

// 获取物品名称
std::string Item::getName() const {
    return name;
}

// 获取最低价格
long long Item::getMinPrice() const {
    return minPrice;
}

// 获取最高价格
long long Item::getMaxPrice() const {
    return maxPrice;
}

// 获取附加效果
AdditionalEffect* Item::getEffect() const {
    return effect;
}

// 设置附加效果
void Item::setEffect(AdditionalEffect* newEffect) {
    effect = newEffect;
}

// 设置价格区间
void Item::setPriceRange(long long minPrice, long long maxPrice) {
    this->minPrice = minPrice;
    this->maxPrice = maxPrice;
}

void Item::getNowPrice()const
{
    // price=
}
itemmanager::itemmanager() {}

bool itemmanager::loadItemsFromFile(const QString& filename) {
    QFile file(filename);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        std::cerr << "无法打开文件: " << filename.toStdString() << std::endl;
        return false;
    }

    QTextStream in(&file);
    while (!in.atEnd()) {
        QString line = in.readLine();
        std::istringstream iss(line.toStdString());
        std::string name;
        long long minPrice, maxPrice;

        // 假设文件中每行的格式为: 物品名 最低价格 最高价格
        if (!(iss >> name >> minPrice >> maxPrice)) {
            std::cerr << "文件格式错误: " << line.toStdString() << std::endl;
            continue;
        }

        // 创建物品对象并添加到数组中
        items.emplace_back(name, minPrice, maxPrice);
    }

    file.close();
    return true;
}

// 根据物品名称获取物品
Item* itemmanager::getItemByName(const std::string& name) {
    for (auto& item : items) {
        if (item.getName() == name) {
            return &item;
        }
    }
    return nullptr; // 未找到该物品时返回 nullptr
}

// 根据价格区间生成随机价格
long long itemmanager::generateRandomPrice(const Item& item) const {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<long long> dis(item.getMinPrice(), item.getMaxPrice());
    return dis(gen);
}

// 获取所有物品
const std::vector<Item>& itemmanager::getAllItems() const {
    return items;
}
