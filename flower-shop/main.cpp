#include <iostream>
#include "Flower.h"
#include "Rose.h"
#include "Tulip.h"
#include "Bouquet.h"
#include "Chamomile.h"

int main() {
    std::cout << "=== Testing Flower Shop ===" << std::endl;

    // создаем букет
    Bouquet bouquet("ribbon");
    
    bouquet.AddFlower(new Rose("red", 10.0, 60, true));
    bouquet.AddFlower(new Rose("white", 12.0, 45, false));
    bouquet.AddFlower(new Tulip("yellow", 8.0, 35, 6));
    bouquet.AddFlower(new Tulip("pink", 9.0, 50, 8));
    bouquet.AddFlower(new Chamomile("white", 5.0, "field", true));

    std::cout << "Bouquet created!" << std::endl;
    std::cout << "Number of flowers: " << bouquet.GetFlowerCount() << std::endl;
    std::cout << "Total price: " << bouquet.GetTotalPrice() << " rub." << std::endl;

    return 0;
}