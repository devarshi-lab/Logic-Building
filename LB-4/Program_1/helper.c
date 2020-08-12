#include "header.h"
/*
    Function Name : MultFact
    Input : integer
    Output : integer
    Descripiton : return the multiplication of number send by user
    Author : Devarshi Pimpale
    Date : 01/08/2020
*/
int MultFact(int iNo)
{
    int iValue = 0;
    int iMult = 1;

    if(iNo == 0)
    {
        return 0;
    }
    if(iNo<0)
    {
        iNo = -iNo;
    }

    for(iValue = 1;iValue <= iNo/2; iValue++)
    {
        if(iNo % iValue == 0)
        {
            iMult *= iValue;
        }
    }

    return iMult;


}