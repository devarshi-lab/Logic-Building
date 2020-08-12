#include "header.h"

/*
    Function Name : ChkNumber()
    Input : Integer
    Output : Boolean
    Description : Check the number is greater than 100 or not.
    Author Name : Mr. Devarshi Pimpale
    Date : 03 August 2020
*/

BOOL ChkNumber(int iValue)
{
    int i = iValue;

    if(i>100)
    {
        return TRUE;
    }
    else if(i<100)
    {
        return FALSE;
    }
}