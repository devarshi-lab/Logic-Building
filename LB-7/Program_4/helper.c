#include "header.h"

/*
    Function Name : Multiplication()
    Input : Integer
    Output : Integer
    Description : returns the multiplication of digits
    Author Name : Devarshi Pimpale
    Date : 04 August 2020
*/

int Multiplication(int iValue)
{
    int iRet = 1;
    int iDigit = 0;

    if(iValue<0)
    {
        iValue = -iValue;
    }

    while(iValue != 0)
    {
        iDigit = iValue % 10;
        
        iValue = iValue / 10;

        if(iDigit == 0)
        {
            continue;
        }
        
        iRet *= iDigit;
    }

    return iRet;
}