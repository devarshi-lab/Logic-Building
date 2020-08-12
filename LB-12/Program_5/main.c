// TODO : 3.Write a program to multiply even factorial of given number


/*
    ALGORITHM 
        START
            Accept number from user
            Iterate one loop till the number becomes 0
            check the odd and even number coming before that number till 0
            Do the multiplication of odd numbers and even numbers separately
            Display difference between their multiplication
        STOP
*/

#include<stdio.h>

int DiffEvenOddFact(int iValue)
{
    int iMult1 = 1,iMult2 = 1;
    if(iValue == 0)
    {
        return 0;
    }
    if(iValue<0)
    {
        iValue = -iValue;
    }
    while(iValue != 0)
    {
        if(iValue % 2 != 0)
        {
            iMult1 *= iValue;
        }
        else if(iValue % 2 == 0)
        {
            iMult2 *= iValue;
        }
        iValue--;
    }

    return (iMult2-iMult1);
}
int main()
{
    int iNo = 0;
    int iRet = 0;

    printf("Enter a Number: \t");
    scanf("%d",&iNo);

    iRet = DiffEvenOddFact(iNo);

    printf("Answer is %d",iRet);

    return 0;
}