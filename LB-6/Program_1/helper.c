#include "header.h"

/*
    Function Name : ReverseDigit()
    Input : Integer
    Output : Integer
    Description : print digits in reverse order
    Author Name : Devarshi Pimpale
    Date : 04 August 2020
*/

void ReverseDigit(int iValue)
{
    int iRet = 0;

    if(iValue<0)
    {
        iValue = -iValue;
    }

    while(iValue != 0)
    {
        iRet = iValue % 10;
        printf("%d\n",iRet);
        iValue = iValue / 10;
    }
}