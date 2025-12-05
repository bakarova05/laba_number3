#include "Rose.h"

Rose::Rose(const std::string& color, double price, int length, bool thorns)
    : GardenFlower("Rose", color, price, length), hasThorns(thorns) {}

bool Rose::HasThorns() const { return hasThorns; }

double Rose::GetPrice() const {
    double price = basePrice;
    if (hasThorns) price += 2.0;
    if (stemLength > 50) price += 5.0;
    return price;
}