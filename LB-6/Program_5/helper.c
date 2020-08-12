#include "header.h"

/*
    Function Name : CountFreq()
    Input : Integer
    Output : Integer
    Description : count the frequency of digits less than 6 in number
    Author Name : Devarshi Pimpale
    Date : 04 August 2020
*/

int CountFreq(int iValue)
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
        if(iRet <= 6)
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