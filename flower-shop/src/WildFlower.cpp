#include "WildFlower.h"

WildFlower::WildFlower(const std::string& name, const std::string& color, 
                     double price, const std::string& origin)
    : Flower(name, color, price), origin(origin) {}

std::string WildFlower::GetOrigin() const { return origin; }