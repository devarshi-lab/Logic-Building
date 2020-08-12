// TODO : Write a program which accept number from user and display its multiplication of factors.

/*
    Alogorithm
        START
            Accept one number from user and store it in one variable
            Get the factors of that number
            return the multiplication of factors.
        STOP
*/

#include "header.h"

int main()
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter the Number : \t");
    scanf("%d",&iValue);

    iRet = MultFact(iValue);

    printf("Multiplication of factors of %d is : %d\n",iValue,iRet);

    return 0;
}