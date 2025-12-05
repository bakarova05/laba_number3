#ifndef GARDENFLOWER_H
#define GARDENFLOWER_H

#include "Flower.h"

class GardenFlower : public Flower {
protected:
    int stemLength;

public:
    GardenFlower(const std::string& name, const std::string& color, 
                 double price, int length);
    int GetStemLength() const;
};

#endif