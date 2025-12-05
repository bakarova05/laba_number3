#ifndef FLOWER_H
#define FLOWER_H

#include <string>

class Flower {
protected:
    std::string name;
    std::string color;
    double basePrice;

public:
    Flower(const std::string& name, const std::string& color, double price);
    virtual ~Flower() = default;
    
    virtual double GetPrice() const = 0;
    
    std::string GetName() const;
    std::string GetColor() const;
    double GetBasePrice() const;
};

#endif