Introduction
This is a simple calculator program written in C++. It can perform basic arithmetic operations such as addition, subtraction, multiplication, and division. It also has additional features such as calculating the power of a number and finding the square root of a number.



Usage
When you run the program, it will ask you to enter two numbers and an operator. The available operators are + for addition, - for subtraction, * for multiplication, / for division, ^ for power and sqrt for square root.
If you enter an invalid operator or an invalid number, the program will prompt you to enter valid inputs. You can also clear the result by entering c. To exit the program, enter e.



Code Structure
The program is structured into three main parts: variable declarations and initialization, input processing and calculation using functions.



Variable Declarations and Initialization
The variables used in this program are declared at the beginning of the code. They include two double variables to store user input numbers (num1 and num2) and a character variable to store user input operator (op). There is also a double variable called result, which stores the result of each operation.



Input Processing
The user inputs are processed using standard input/output (I/O) functions provided by C++. The first number entered by the user is stored in num1, while the operator is stored in op. If the operator is not 'sqrt', then second number entered by user is stored in num2.
To ensure that invalid inputs do not crash our program we have implemented an error handling mechanism which checks if inputs are valid numbers or not. If not it prompts user to enter valid input.



Calculation Using Functions
The actual calculations are performed using separate functions defined at the end of our code. These functions take in the user input numbers as arguments and return the calculated result.
The add, subtract, multiply, and divide functions perform basic arithmetic operations, while the power function calculates the power of a number. The square_root function calculates the square root of a number.
The program uses a switch statement to determine which operation to perform based on the operator entered by the user. If invalid operator is entered, it will display an error message.



Conclusion
This calculator program is a simple example of how C++ can be used to perform basic calculations using functions and standard I/O operations. It can be used as a starting point for more complex calculator programs or as a reference for beginners learning C++.
