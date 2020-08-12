//TODO : Write a program which accept number from user and return the count of digits in between 3 and 7. 

/* 
Algorithm

        START
            Accept one number from user
            Iterate one loop to and divide that number by 10 
            Count the digits which are in between 3 and 7
            Display the count
        STOP
*/

#include "helper.c"

int main()
{
    int iNo = 0;
    int iRet = 0;

    printf("Enter a Number :\t");
    scanf("%d",&iNo);

    iRet = CountRange(iNo);

    if(iRet == -1)
    {
        printf("Frequency of digits between 3 & 7 present in Number is : 0");
    }
    else
    {
        printf("Frequency of digits between 3 & 7 present in Number is : %d\n",iRet);
    }

    return 0;
}