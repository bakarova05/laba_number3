#ifndef DIVIDEOPERATION_H
#define DIVIDEOPERATION_H

#include "IOperation.h"

class DivideOperation : public IOperation {
public:
    double Execute(double a, double b) override {
        if (b == 0) {
            throw std::runtime_error("Division by zero");
        }
        return a / b;
    }
    
    const char* GetSymbol() const override {
        return "/";
    }
};

#endif