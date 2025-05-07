#include <iostream>


using namespace std;

// Calculator class definition
class Calculator {
private:
    double num1, num2;

public:
    // Constructor
    Calculator(double n1 = 0, double n2 = 0) {
        num1 = n1;
        num2 = n2;
    }

    // Set numbers
    void setNumbers(double n1, double n2) {
        num1 = n1;
        num2 = n2;
    }

    // Addition
    double add() {
        return num1 + num2;
    }

    // Subtraction
    double subtract() {
        return num1 - num2;
    }

    // Multiplication
    double multiply() {
        return num1 * num2;
    }

    // Division
    double divide() {
        if (num2 == 0) {
            cout << "Error: Division by zero!" << endl;
            return NAN;
        }
        return num1 / num2;
    }
};

// Main function
int main() {
    Calculator calc;
    double a, b;
    char operation;

    cout << "Simple Calculator using Classes (C++)" << endl;
    cout << "-------------------------------------" << endl;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    cout << "Enter operation (+, -, *, /): ";
    cin >> operation;

    calc.setNumbers(a, b);

    cout << "Result: ";
    switch (operation) {
        case '+':
            cout << calc.add() << endl;
            break;
        case '-':
            cout << calc.subtract() << endl;
            break;
        case '*':
            cout << calc.multiply() << endl;
            break;
        case '/':
            cout << calc.divide() << endl;
            break;
        default:
            cout << "Invalid operation!" << endl;
    }

    return 0;
}
