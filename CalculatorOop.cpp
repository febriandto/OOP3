#include <iostream>

class Calculator {
public:

    Calculator(double num1, double num2) : a(num1), b(num2) {}

    double add() { return a + b; }
    double subtract() { return a - b; }
    double multiply() { return a * b; }
    double divide() {
        if (b != 0)
            return a / b;
        else {
            std::cerr << "Error: Division by zero!" << std::endl;
            return 0;
        }
    }

private:
    double a, b;
};

int main() {
    
    double num1, num2;
    char operation;

    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;
    std::cout << "Enter operation (+, -, *, /): ";
    std::cin >> operation;

    Calculator calc(num1, num2);

    switch (operation) {
        case '+': std::cout << "Result: " << calc.add() << std::endl; break;
        case '-': std::cout << "Result: " << calc.subtract() << std::endl; break;
        case '*': std::cout << "Result: " << calc.multiply() << std::endl; break;
        case '/': std::cout << "Result: " << calc.divide() << std::endl; break;
        default: std::cout << "Invalid operation!" << std::endl;
    }
    return 0;
}
