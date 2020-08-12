// todo : 1.Write a program which accept range from user and display all numbers in between that range.

/*
    Algorithm
        START

            Accept range from user.
            Iterate one loop starting from first number user entered to second number
            Display all numbers coming in that range
        STOP
*/

#include<stdio.h>

void DisplayRange(int iValue1,int iValue2)
{
    if(iValue2<iValue1)
    {
        printf("Invalid range\n");
    }
    for(iValue1;iValue1 <= iValue2;iValue1++)
    {
        printf("%d\t",iValue1);
    }
}

int main()
{
    int iFirst = 0, iSecond = 0;

    printf("Enter the range you want to print : \t");
    scanf("%d%d",&iFirst,&iSecond);

    DisplayRange(iFirst,iSecond);

    return 0;
}