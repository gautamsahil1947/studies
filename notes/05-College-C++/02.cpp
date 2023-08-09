// replacing digits by square 1234 = 14916
#include <iostream>
#include <cmath>

void squared01(int x) {
    int answer = 0;
    int pow = 1;

    while (x > 0) {
        // find the last digit
        int last = x % 10;
        x /= 10;

        int sq = last * last;

        if (sq > 9) {
            answer += (sq * pow);
            pow *= 100;
        } else {
            answer += (sq * pow);
            pow *= 10;
        }
    }

    std::cout << answer << std::endl;
}

// using powers of 10
void squared02(int x) {
    int answer = 0;
    int pow = 0;

    while (x > 0) {
        int rem = x % 10;
        x /= 10;

        int sq = rem * rem;
        int factor = (int) std::pow(10, pow);

        if (sq > 9) {
            pow += 2;
        } else {
            pow += 1;
        }
        answer += sq*factor;
    }
    std::cout << answer << std::endl;
}

int main() {

    int x {123};
    // squared01(x);
    squared02(x);
}
