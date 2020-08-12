#include "header.h"

/*
    Function Name : CountOdd()
    Input : Integer
    Output : Integer
    Description : count the odd digits present in number.
    Author Name : Devarshi Pimpale
    Date : 04 August 2020
*/

int CountOdd(int iValue)
{
    int iRet = 0;
    int iCnt = 0;

    if(iValue<0)
    {
        iValue = -iValue;
    }

    while(iValue != 0)
    {
        iRet = iValue % 10;
        if(iRet % 2 != 0)
        {
            iCnt++;
        }
        iValue = iValue / 10;
    }

    return iCnt;
}