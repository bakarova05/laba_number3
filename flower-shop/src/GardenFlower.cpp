#include "GardenFlower.h"

GardenFlower::GardenFlower(const std::string& name, const std::string& color, 
                         double price, int length)
    : Flower(name, color, price), stemLength(length) {}

int GardenFlower::GetStemLength() const { return stemLength; }