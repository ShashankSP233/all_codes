#include <stdio.h>
#include <string.h>

void main()
{

    char str[100], name2[20];
    printf("please enter name:");
    scanf("%s", &str);
    strcpy(name2, str);
    strrev(str);
    if (strcmp(str,name2)==0)
    {
        printf("palindrome");
    }


}