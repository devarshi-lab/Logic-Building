#include "header.h"

/*
    Function Name : DiffAdd()
    Input : Integer
    Output : Integer
    Description : return the difference between summation of all even numbers
                and all odd numbers present in number
    Author Name : Devarshi Pimpale
    Date : 04 August 2020
*/

int DiffAdd(int iValue)
{
    int iEvenSum = 0;
    int iOddSum = 0;
    int iDigit = 0;

    if(iValue<0)
    {
        iValue = -iValue;
    }

    while(iValue != 0)
    {
        iDigit = iValue % 10;
        if(iDigit %2 != 0)
        {
            iOddSum += iDigit;
        }
        else if(iDigit % 2 == 0)
        {
            iEvenSum += iDigit;
        }
        iValue = iValue / 10;
    }

    return (iEvenSum-iOddSum);
}