#ifndef CUSTOM_H_INCLUDED
#define CUSTOM_H_INCLUDED

#include <termios.h>
#include <stdio.h>

namespace custom {

/** Initialize news terminal i/o settings */
void initTermios(int echo);

/** Restore old terminal i/o settings */
void resetTermios(void);

/** Read 1 character - echo defines echo mode */
char getch_(int echo);

/** Read 1 character without echo */
char getch(void);

/** Read 1 character with echo */
char getche(void);

/** Clear terminal */
void clrScr(void);

}
#endif // CUSTOM_H_INCLUDED
