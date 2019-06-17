#include <stdio.h>

int main()
{
    //char text[] = "I am a string!"; is the same as:

    char text[] = {
        'I', ' ', 'a', 'm', ' ', 'a', ' ',
        's', 't', 'r', 'i', 'n', 'g', '!', '\0' /* null character MUST BE INCLUDED */
    };

    puts(text);

    return(0);
}
