#include <stdio.h>

void repeat(int count);

int main()
{

//or set a = 1, b = 5, and then put variables into lines 10 and 12
    puts("At first the raven was like");
    repeat(1);
    puts("But then he was all");
    repeat(5);

    return(0);
}

void repeat(int count)
{
    int x;
    //repeats as long as the inputted variable (count), which is assigned as needed is more than x
    for(x=0;x<count;x++)
        puts("Nevermore!");
}
