#include <stdio.h>

int main()
{
   char a,b,c,*p;

    a = 'A';
    p = &a;
    b = *p;
    p = &c;
    *p = 'Z';

    printf("%c %c %c\n",a,b,c);


    return(0);
}
