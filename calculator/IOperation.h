#ifndef IOPERATION_H
#define IOPERATION_H

class IOperation {
public:
    virtual ~IOperation() = default;
    virtual double Execute(double a, double b) = 0;
    virtual const char* GetSymbol() const = 0;
};

#endif