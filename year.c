#include<stdio.h>
int main()
{
    int year;
    printf("\n enter the year");
    scanf("%d",&year);

    if((year % 4 == 0 && year % 100 != 0)||(year % 400 == 0))
    {
        printf("\n year is leap year");
    }else{
        printf("\n year is not leap year");
    }
    // using conditional operator
       ((year % 4 == 0 && year % 100 != 0)||(year % 400 == 0)) ? printf("\n year is leap year"):printf("\n year is not leap year");
    return 0;
}