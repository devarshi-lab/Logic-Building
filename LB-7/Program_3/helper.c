#include "header.h"

/*
    Function Name : CountRange()
    Input : Integer
    Output : Integer
    Description : count the frequency of digits which are in between 3 & 7
    Author Name : Devarshi Pimpale
    Date : 04 August 2020
*/

int CountRange(int iValue)
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
        if(iRet > 3 && iRet < 7)
        {
            iCnt++;
        }
        iValue = iValue / 10;
    }

    if(iCnt == 0)
    {
        return -1;
    }

    return iCnt;
}