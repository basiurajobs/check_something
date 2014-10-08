#include "custom.h"
#include "sizeof.h"

#include <iostream>

void printSizeOfBasicTypes(void) {
    custom::clrScr();
    std::cout <<
              "bool ---------- " << sizeof(bool) << " bytes (" << sizeof(bool)*8 << " bits)" << std::endl <<
              std::endl <<
              "char ---------- " << sizeof(char) << " bytes (" << sizeof(char)*8 << " bits)" << std::endl <<
              "wchar_t ------- " << sizeof(wchar_t) << " bytes (" << sizeof(wchar_t)*8 << " bits)" << std::endl <<
              std::endl <<
              "short int ----- " << sizeof(short) << " bytes (" << sizeof(short)*8 << " bits)" << std::endl <<
              "int ----------- " << sizeof(int) << " bytes (" << sizeof(int)*8 << " bits)" << std::endl <<
              "long ---------- " << sizeof(long) << " bytes (" << sizeof(long)*8 << " bits)" << std::endl <<
              "long long ----- " << sizeof(long long) << " bytes (" << sizeof(long long)*8 << " bits)" << std::endl <<
              std::endl <<
              "float --------- " << sizeof(float) << " bytes (" << sizeof(float)*8 << " bits)" << std::endl <<
              "double -------- " << sizeof(double) << " bytes (" << sizeof(double)*8 << " bits)" << std::endl <<
              "long double --- " << sizeof(long double) << " bytes (" << sizeof(long double)*8 << " bits)" << std::endl <<
              std::endl <<
              "Press any key to go back ...";
    custom::getch();
    return;
}
