#include <iostream>


double doDivision(int x, int y) {
    if (y == 0) {
        std::cout << "Error: Couldn't divide by zero\n";
        std::exit(1);
    }
    return static_cast<double>(x) / y;
}

int main() {
    std::cout << doDivision(40, 5);
}

