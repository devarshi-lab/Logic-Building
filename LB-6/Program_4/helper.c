#include "header.h"

/*
    Function Name : CountFour()
    Input : Integer
    Output : Integer
    Description : count the frequency of 4 in number
    Author Name : Devarshi Pimpale
    Date : 04 August 2020
*/

int CountFour(int iValue)
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
        if(iRet == 4)
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