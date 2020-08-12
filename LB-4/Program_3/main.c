// TODO : Write a program which accept number from user and display all its non factors.

/*
    Algorithm
        START
            Accept one number from user and store it in one variable
            Get the non-factors of that number
            Display the Non-factors of that number.
        STOP
*/

#include "header.h"

int main()
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter the Number : \t");
    scanf("%d",&iValue);

    NonFact(iValue);

    return 0;
}