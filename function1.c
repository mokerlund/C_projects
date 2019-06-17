#include <stdio.h>

//prototypes the function to tell the compiler that this is a new function
void blorf(void);

int main()
{
    puts("The main() function always runs first");
    blorf();
    //could be called again with blorf();
    puts("Thanks, blorf()");

    return(0);
}

void blorf(void)
{
    puts("The blorf() function runs when it's called");
}
