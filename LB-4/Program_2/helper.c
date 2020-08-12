#include "header.h"
/*
    Function Name : FactRev
    Input : integer
    Output : void
    Description : return the factors of number in decreasing order
    Author : Devarshi Pimpale
    Date : 01/08/2020
*/
int FactRev(int iNo)
{
    int iValue = 0;

    if(iNo == 0 || iNo == 1)
    {
        return 1;
    }
    if(iNo<0)
    {
        iNo = -iNo;
    }

    for(iValue = iNo/2;iValue >= 1; iValue--)
    {
        if(iNo % iValue == 0)
        {
            printf("%d\t",iValue);
        }
    }


}