#ifndef SUBTRACTOPERATION_H
#define SUBTRACTOPERATION_H

#include "IOperation.h"

class SubtractOperation : public IOperation {
public:
    double Execute(double a, double b) override {
        return a - b;
    }
    
    const char* GetSymbol() const override {
        return "-";
    }
};

#endif