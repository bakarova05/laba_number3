#include "Flower.h"

Flower::Flower(const std::string& name, const std::string& color, double price)
    : name(name), color(color), basePrice(price) {}

std::string Flower::GetName() const { return name; }
std::string Flower::GetColor() const { return color; }
double Flower::GetBasePrice() const { return basePrice; }