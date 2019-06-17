#include <stdio.h>

int ft_iterative_factorial(int nb)
{
    int i;
    int j;

    if(nb < 0)
        return 1;
    if(nb ==0)
        return 0;

    i = 1;
    j = 1;
    while(i <= nb)
    {
        j = (j*(i++));
    }
    printf("%i", j);
    return(j);
}
int main()
{
  ft_iterative_factorial(4);
  return(ft_iterative_factorial);
}
