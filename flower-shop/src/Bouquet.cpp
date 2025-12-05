#include "Bouquet.h"
#include "Flower.h"
#include <iostream>

Bouquet::Bouquet(const std::string& wrap) : wrapping(wrap) {}

Bouquet::~Bouquet() {
    for (auto flower : flowers) {
        delete flower;
    }
    flowers.clear();
}

void Bouquet::AddFlower(Flower* flower) {
    if (flower) {
        flowers.push_back(flower);
    }
}

double Bouquet::GetTotalPrice() const {
    double total = 0.0;
    for (const auto& flower : flowers) {
        total += flower->GetPrice();
    }
    // Добавляем стоимость упаковки
    if (wrapping == "ribbon") total += 3.0;
    return total;
}

int Bouquet::GetFlowerCount() const {
    return static_cast<int>(flowers.size());
}