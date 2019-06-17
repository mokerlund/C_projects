#include <stdio.h>

int main()
{   //DO/WHILE loops will always execute at least once
    char ch;

    ch = 'A';

    do
    {
        putchar(ch);
        ch++;
    }
    while( ch != 'Z');

    putchar('\n');

    return(0);
}
