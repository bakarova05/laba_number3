#ifndef MULTIPLYOPERATION_H
#define MULTIPLYOPERATION_H

#include "IOperation.h"

class MultiplyOperation : public IOperation {
public:
    double Execute(double a, double b) override {
        return a * b;
    }
    
    const char* GetSymbol() const override {
        return "*";
    }
};

#endif