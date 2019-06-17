#include <stdio.h>
#include <string.h>

int main()
{
    char fullname[64];
    char firstname[32];
    char lastname[32];

    /* fetch input */
    printf("Please write your first name: ");
    fgets(firstname,32,stdin);
    printf("Please write your last name: ");
    fgets(lastname,32,stdin);

    /* work with the strings */
    strcpy(fullname,firstname);
    strcat(fullname,lastname);

    /* display results */
    printf("%s",fullname);

    return(0);
}
