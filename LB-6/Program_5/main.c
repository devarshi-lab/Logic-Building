//TODO : Write a program which accept number from user and count frequency of such a digits which are less than 6. 

/* 
Algorithm

        START
            Accept one number from user
            Iterate one loop to and divide that number by 10 
            Store the remainder and frequency of digits less than 6 in that number 
            Display the the frequency
        STOP
*/

#include "helper.c"

int main()
{
    int iNo = 0;
    int iRet = 0;

    printf("Enter a Number :\t");
    scanf("%d",&iNo);

    iRet = CountFreq(iNo);

    if(iRet == -1)
    {
        printf("It doesn't contain digits less than 6\n");
    }
    else
    {
        printf("Frequency of digits less than 6 present in Number is : %d\n",iRet);
    }

    return 0;
}