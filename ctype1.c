#include <stdio.h>
#include <ctype.h>

int main()
{
    //could also use char
    int ch = 'a';
    //if %d used, the character's code value is displayed
    printf("Original %c\n",ch);
    printf("Lowercase %c\n",tolower(ch));
    printf("Uppercase %c\n",toupper(ch));
    printf("Original %c\n",ch);

    return(0);
}
