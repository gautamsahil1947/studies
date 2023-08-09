// sum of ist and last digit 1234= 5

#include <iostream>
#include <cmath>

int sumOfCorners(int num);
int lengthOfInteger(int num);

int main() {
    std::cout << sumOfCorners(104);
}

int sumOfCorners(int num) {

    int sum = 0;
    int length = lengthOfInteger(num);

    if (length == 1) {
        return num;
    }
    
    // adding last digit
    sum += (num % 10);


    // adding the first digit
    int divisor = (int) std::pow(10, length - 1);
    sum += (num - (num % divisor)) / divisor;
    return sum;

    
}

int lengthOfInteger(int num) {
    // because even 0 is 'one digit'
    int length = 0;

    do {
        num /= 10;
        ++length;
    } while (num != 0);

    return length;
}
