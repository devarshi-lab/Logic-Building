//TODO : Write a program which accept total marks & obtained marks from user and calculate percentage. 


/* ALGORITHM
    
    START
        Accept total marks from user and store it in variable.
        Accept obtained marks from user and store it in variable.
        Calculate Percentage.
        Display not multiplication
    STOP
*/

#include "helper.c"

int main()
{
    int iTotal = 0,iObtain = 0;
    float fRet = 0;

    printf("Enter total marks : \t");
    scanf("%d",&iTotal);

    printf("Enter obtained marks : \t");
    scanf("%d",&iObtain);

    fRet = Percentage(iTotal,iObtain);

    if(fRet == -1)
    {
        printf("Total marks cannot be less than obtained marks\n");
    }
    else
    {
    printf("Percentage is %0.2f%% \n",fRet);
    }
    
    return 0;    
}