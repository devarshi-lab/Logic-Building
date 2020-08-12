/* TODO : Accept amount in US dollar and return its corresponding value in Indian currency.
    Consider 1$ as 70 rupees.
*/

/*
    ALGORITHM 
        START
            Accept amount from user in US Dollar($)
            Convert it into Indian Currency
            Display amount in Rupees
        STOP
*/

#include<stdio.h>

int ConvertCurrency(int iValue)
{
    return(iValue*70);
}
int main()
{
    int iAmount = 0;
    int iRet = 0;

    printf("Enter a amount(in $) : \t");
    scanf("%d",&iAmount);

    iRet = ConvertCurrency(iAmount);

    printf("%d$ in Rupees are %d\n",iAmount,iRet);

    return 0;
}