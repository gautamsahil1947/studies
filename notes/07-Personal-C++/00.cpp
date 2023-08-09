#include <iostream>

int main() {
    // what does enumerated type mean.
    int sahil = 0;

    switch(sahil) {
        case 0:
            std::cout << "sahil" << std::endl;
            break;
        case 1:
            std::cout << "Sahil" << std::endl;
            [[fallthrough]]; // to tell the compiler not to complaint.
            // as this is intentional
        default:
            std::cout << "default;";
    }
}
