#include<stdio.h>
int main()
{
    char ch;
    printf("\n enter the chracter");
    scanf("%c",&ch);

    if((ch >= 'A' && ch <= 'z') || (ch >= 'a' && ch <= 'z'))
    {
        printf("\n  is aplhabate");
    }else{
        printf("\n not alphabate");
    }
    // using conditinal oprator
    ((ch >= 'A' && ch <= 'z') || (ch >= 'a' && ch <= 'z'))?printf("\n  is aplhabate"):printf("\n not alphabate");
    return 0;
}