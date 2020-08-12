// TODO : Write a program which accepts N from user and print all odd numbers up to N.

/*
    Algorithm
        START
            Accept one number from user as no.
            Iterate one loop till that number
            Check the odd number till that number
            Display all odd numbers 
        STOP
*/

#include<stdio.h>

void PrintOdd(int iValue)
{
    int iRet = 1;

    if(iValue<0)
    {
        iValue = -iValue;
    }

    for(iRet; iRet < iValue;iRet++)
    {
        if(iRet % 2 != 0)
        {
            printf("%d\t",iRet);
        }
    }

    
}

int main()
{
    int iNo = 0;

    printf("Enter a Number : \t");
    scanf("%d",&iNo);

    PrintOdd(iNo);

    return 0;
}