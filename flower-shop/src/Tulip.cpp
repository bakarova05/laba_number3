#include "Tulip.h"

Tulip::Tulip(const std::string& color, double price, int length, int petals)
    : GardenFlower("Tulip", color, price, length), petalCount(petals) {}

int Tulip::GetPetalCount() const { return petalCount; }

double Tulip::GetPrice() const {
    double price = basePrice + (petalCount * 0.5);
    if (stemLength > 40) price += 3.0;
    return price;
}