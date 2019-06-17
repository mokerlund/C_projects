#include <stdio.h>

void cheers(void);

int main()
{
    puts("Everyone gets free dinner!");
    cheers();
    puts("Everyone gets free dessert!");
    cheers();

    return(0);
}

void cheers(void)
{
    //X is independent from each function and cannot be used across functions
    int x;

    for(x=0;x<3;x++)
        printf("Huzzah! ");
    putchar('\n');
}
