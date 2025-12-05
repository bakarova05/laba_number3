#ifndef CALCULATOR_H
#define CALCULATOR_H

#include "IOperation.h"
#include "ILogger.h"
#include <memory>

class Calculator {
private:
    std::unique_ptr<ILogger> logger;
    
public:
    Calculator(std::unique_ptr<ILogger> log) : logger(std::move(log)) {}
    
    double Calculate(double a, double b, IOperation* operation) {
        std::string message = "Calculating: " + 
                              std::to_string(a) + " " + 
                              operation->GetSymbol() + " " + 
                              std::to_string(b);
        logger->Log(message);
        
        double result = operation->Execute(a, b);
        
        message = "Result: " + std::to_string(result);
        logger->Log(message);
        
        return result;
    }
};

#endif