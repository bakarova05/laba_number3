#include "Chamomile.h"

Chamomile::Chamomile(const std::string& color, double price, 
                   const std::string& habitat, bool medicinal)
    : WildFlower("Chamomile", color, price, habitat), 
      isMedicinal(medicinal) {}

bool Chamomile::IsMedicinal() const { 
    return isMedicinal; 
}

double Chamomile::GetPrice() const {
    double price = GetBasePrice();
    if (isMedicinal) price *= 1.3;
    if (GetOrigin() == "mountain") price += 1.5;
    return price;
}