// Patterns questions
#include <iostream>

void pattern00(int num);
/*
 *  * * * * *
 *  * * * * *
 *  * * * * *
 *  * * * * *
 *  * * * * *
 *
 */
void pattern01(int num);
/*
 *  *
 *  * *
 *  * * *
 *  * * * *
 *  * * * * *
 */
void pattern02(int num);
/*
    1
    1 2
    1 2 3
    1 2 3 4
    Here column number is starting from 1 and 
    approaching row number (inclusively);
*/
void pattern03(int num);
/*
 * for num = 5, it should print
 * ....1
 * ...121
 * ..12321
 * .1234321
 * 123454321
 */
void pattern04(int num);
/*
 * The for loop part is sorted.
 * For logic, if there doesn't seem any logic row-wise,
 * then try finding the logic columnwise
 *
 *  1
 *  0 1
 *  1 0 1
 *  0 1 0 1
 *  1 0 1 0 1
 * Floid's triangle (spell check required)
 */

int main() {
    // pattern00(5);
    // pattern01(5);
    // pattern02(5);
    // pattern03(5);
    // pattern04(5);
}


void pattern00(int num) {
    for (int i = 0; i < num; i++) {
        for (int j = 0; j < num; j++) {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }
}


void pattern01(int num) {
    for (int i = 0; i < num; i++) {
        for (int j = 0; j < i + 1; j++) {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }
}




void pattern02(int num) {
    for (int i = 1; i < num; ++i) {
        for (int j = 1; j < i + 1; ++j) {
            std::cout << j << " ";
        }
        std::cout << std::endl;
    }

}

void pattern03(int num) {
    for (int i = 0; i < num; ++i) {
        // print the spaces as '.'
        for (int j = 0; j < num - i - 1; ++j) {
            std::cout << ".";
        }

        // print the column

        for (int j = 0; j <= (2 * i); ++j) {
            if (j > i) {
                std::cout << (2 * i) + 1 - j;
            } else {
                std::cout << j + 1;
            }
        }
        std::cout << std::endl;
    }
}


void pattern04(int num) {
    for (int i = 0; i < num; i++) {
        for (int j = 0; j < i + 1; j++) {
            if ((i == j) || (i - j) % 2 == 0) {
                std::cout << 1 << " ";
            } else {
                std::cout << 0 << " ";
            }
        }
        std::cout << std::endl;
    }
}
