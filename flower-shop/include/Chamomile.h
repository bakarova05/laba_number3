#ifndef CHAMOMILE_H
#define CHAMOMILE_H

#include "WildFlower.h"

class Chamomile : public WildFlower {
private:
    bool isMedicinal;

public:
    Chamomile(const std::string& color, double price, 
              const std::string& habitat, bool medicinal);
    
    bool IsMedicinal() const;
    double GetPrice() const override;
};

#endif