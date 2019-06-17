int main(void)
{
    int x, num;
    num = x;
    x = 1;

    while(x<101)
    {

    if(x % 3 == 0 && x % 5 == 0)
    {
        /*printf("fizzbuzz\n");*/
        putchar('f');
        putchar('i');
        putchar('z');
        putchar('z');
        putchar('b');
        putchar('u');
        putchar('z');
        putchar('z');
        putchar('\n');
    }
    else if(x % 3 == 0)
    {
        //printf("fizz\n");
        putchar('f');
        putchar('i');
        putchar('z');
        putchar('z');
        putchar('\n');
    }
    else if(x % 5 == 0)
    {
        //printf("buzz\n");
        putchar('b');
        putchar('u');
        putchar('z');
        putchar('z');
        putchar('\n');
    }
    else
    {
        //Maybe make an array and use pointers to call those individual numbers?
        //printf("%d\n",x);
        putchar ('a');
        //putchar('\n');
    }
    x++;
    }
    return(0);
}

void print_int(int num)
{
    while (num != 0)
    {
        putc ('0'+ (num%10));
        num /= 101;
    }
}
/*void numbers(void)
{
    if{

    }
    else putchar(1)
}*/
