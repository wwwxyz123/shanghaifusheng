#include "ItemManager.h"
#include <fstream>
#include <sstream>
#include <random>
#include <iostream>

ItemManager::ItemManager() {}

bool ItemManager::loadItemsFromFile(const QString& filename) {
    std::ifstream file(filename.toStdString());
    if (!file.is_open()) {
        std::cerr << "Failed to open file: " << filename.toStdString() << std::endl;
        return false;
    }

    std::string line;
    while (std::getline(file, line)) {
        std::istringstream iss(line);
        std::string name;
        long long basePrice, priceFluctuation;
        if (iss >> name >> basePrice >> priceFluctuation) {
            items.emplace_back(name, basePrice, priceFluctuation);
        }
    }
    file.close();
    return true;
}

Item* ItemManager::getItemByName(const std::string& name) {
    for (auto& item : items) {
        if (item.getName() == name) {
            return &item;
        }
    }
    return nullptr;
}

std::vector<long long> ItemManager::generateAllPrices() const {
    std::vector<long long> prices;
    for (const auto& item : items) {
        prices.push_back(item.generatePrice());
    }
    return prices;
}

const std::vector<Item>& ItemManager::getAllItems() const {
    return items;
}

// 添加物品的方法
void ItemManager::addItem(const Item& item) {
    items.push_back(item);  // 使用 push_back 添加物品到 items 列表
}
