#ifndef TULIP_H
#define TULIP_H

#include "GardenFlower.h"

class Tulip : public GardenFlower {
private:
    int petalCount;

public:
    Tulip(const std::string& color, double price, int length, int petals);
    int GetPetalCount() const;
    double GetPrice() const override;
};

#endif