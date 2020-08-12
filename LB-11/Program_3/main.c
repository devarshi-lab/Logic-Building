// todo : Write a program which accept range from user and return addition of all numbers in between that range. (Range should contains positive numbers only)

/*
    Algorithm
        START

            Accept range from user.
            Iterate one loop starting from first number user entered to second number
            Do addition off all numbers coming in the range
            Display addition of all numbers coming in that range

        STOP
*/

#include<stdio.h>

int Rangeaddition(int iValue1,int iValue2)
{
    int iSum = 0;

    if((iValue2<iValue1) || (iValue1<0) || (iValue2<0))
    {
        return -1;
    }
    for(iValue1;iValue1<=iValue2;iValue1++)
    {
        iSum += iValue1;
    }
    return iSum;
}
int main()
{
    int iFirst = 0, iSecond = 0;
    int iRet = 0;

    printf("Enter the range you want to add : \t");
    scanf("%d%d",&iFirst,&iSecond);

    iRet = Rangeaddition(iFirst,iSecond);

    if(iRet==-1)
    {
        printf("Invalid Range\n");
    }
    else
    {
        printf("Addition of numbers from %d and %d is %d\n",iFirst,iSecond,iRet);
    }
    
    return 0;
}