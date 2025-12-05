#include <iostream>
#include <memory>
#include "ConsoleLogger.h"
#include "FileLogger.h"
#include "OperationFactory.h"
#include "Calculator.h"
#include "CalculatorPrinter.h"

int main() {
    std::cout << "=== Simple Calculator ===" << std::endl;
    
    // 1. Создаем логгер (можно поменять на FileLogger)
    auto logger = std::make_unique<ConsoleLogger>();
    // auto logger = std::make_unique<FileLogger>("log.txt");
    
    // 2. Создаем калькулятор
    Calculator calculator(std::move(logger));
    
    // 3. Создаем принтер для вывода
    CalculatorPrinter printer;
    
    try {
        // Пример вычислений
        
        // Сложение
        auto addOp = OperationFactory::CreateOperation('+');
        double result1 = calculator.Calculate(10, 5, addOp.get());
        printer.PrintCalculation(10, 5, "+", result1);
        
        // Вычитание
        auto subOp = OperationFactory::CreateOperation('-');
        double result2 = calculator.Calculate(10, 5, subOp.get());
        printer.PrintCalculation(10, 5, "-", result2);
        
        // Умножение
        auto mulOp = OperationFactory::CreateOperation('*');
        double result3 = calculator.Calculate(10, 5, mulOp.get());
        printer.PrintCalculation(10, 5, "*", result3);
        
        // Деление
        auto divOp = OperationFactory::CreateOperation('/');
        double result4 = calculator.Calculate(10, 5, divOp.get());
        printer.PrintCalculation(10, 5, "/", result4);
        
        // Деление на ноль (ошибка)
        try {
            double result5 = calculator.Calculate(10, 0, divOp.get());
            printer.PrintCalculation(10, 0, "/", result5);
        } catch (const std::exception& e) {
            printer.PrintError(e.what());
        }
        
    } catch (const std::exception& e) {
        printer.PrintError(e.what());
    }
    
    return 0;
}