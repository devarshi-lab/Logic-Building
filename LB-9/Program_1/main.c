// TODO : 1.Write a program which accept number from user and print that number of $ and * on screen.

/*
    Algorithm
        START
            Accept one number from user as no.
            Iterate one loop till that number
            Display that number of $ and *
        STOP
*/

#include<stdio.h>

void Pattern(int iValue)
{
    if(iValue < 0)
    {
        iValue = -iValue;
    }
    for(iValue;iValue>0;iValue--)
    {
        printf(" $\t *\t");
    }
}

int main()
{
    int iNo = 0;

    printf("Enter a Number : \t");
    scanf("%d",&iNo);

    Pattern(iNo);

    return 0;
}