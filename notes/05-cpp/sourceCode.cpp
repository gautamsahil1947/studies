
// int main(void) {
//     std::cout << "Enter your full name: ";
//     std::string name {};
//     std::getline(std::cin >> std::ws, name);
//
//     std::cout << "Enter your favourite color: ";
//     std::string color {};
//     std::getline(std::cin >> std::ws, color);
//     std::cout << "Your name is " << name << " and your favorite color is " << color << std::endl;
//     return 0;
//
//     /*
//     [sahil@arch ~/.config/repos/studies/src]$ ./cpp
//     Enter your full name: Sahil Gautam
//     Your name is Sahil Gautam and your favorite color is pink Green
//     Enter your favourite color: pink Green
//     */
// }


// int main(void) {
//     std::cout << "Enter your full name: ";
//     std::string name {};
//     std::cin >> name; // this won't work as expected, as std::cin breaks on whitespace
//     std::cout << "Enter your favourite color: ";
//     std::string color {};
//     std::cin >> color;
//
//     std::cout << "Your name is " << name << " and your favourite color is " << color << std::endl;
//     // Enter your full name: sahil guatam
//     // Enter your favourite color: Your name is sahil and your favourite color is guatam
//     // this is the command line activity
//     //
//     // this happened because the >> operator for cin reads the characters till the first
//     // whitespace, and therefore reads the full name as two seperate words.
//     // therefore the second part of the full name waits in the buffer till the second extraction.
// }

// int main(void) {
// std::cout << "Hello, world\n"; // this is a c style string literal
//     std::string emptyString {};
//     std::cout << '[' << emptyString << ']' << std::endl; // this prints []
//
//     std::string name {"Sahil"};
//     std::cout << name << std::endl; // prints Sahil
//     name = "Gautam";
//     std::cout << name << std::endl; // prints Gautam
//     // this proves that std::string can handle different lengths of strings.
//     // for how these are stored, is same as c strings. there is an implisit
//     // \0 character at the end, which is obviously for the end of the string.
//
//     std::string myId {"45"};
//     std::cout << myId << std::endl;
//
//     return 0;
// }


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
