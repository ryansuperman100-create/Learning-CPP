#include <iostream>
#include <string>
#include <cstdint>

int multiply(int a, int b) {
    return a * b;
}

void greet(const std::string& name) {
    std::cout << "Hello " << name << "\n";
}

int main() {
    if (1) {
        std::cout << "Haple" << std::endl;
    }
    std::uint8_t apple = 26;
    std::cout << static_cast<int>(apple) << std::endl;
    int product = multiply(5, 2);
    std::cout << "The product of 5 and 2 is " << product << "\n";
    return 0;
}