#include<stdio.h>
int main()
{
    int numberOne,numberTwo;
    printf("\n enter the  two numbers");
    scanf("%d%d",&numberOne,&numberTwo);
    if(numberOne>numberTwo)
    {
     printf("\n number is maximum",numberOne);
    }else{
        printf("\n number is not maximum",numberTwo);
    }

     //using conditional operator
    (numberOne>numberTwo)? printf("\n number is maximum",numberOne): printf("\n number is not maximum",numberTwo);
    return 0;
}