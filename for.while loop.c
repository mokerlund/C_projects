#include <stdio.h>

int main()
{
    // declaring the integer/character/etc
    int x;

    // defining the value of the integer/character/etc
    x = 1;
    // starting the loop with the condition; looped back to check if still true
    while(x <= 10)
    // defining the condition
    {
        //output; always in "";
        printf("%d\n",x);
        //then increment x according to the condition; check if condition is still true
        x++; //or x = x +/- 2
    }

    return(0);
}
