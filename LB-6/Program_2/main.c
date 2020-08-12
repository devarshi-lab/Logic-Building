//TODO : Write a program which accept number from user and display its digits in reverse order.

/* 
Algorithm

        START
            Accept one number from user
            Iterate one loop to and divide that number by 10 
            If remainder = 0
                Display it contains zero
            Otherwise
            Display there is no zero
        STOP
*/

#include "helper.c"

int main()
{
    int iNo;
    BOOL bRet = FALSE;

    printf("Enter a Number :\t");
    scanf("%d",&iNo);

    bRet = ChkZero(iNo);

    if(bRet == TRUE)
    {
        printf("It contains zero\n");
    }
    else if(bRet == FALSE)
    {
        printf("It doesn't contain zero\n");
    }

    return 0;
}