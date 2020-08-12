// TODO : Write a program which accept number from user and display its factors in decreasing order.

/*
    Algorithm
        START
            Accept one number from user and store it in one variable
            Get the factors of that number
            return the factors in decreasing order
        STOP
*/

#include "header.h"

int main()
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter the Number : \t");
    scanf("%d",&iValue);

    iRet = FactRev(iValue);

    if(iRet = 1)
    {
        printf("It doesn't have any factors...!\n");
    }

    return 0;
}