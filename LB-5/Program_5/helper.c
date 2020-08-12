#include "header.h"

/*
    Function Name : Percentage()
    Input : Integer,Integer
    Output : Float
    Description : Return the percentage of number
    Author Name : Mr. Devarshi Pimpale
    Date : 03 August 2020
*/

float Percentage(int iValue1,int iValue2)
{
    float fValue = 0.0;
    if((iValue1 == 0) || (iValue1<iValue2))
    {
        return -1;
    }
    else
    {
        fValue = (float)iValue2/(float)iValue1;
        return (fValue*100);
    }
    
}