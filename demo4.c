#include<stdio.h>
int main()
{
    int numberOne, numberTwo, resultAdd = 0, resultSub = 0,resultMultiply = 0,resultDiv = 0, resultMod = 0, result = 0;
    printf("\n Enter the two numbers ");
    scanf("%d",&numberOne);
    scanf("%d",&numberTwo);

    resultAdd = numberOne + numberTwo;
    printf("\n Sum of two numbers :%d",resultAdd);

    resultSub = numberOne - numberTwo;
    resultDiv = numberOne / numberTwo;
    resultMultiply = numberOne * numberTwo;
    resultMod = numberOne % numberTwo;

 printf("\n The result of subtraction : %d",resultSub);
 printf("\n The result of multiplication : %d",resultMultiply);
 printf("\n The result of division : %d",resultDiv);
 printf("\n The result of mod operator : %d",resultMod);
 return 0;
}