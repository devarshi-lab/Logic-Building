//TODO : Write a program which accept one number from user and check whether that number is greater than 100 or not. 

/* ALGORITHM
    START
        Accept one number from user and store it in variable
        Check whether number is grater than 100
        if no>100
            Display Greater
        Otherwise 
            Display smaller
    STOP
*/

#include "helper.c"

int main()
{
    int iNo = 0;
    BOOL bRet = FALSE;

    printf("Enter a Number : \t");
    scanf("%d",&iNo);

    if(iNo==100)
    {
        printf("It is 100\n");
        return 0;
    }

    bRet = ChkNumber(iNo);

    if(bRet == TRUE)
    {
        printf("Number is greater than 100\n");
    }
    else if(bRet == FALSE)
    {
        printf("Number is smaller than 100\n");
    }
    else
    {
        printf("Enter valid number...!\n");
    }

    return 0;
    
}