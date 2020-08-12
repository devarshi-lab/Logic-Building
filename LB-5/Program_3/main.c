//TODO : Write a program which accept two numbers and check whether numbers are equal or not. 


/* ALGORITHM
    START
        Accept two numbers from user and store it in two variables
        Check whether numbers are equal or not
        if numbers are equal
            Display equal
        Otherwise 
            Display not equal
    STOP
*/

#include "helper.c"

int main()
{
    int iNo1 = 0,iNo2 = 0;
    BOOL bRet = FALSE;

    printf("Enter First Number : \t");
    scanf("%d",&iNo1);

    printf("Enter Second Number : \t");
    scanf("%d",&iNo2);

    bRet = ChkNumberEqual(iNo1,iNo2);

    if(bRet == TRUE)
    {
        printf("Numbers are equal\n");
    }
    else if(bRet == FALSE)
    {
        printf("Numbers are not equal\n");
    }
    else
    {
        printf("Enter valid number...!\n");
    }

    return 0;
    
}