// TODO : 2.Write a program which accept number from user and print numbers till that number.

/*
    Algorithm
        START
            Accept one number from user as no.
            Iterate one loop till that number
            Display that number starting from 1 till that number
        STOP
*/

#include<stdio.h>

void Display(int iValue)
{
    int i = 1;

    while(i <= iValue)
    {
        printf("%d\t",i);
        i++;
    }
}

int main()
{
    int iNo = 0;

    printf("Enter a Number : \t");
    scanf("%d",&iNo);

    Display(iNo);

    return 0;
}