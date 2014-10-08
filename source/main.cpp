#include "custom.h"
#include "sizeof.h"
#include "symbols.h"
/* dupa1 */
#include <iostream>

int main() {
    while(true) {
        custom::clrScr();
        std::cout <<
                  "=== check_something ===" << std::endl <<
                  std::endl <<
                  "1. List of types with their sizes." << std::endl <<
                  "2. ASCII No. of symbol." << std::endl <<
                  "3. Print full ASCII table." << std::endl <<
                  "4. Exit.";
        switch(custom::getch()) {
            case '1':
                printSizeOfBasicTypes();
                break;
            case '2':
                getAsciiSymbolNo();
                break;
            case '3':
                printFullAsciiTable();
                break;
            case '4':
                custom::clrScr();
                return 0;
                break;
            default:
                break;
        }
    }
    custom::clrScr();
    return 0;
}
