// todo : Write a program which accept range from user and display all even numbers in between that range.

/*
    Algorithm
        START

            Accept range from user.
            Iterate one loop starting from first number user entered to second number
            Check the number is even or not
            Display all even numbers coming in that range
        STOP
*/

#include<stdio.h>

void DisplayEven(int iValue1,int iValue2)
{
    if(iValue2<iValue1)
    {
        printf("Invalid range\n");
        return;
    }

    printf("Even numbers from %d and %d are \n",iValue1,iValue2);

    for(iValue1;iValue1 <= iValue2;iValue1++)
    {
        if(iValue1 % 2 == 0)
        {
            printf("%d\t",iValue1);
        }
    }
}

int main()
{
    int iFirst = 0, iSecond = 0;

    printf("Enter the range you want to print even numbers: \t");
    scanf("%d%d",&iFirst,&iSecond);

    DisplayEven(iFirst,iSecond);

    return 0;
}