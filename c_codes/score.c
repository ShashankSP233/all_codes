#include <stdio.h>
#include <stdlib.h>

void main()
{
    int S1 ,S2 ,S3, avg;
    system("cls");
    printf("please enter score 1: ");
    scanf("%d", &S1);
    printf("please enter score 2: ");
    scanf("%d", &S2);
    printf("please enter score 3: ");
    scanf("%d", &S3);
    avg = (S1+S2 +S3)/3;
    if (avg>90)
    {
        printf("your score is S");
    }
    else if ( avg >80  && avg<=90)
    {
        printf("your score is A");
    }
    else if ( avg >70  && avg<=80)
    {
        printf("your score is B");
    }
    else if ( avg >60  && avg<=70)
    {
        printf("your score is C");
    }
    else if ( avg >50  && avg<=60)
    {
        printf("your score is D");
    }
    else if ( avg >40  && avg<=50)
    {
        printf("your score is E");
    }
    else 
    {
        printf("your score is F");
    }
}