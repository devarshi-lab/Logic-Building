// TODO : 3.Write a program to multiply even factorial of given number


/*
    ALGORITHM 
        START
            Accept number from user
            Iterate one loop till the number becomes 0
            check the even number coming before that number till 0
            Do the multiplication of even numbers
            Display multiplication
        STOP
*/

#include<stdio.h>

int EvenFactMult(int iValue)
{
    int iMult = 1;
    if(iValue == 0 || iValue == 1)
    {
        return 0;
    }
    if(iValue<0)
    {
        iValue = -iValue;
    }
    while(iValue != 0)
    {
        if(iValue % 2 == 0)
        {
            iMult *= iValue;
        }
        iValue--;
    }

    return iMult;
}
int main()
{
    int iNo = 0;
    int iRet = 0;

    printf("Enter a Number: \t");
    scanf("%d",&iNo);

    iRet = EvenFactMult(iNo);

    printf("Answer is %d",iRet);

    return 0;
}