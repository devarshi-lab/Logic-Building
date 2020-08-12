// TODO : Write a program which accept number from user and print its numbers line.

/*
    Algorithm
        START
            Accept one number from user as no.
            Iterate one loop till that number
            Display that number line
        STOP
*/

#include<stdio.h>

void DisplayNumberLine(int iValue)
{
    int i = 0;

    if(iValue<0)
    {
        iValue = -iValue;
    }

    for(i = -iValue; i<= iValue;i++)
    {
        printf("%d\t",i);
    }

    
}

int main()
{
    int iNo = 0;

    printf("Enter a Number : \t");
    scanf("%d",&iNo);

    DisplayNumberLine(iNo);

    return 0;
}