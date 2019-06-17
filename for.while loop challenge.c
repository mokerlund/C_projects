#include <stdio.h>

int main()
{
    int x;

    for(x=0;x<20;x++)
        printf("%d\n",x + 1);

    x = -10;
    while(x < 11)
    {
        printf("%d\n",x);
        x = x + 2;
    }

    return(0);
}
