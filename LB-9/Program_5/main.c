// TODO : Write a program which accept N and print first 5 multiples of N.

/*
    Algorithm
        START
            Accept one number from user as no.
            Iterate one loop till that 5
            Multiply that number from 1 to 5
            Display multiplication each time
        STOP
*/

#include<stdio.h>

void Multiple(int iValue)
{
    int iMult = 0;

    if(iValue == 0)
    {
        return;
    }

    for(iMult = 1; iMult<=5;iMult++)
    {
        printf("%d\t",(iValue*iMult));
    }

}

int main()
{
    int iNo = 0;

    printf("Enter a Number : \t");
    scanf("%d",&iNo);

    Multiple(iNo);

    return 0;
}