#include<stdio.h>
int main()
{
    int numberOne;
    float numberTwo;
    double numberThree;
    char x = 'A';
    printf("\n enter the number");
    scanf("%d",&numberOne);

    printf("\n The result is :%d",numberOne);

    printf("\n enter the number Two");
    scanf("%f",&numberTwo);

    printf("\nThe result is :%f",numberTwo);

    printf("\n enter the nuber Three");
    scanf("%lf",&numberThree);
    printf("\n The result is :%lf",numberThree);

    printf("\n character value is :%c",x);

    return 0;
}