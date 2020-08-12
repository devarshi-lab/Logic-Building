#include "header.h"
/*
    Function Name : SumNonFact
    Input : integer
    Output : integer
    Description : return the addition of non-factors of number
    Author : Devarshi Pimpale
    Date : 01/08/2020
*/
int SumNonFact(int iNo)
{
    int iValue = 0;
    int iSum = 0;

    if(iNo == 0 || iNo == 1)
    {
        return -1;
    }

    if(iNo<0)
    {
        iNo = -iNo;
    }

    for(iValue = 1;iValue<iNo;iValue++)
    {
        if(iNo % iValue != 0)
        {
            iSum += iValue;
        }
    }

    return iSum;

}