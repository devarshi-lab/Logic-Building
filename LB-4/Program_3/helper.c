#include "header.h"
/*
    Function Name : NonFact
    Input : integer
    Output : void
    Description : return the non-factors of number
    Author : Devarshi Pimpale
    Date : 01/08/2020
*/
int NonFact(int iNo)
{
    int iValue = 0;

    if(iNo<0)
    {
        iNo = -iNo;
    }

    if(iNo == 0 || iNo == 1)
    {
        printf("It doesn't have any factors...!\n");
    }

    for(iValue = 1;iValue <= iNo; iValue++)
    {
        if(iNo % iValue != 0)
        {
            printf("%d\t",iValue);
        }
    }

    return 0;

}