#include<stdio.h>
#include<string.h>
int compare(char a[20] ,char b);
int compare(char a[20],char b)
{
    int i,j[2];
    for ( i = 0; i < strlen(a); i++)
    {
        if (a[i]==b)
        {
            j[0]=0;
            j[1]=i;
            break;

        }
    }
    return j;
    
}

void main()
{
    char storedString[20]="shashank",inputStr;
    int wrgCount=0,poscount=0;
    while (wrgCount<6)
    {
        printf("enter your guess");
        scanf("%c",&inputStr);
        if (compare(storedString,inputStr)[0]==0)
        {
            printf("%d", compare(storedString, inputStr)[1]);
            wrgCount+=6;
            poscount++;

        }
        
    }
    
}