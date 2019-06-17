#include <stdio.h>

int main()
{//for loops are more cryptic
    //declaring the variable
    int x;
    // all conditions are defined in a single line
    //first is initialization, x is set/assigned to zero;
    //second is looping condition, loop continues as long as it is true;
    //third is iteration statement
    for(x=0;x<10;x++) //no semicolon
        printf("%d\n",x);

    return(0);
}
