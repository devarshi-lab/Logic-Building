/* TODO : 1.Write a program which accept number from user and display below pattern.
Input : 5
Output : * * * * * # # # # #
Input : 6
Output : * * * * * * # # # # # # #
Input : -5
Output : * * * * * # # # # #
Input : 2
Output : * * # #
*/

/*
    ALGORITHM 
        START
            Accept number from user
            Display that number of pattern
        STOP
*/

#include<stdio.h>

void pattern(int iValue)
{
    int i = 0;
    if(iValue<0)
    {
        iValue = -iValue; 
    }
    for(i=1;i<=iValue;i++)
    {
        printf("*\t");
    }
    for(i=1;i<=iValue;i++)
    {
        printf("#\t");
    }
}
int main()
{
    int iNo = 0;

    printf("Enter a number : \t");
    scanf("%d",&iNo);

    pattern(iNo);

    return 0;
}