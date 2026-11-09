#include <iostream>

int multiply(int a, int b) {
    return a * b;
}

void greet(const std::string& name) {
    std::cout << "Hello " << name << "\n";
}

int main() {
    int product = multiply(5, 2);
    greet("Sam");
    std::cout << "The product of 5 and 2 is " << product << "\n";
    return 0;
}