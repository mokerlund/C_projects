#include <stdio.h>

//to display a character
char gimmeanA(void);

int main()
{
    //optional use
    /*char grade;

    grade = gimmeanA();*/

    printf("On this test you received an %c.\n",/*grade*/gimmeanA());

    return(0);
}

char gimmeanA(void)
{
    return('A');
}
