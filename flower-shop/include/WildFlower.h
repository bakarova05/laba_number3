#ifndef WILDFLOWER_H
#define WILDFLOWER_H

#include "Flower.h"

class WildFlower : public Flower {
protected:
    std::string origin;

public:
    WildFlower(const std::string& name, const std::string& color, 
               double price, const std::string& origin);
    std::string GetOrigin() const;
};

#endif