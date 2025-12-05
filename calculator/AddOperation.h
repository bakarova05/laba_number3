#ifndef ADDOPERATION_H
#define ADDOPERATION_H

#include "IOperation.h"

class AddOperation : public IOperation {
public:
    double Execute(double a, double b) override {
        return a + b;
    }
    
    const char* GetSymbol() const override {
        return "+";
    }
};

#endif