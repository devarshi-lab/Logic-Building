#include "header.h"

/*
    Function Name : ChkZero()
    Input : Integer
    Output : Boolean
    Description : check whether number contains zero or not
    Author Name : Devarshi Pimpale
    Date : 04 August 2020
*/

BOOL ChkZero(int iValue)
{
    int iRet = 0;

    while(iValue != 0)
    {
        iRet = iValue % 10;
        if(iRet == 0)
        {
            break;  //never write return in loop or condition.
        }
        iValue = iValue / 10;
    }

    if(iRet == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}