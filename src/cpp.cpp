#include <iostream>
#include <bitset>

int main() {

}

// int main() {
//     // getting to know what the bitset function does
//     std::bitset<32> hex1 (0x0001); // represents 1 of decimal
//     std::bitset<32> hex2 (0x0010); // reperesents 16 of decimal
//
//     std::bitset<32> oct1 (01); // represents 1 of decimal
//     std::bitset<32> oct2 (010); // reperesents 8 of decimal
//
//     std::bitset<32> bin1 (0b01);
//     std::bitset<32> bin2 (0b11);
//
//     std::cout << hex1 << " " << hex2 << std::endl;
//     std::cout << oct1 << " " << oct2 << std::endl; 
//     std::cout << bin1 << " " << bin2 << std::endl;
//     // hence it has been proved that the type std::bitset (not a function)
//     // converts a number from any system to a binary string
// }

// int main() {
//     int x0 {0b0001};
//     int x1 {0b0010};
//     int h0 {0x0001};
//     int h1 {0x0010};
//     std::cout << x0 << " " << x1 << std::endl;
//     std::cout << h0 << " " << h1 << std::endl;
//
//     int bin {0b1011'0010};
//     std::cout << bin << std::endl;
//
//     std::bitset<8> bitset (0b00010001);
//     std::cout << bitset << std::endl;
//
//     std::cout << std::bitset<4>(0x0011) << std::endl; // this one prints only 0001
//     // this is because of it being a hex binary number. So one digit of a hex number 
//     // represents 4 bits, and since the size of displayible bitset is 4 bits as specified
//     // in the bitset<here>, it is only showing the 4 bytes corresponding to the first character
//     std::cout << std::bitset<8>(0x0011) << std::endl; // std bit
//     std::cout << std::bitset<64>(0x11) << std::endl;
//
// }

// int main() {
//     int x {0xF};
//     std::cout << x << std::endl;
// }


// int main() {
//     std::cout << "Hello, world\n"; 
//     return 0;
// }
