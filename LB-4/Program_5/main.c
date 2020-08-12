// TODO : Write a program which accept number from user and display all its non factors.

/*
    Algorithm
        START
            Accept one number from user and store it in one variable
            Get the factors and non-factors of that number
            Display the difference between addition factors and  Non-factors of that number.
        STOP
*/

#include "header.h"

int main()
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter the Number : \t");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);
    
    if(iRet == -1)
    {
        printf("It doesn't have any factors...!\n");
    }
    else
    {
        printf("Difference between all factors and non-factors is %d\n",iRet);
    }
    return 0;
}