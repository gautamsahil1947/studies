//convert binary into decimal 1010=10;
#include <iostream>
#include <cmath>

int binaryToDec(int num);

int main() {
    std::cout << binaryToDec(1011) << std::endl;
}

int binaryToDec(int num) {
    int decimal = 0;
    int i = 0;
    while (num != 0) {
        int bit_i = num % 10;
        if (bit_i == 1) {
            decimal += ((int) std::pow(2, i));
        } else if ( bit_i != 0) {
            return -1;
        }
        ++i;
        num /= 10;
    } 
    return decimal;
}
