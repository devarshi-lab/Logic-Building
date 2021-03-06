// todo : 4.Write a program which accept range from user and return addition of all even numbers in between that range. (Range should contains positive numbers only)

/*
    Algorithm
        START

            Accept range from user.
            Iterate one loop starting from first number user entered to second number
            Check the number is even or not
            Do the addition of all even numbers
            Display addition all even numbers coming in that range
        STOP
*/

#include<stdio.h>

int AddEven(int iValue1,int iValue2)
{
    int iSum = 0;

    if((iValue2<iValue1) || (iValue2<0) || (iValue1<0))
    {
        return -1;
    }

    for(iValue1;iValue1 <= iValue2;iValue1++)
    {
        if(iValue1 % 2 == 0)
        {
            iSum += iValue1;
        }
    }

    return iSum;
}

int main()
{
    int iFirst = 0, iSecond = 0;
    int iRet = 0;

    printf("Enter the range you want to print even numbers: \t");
    scanf("%d%d",&iFirst,&iSecond);

    iRet = AddEven(iFirst,iSecond);

    if(iRet == -1)
    {
        printf("Invalid Range\n");
    }
    else
    {
        printf("Addition of all even numbers is : %d\n",iRet);
    }
    

    return 0;
}