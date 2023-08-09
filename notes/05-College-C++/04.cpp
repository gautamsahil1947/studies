// finding all prime numbers upto a given no. 8 = 2,3,5,7
#include <iostream>

void printPrimes(int num);

int main() {
    printPrimes(8);
}

void printPrimes(int num) {
    bool isPrime = true;

    for (int i = 2; i < num; i++) {

        for (int j = 2; j < i; j++) {

            if (i % j == 0) {
                isPrime = false;
            }
        }

        if (isPrime) {
            std::cout << i << std::endl;
        }

        isPrime = true;
    }

}
