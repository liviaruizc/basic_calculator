#include <iostream>

class Calculator { // Creating a class

public:
    float a, b;

    float add (float a, float b) { // Addition method
        return a+b;
    }

    float sub (float a, float b) { // Subtraction method
        return a-b;
    }

    float mult (float a, float b) { // Multiplication method
        return a*b;
    }

    float div (float a, float b) { // Division method
        return a/b;
    }


};

int main()
{

    Calculator c1; // Calling actions from class
    std::cout << "The sum is: " << c1.add(25.f,10.5) << "\n";
    std::cout << "The difference is: " << c1.sub(12.f,1.5) << "\n";
    std::cout << "The multiplication is: " << c1.mult(10.f,2.f) << "\n";
    std::cout << "The division is: " << c1.div(35.f,7.f) << "\n";

    Calculator c2;
    std::cout << "The sum is: " << c2.add(15.f,10.5) << "\n";
    std::cout << "The difference is: " << c2.sub(20.f,10.f) << "\n";
    std::cout << "The multiplication is: " << c2.mult(5.f,2.f) << "\n";
    std::cout << "The division is: " << c2.div(100.f,50.f) << "\n";


    return 0;
}
