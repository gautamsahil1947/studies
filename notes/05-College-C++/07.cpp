// factorial of a number
#include <iostream>


// normal factorial function is ready
int factorial00(int num) {
    int result {1};
    for (int i = 1; i <= num; i++) {
        result *= i;
    }
    return result;
}

// factorial using recursion
int factorial01(int num) {
    if (num == 0 || num == 1) {
        return num;
    }
    return num * factorial01(num - 1);
}

int main() {
    std::cout << factorial00(5) << std::endl;
    std::cout << factorial00(2) << std::endl;
    std::cout << factorial00(4) << std::endl;
    std::cout << "-----------------" << std::endl;
    std::cout << factorial01(5) << std::endl;
    std::cout << factorial01(2) << std::endl;
    std::cout << factorial01(4) << std::endl;
}
