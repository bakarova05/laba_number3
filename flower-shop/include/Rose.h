#ifndef ROSE_H
#define ROSE_H

#include "GardenFlower.h"

class Rose : public GardenFlower {
private:
    bool hasThorns;

public:
    Rose(const std::string& color, double price, int length, bool thorns);
    bool HasThorns() const;
    double GetPrice() const override;
};

#endif