#include<stdio.h>
int main()
{
    int n;
    printf("\n enter the numbers");
    scanf("%d",&n);

    if(n % 2 == 0)
    {
        printf("\n the number is even number");
    }else{
        printf("\n the number is odd number");
    }
    //using conditional operator
     (n % 2 == 0)?printf("\n the number is even number"):printf("\n the number is odd number");
    return 0;
}