#ifndef BOUQUET_H
#define BOUQUET_H

#include <vector>
#include <string>

class Flower; // Предварительное объявление

class Bouquet {
private:
    std::vector<Flower*> flowers;
    std::string wrapping;

public:
    Bouquet(const std::string& wrap = "paper");
    ~Bouquet();
    
    void AddFlower(Flower* flower);
    double GetTotalPrice() const;
    int GetFlowerCount() const;
};

#endif