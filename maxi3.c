#include<stdio.h>
int main()
{
    int numberOne,numberTwo,numberThree,max=0;
    printf("\n enter the three numbers");
    scanf("%d%d%d",&numberOne,&numberTwo,&numberThree);

    if((numberOne>numberTwo) && (numberOne>numberThree))
    {
        printf("\n the numberone max is %d",numberOne);

    }else if((numberTwo>numberOne) && (numberTwo>numberThree))
    {
        printf("\n the numbertwo max is %d",numberTwo);
    }else 
    {
        printf("\n the numberthree max is %d",numberThree);

    }

       // using conditional operator
      (numberOne>numberTwo)?((numberOne>numberThree)?printf("\n the numberone max is %d",numberOne)
        : printf("\n the numberthree max is %d",numberThree)):((numberTwo>numberThree)? printf("\n the numbertwo max is %d",numberTwo): printf("\n the numberthree max is %d",numberThree));
     
 return 0;   
}