#include <iostream>


int main() {

    [[maybe_unused]] int t {0};
    goto sahil;

sahil:
    ; // a goto label is followed by a statementj
    goto sahil2;

sahil2:
    std::cout << "sahil2";

}
