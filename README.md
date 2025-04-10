# basic_calculator
Basic Calculator in C++
Overview
This project is a simple implementation of a basic calculator using C++ classes. It performs the four fundamental arithmetic operations: addition, subtraction, multiplication, and division.

Features
Addition

Subtraction

Multiplication

Division

Code Explanation
Calculator Class: The Calculator class contains four public methods:

add(float a, float b): Adds two numbers.

sub(float a, float b): Subtracts the second number from the first.

mult(float a, float b): Multiplies two numbers.

div(float a, float b): Divides the first number by the second (no error handling for division by zero).

Main Function: The main() function creates instances of the Calculator class and performs calculations, printing the results to the console.

Installation
To compile and run the code, you need:

A C++ compiler (e.g., g++ or clang++)

An IDE or text editor to write and modify the code (e.g., Visual Studio Code, Xcode, or any text editor of your choice)

Compilation
Save the code in a file (e.g., calculator.cpp).

Open a terminal and navigate to the directory where the file is located.

Run the following command to compile the code:

bash
Copy
Edit
g++ -o calculator calculator.cpp
Run the compiled program:

bash
Copy
Edit
./calculator
Usage
Once the program is compiled, it will output the results of basic arithmetic operations for two sets of numbers:

The sum, difference, multiplication, and division of 25 and 10.5.

The sum, difference, multiplication, and division of 15 and 10.5.

Sample Output:

bash
Copy
Edit
The sum is: 35.5
The difference is: 10.5
The multiplication is: 20
The division is: 5
The sum is: 25.5
The difference is: 10
The multiplication is: 10
The division is: 2
Dependencies
This project does not have any external dependencies.

Contribution
Feel free to fork and improve the project. Contributions are always welcome!

License
This project is open-source and free to use. No license has been specified, so you may use it in any way you like.
