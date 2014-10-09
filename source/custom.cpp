#include "custom.h"

#include <termios.h>
#include <stdio.h>
#include <iostream>

namespace custom {

static struct termios old, news;

/* Initialize news terminal i/o settings */
void initTermios(int echo) {
    tcgetattr(0, &old); /* grab old terminal i/o settings */
    news = old; /* make news settings same as old settings */
    news.c_lflag &= ~ICANON; /* disable buffered i/o */
    news.c_lflag &= echo ? ECHO : ~ECHO; /* set echo mode */
    tcsetattr(0, TCSANOW,
              &news); /* use these news terminal i/o settings now */
}

/* Restore old terminal i/o settings */
void resetTermios(void) {
    tcsetattr(0, TCSANOW, &old);
}

/* Read 1 character - echo defines echo mode */
char getch_(int echo) {
    char ch;
    initTermios(echo);
    ch = getchar();
    resetTermios();
    return ch;
}

/* Read 1 character without echo */
char getch(void) {
    return getch_(0);
}

/* Read 1 character with echo */
char getche(void) {
    return getch_(1);
}

void clrScr(void) {
    std::cout << "\033[2J\033[1;1H";
}

}

