#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


bool isPalindrome(int x);
long reverse(int x);

int main() {

}

bool isPalindrome(int x) {
    if (x < 0) {
        return false;
    }
    long rev = reverse(x);
    if (x == rev) {
        return true;
    } 
    return false;
}


long reverse(int x) {

    long reverse = 0;

    while (x != 0) {
        reverse = (reverse * 10) + x % 10;
        x /= 10;
    }

    return reverse;
}
