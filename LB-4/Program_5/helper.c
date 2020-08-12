#include "header.h"
/*
    Function Name : FactDiff
    Input : integer
    Output : integer
    Description : return the diffrence between addition of factors and non-factors of number
    Author : Devarshi Pimpale
    Date : 01/08/2020
*/
int FactDiff(int iNo)
{
    int iValue = 0;
    int iSumFact = 0, iSumNon =0;

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
            iSumNon += iValue;
        }
        else if(iNo % iValue == 0)
        {
            iSumFact += iValue;
        }
    }

    return (iSumFact-iSumNon);

}