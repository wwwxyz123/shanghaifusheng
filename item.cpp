#include "Item.h"
#include <cstdlib> // for random generation

Item::Item(const std::string& name, long long basePrice, long long priceFluctuation, AdditionalEffect* effect)
    : name(name), basePrice(basePrice), priceFluctuation(priceFluctuation), effect(effect) {}

std::string Item::getName() const {
    return name;
}

long long Item::getBasePrice() const {
    return basePrice;
}

long long Item::getPriceFluctuation() const {
    return priceFluctuation;
}

long long Item::generatePrice() const {
    return basePrice + (std::rand() % (priceFluctuation + 1));
}

AdditionalEffect* Item::getEffect() const {
    return effect;
}

void Item::setEffect(AdditionalEffect* newEffect) {
    effect = newEffect;
}
