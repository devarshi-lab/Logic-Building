// todo : 5.Write a program which accept accept range from user and display all numbers in between that range in reverse order.

/*
    Algorithm
        START

            Accept range from user.
            Iterate one loop starting from first number user entered to second number
            Display all numbers in reverse order coming in that range
        STOP
*/

#include<stdio.h>

void DisplayRangeReverse(int iValue1,int iValue2)
{
    if(iValue2<iValue1)
    {
        printf("Invalid range\n");
    }
    for(iValue2;iValue2 >= iValue1;iValue2--)
    {
        printf("%d\t",iValue2);
    }
}

int main()
{
    int iFirst = 0, iSecond = 0;

    printf("Enter the range you want to print : \t");
    scanf("%d%d",&iFirst,&iSecond);

    DisplayRangeReverse(iFirst,iSecond);

    return 0;
}