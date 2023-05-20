/*this code accepts an charecter
it is then sorted to find wether it is alphabet digit or a special char.
*/
#include <stdio.h>
#include <stdlib.h>

void main()
{
    char ch;
    system("cls");
    printf("please enter char: ");
    scanf("%c", &ch);
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
    {
        printf("your char %c is an alphabet", ch);
    }
    else if (ch >= '0' && ch <= '9')
    {
        printf("your char %c is an digit", ch);
    }
    else
    {
        printf("your char %c is an special character", ch);
    }
}