#ifndef OPERATIONFACTORY_H
#define OPERATIONFACTORY_H

#include "IOperation.h"
#include "AddOperation.h"
#include "SubtractOperation.h"
#include "MultiplyOperation.h"
#include "DivideOperation.h"
#include <memory>

class OperationFactory {
public:
    static std::unique_ptr<IOperation> CreateOperation(char symbol) {
        switch (symbol) {
            case '+':
                return std::make_unique<AddOperation>();
            case '-':
                return std::make_unique<SubtractOperation>();
            case '*':
                return std::make_unique<MultiplyOperation>();
            case '/':
                return std::make_unique<DivideOperation>();
            default:
                throw std::invalid_argument("Unknown operation");
        }
    }
};

#endif