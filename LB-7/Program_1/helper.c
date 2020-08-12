#include "header.h"

/*
    Function Name : CountEven()
    Input : Integer
    Output : Integer
    Description : count the even digits present in number.
    Author Name : Devarshi Pimpale
    Date : 04 August 2020
*/

int CountEven(int iValue)
{
    int iRet = 0;
    int iCnt = 0;

    if(iValue == 0)
    {
        return 1;
    }

    if(iValue<0)
    {
        iValue = -iValue;
    }

    while(iValue != 0)
    {
        iRet = iValue % 10;
        if(iRet % 2== 0)
        {
            iCnt++;
        }
        iValue = iValue / 10;
    }

    return iCnt;
}