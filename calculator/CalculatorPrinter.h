#ifndef CALCULATORPRINTER_H
#define CALCULATORPRINTER_H

#include <iostream>

class CalculatorPrinter {
public:
    void PrintCalculation(double a, double b, const char* operation, double result) {
        std::cout << "\n=== Calculation Result ===" << std::endl;
        std::cout << a << " " << operation << " " << b << " = " << result << std::endl;
        std::cout << "==========================" << std::endl;
    }
    
    void PrintError(const std::string& error) {
        std::cout << "\n!!! ERROR: " << error << " !!!" << std::endl;
    }
};

#endif