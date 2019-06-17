#include <stdio.h>
#include <math.h>

int main()
{
    double a;
    double b;
    printf("Please enter the first number: ");
    scanf("%lf",&a);
    printf("Now enter the second number: ");
    scanf("%lf",&b);
    double c = sqrt((a*a)+(b*b));
    printf("The answer is: %f",c);
    return(0);
}
