#include "header.h"

/*
    Function Name : Multiplication()
    Input : Integer,Integer,Integer
    Output : Integer
    Description : Return the multiplication of 3 numbers
    Author Name : Mr. Devarshi Pimpale
    Date : 03 August 2020
*/

int Multiplication(int iValue1,int iValue2,int iValue3)
{
    if(iValue1 ==0 || iValue2 == 0 || iValue3 == 0)
    {
        return 0;
    }
    else
    {
    return (iValue1*iValue2*iValue3);
    }
}