#include "custom.h"
#include "symbols.h"

#include <iostream>

void getAsciiSymbolNo(void) {
    while(true) {
        custom::clrScr();
        std::cout << "Insert symbol " << std::endl;
        char cSymbol = custom::getch();
        std::cout << std::endl <<
                  "You pressed: " << cSymbol << std::endl <<
                  "ASCII No. is: " << int(cSymbol) << std::endl <<
                  std::endl <<
                  "1. Check another symbol." << std::endl <<
                  "2. Go back.";
        while(true) {
            bool anotherSymbol = false;
            switch(custom::getch()) {
                case '1':
                    anotherSymbol = true;
                    break;
                case '2':
                    return;
                    break;
                default:
                    break;
            }
            if(anotherSymbol) break;
        }
    }
}

void printFullAsciiTable(void) {
    custom::clrScr();
    std::cout << "32-126" << std::endl <<
              std::endl;
    for(int i=32; i<127; i++)
        std::cout << (unsigned char)(i) << " ----- " << int(i) << std::endl;
    std::cout << std::endl <<
              "128 - 255" << std::endl <<
              std::endl;
    for(int i=128; i<256; i++)
        std::cout << (unsigned char)(i) << " ----- " << int(i) << std::endl;
    std::cout << std::endl <<
              "Press any key to go back ...";
    custom::getch();
    return;
}
