#include "header.h"

/*
    Function Name : CountTwo()
    Input : Integer
    Output : Integer
    Description : count the frequency of 2 in number
    Author Name : Devarshi Pimpale
    Date : 04 August 2020
*/

int CountTwo(int iValue)
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
        if(iRet == 2)
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