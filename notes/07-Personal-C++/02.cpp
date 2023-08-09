#include <iostream>
#include <cstdint>

std::int64_t pow(int base, int exponent) {
    std::int64_t total {1};
    for (int count {0}; count < exponent; ++count) {
        total *= base;
    }
    return total;
}

int main() {
    std::int64_t result = pow(2, 10);
    std::cout << result << std::endl;
    return 0;
}
