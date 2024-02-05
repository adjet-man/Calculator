#include <iostream>
#include <limits>
#include <cmath>

// Function declarations
double add(double num1, double num2);
double subtract(double num1, double num2);
double multiply(double num1, double num2);
double divide(double num1, double num2);
double power(double num1, double num2);
double square_root(double num);

// Main function
int main() {
    double num1, num2, result = 0;
    char op;

    while (true) {
        std::cout << "Enter first number: ";
        std::cin >> num1;

        while (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid input. Enter a valid number: ";
            std::cin >> num1;
        }

        std::cout << "Enter operator (+, -, *, /, ^, sqrt, c for clear, e for exit): ";
        std::cin >> op;

        if (op == 'e') {
            break;
        } else if (op == 'c') {
            result = 0;
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }

        if (op != 'sqrt') {
            std::cout << "Enter second number: ";
            std::cin >> num2;

            while (std::cin.fail()) {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cout << "Invalid input. Enter a valid number: ";
                std::cin >> num2;
            }
        }

        switch (op) {
            case '+':
                result = add(num1, num2);
                std::cout << num1 << " + " << num2 << " = " << result << std::endl;
                break;
            case '-':
                result = subtract(num1, num2);
                std::cout << num1 << " - " << num2 << " = " << result << std::endl;
                break;
            case '*':
                result = multiply(num1, num2);
                std::cout << num1 << " * " << num2 << " = " << result << std::endl;
                break;
            case '/':
                if (num2 == 0) {
                    std::cout << "Division by zero is undefined" << std::endl;
                    continue; // Skip calculation
                }
                
                result = divide(num1, num2);
                
                break;
            case '^':
                result = power(num1, num2);
                std::cout << num1 << " ^ " << num2 << " = " << result<<std::endl ;
                break;
            case 'sqrt':
                result = square_root(num1);
                
                 if (num1 < 0) {
                    std::cout<<"Square root of negative number is undefined"<<std::endl ;
                    continue; // Skip calculation
                 }
                 
                 else{
                     std::cout<<"sqrt("<<num1<<")="<<result<<std::endl ;
                 }
                 
                 
                
               
               
               break;

            default:
                std::cout<<"Invalid operator"<<std :: endl ;
        }
    }

    return 0;
}

// Function definitions
double add(double num1, double num2) {
    return num1 + num2;
}

double subtract(double num1, double num2) {
    return num1 - num2;
}

double multiply(double num1, double num2) {
    return num1 * num2;
}

double divide(double num1, double num2) {
    return num1 / num2;
}

double power(double num1, double num2) {
    return pow(num1, num2);
}

double square_root(double num) {
    return sqrt(num);
}