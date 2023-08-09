// replacing digits by square 1234 = 14916
// Bad Solution --> uses reverse of orignal number
#include <iostream>
#include <cmath>



int length(int a);
int reverse(int a);
int giveSquared(int number);


int main() {
    int sampleNum = 12345;
    std::cout << "Number is " << sampleNum << std::endl;
    std::cout << "Number with Squared Digits is " <<  giveSquared(sampleNum) << std::endl;
    
}

int reverse(int a) {
    int rev = 0;
    while (a != 0) {
        rev = (rev * 10) + (a % 10);
        a /= 10;
    }
    return rev;
}


int length(int a) {
    int len = 0;
    while (a != 0) {
        a /= 10;
        ++len;
    }
    return len;
}

int giveSquared(int number) {
    int answer = 0;
    int reversed = reverse(number);

    while (reversed != 0) {
        int lastDigit = reversed % 10;
        int square = lastDigit * lastDigit;

        answer = (int)(answer * (std::pow(10, length(square))) + square);

        reversed /= 10;
    }
    return answer;
}
