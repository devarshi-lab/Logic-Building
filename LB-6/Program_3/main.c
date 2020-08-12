//TODO : Write a program which accept number from user and count frequency of 2 in it. 

/* 
Algorithm

        START
            Accept one number from user
            Iterate one loop to and divide that number by 10 
            Store the remainder and frequency of 2 in that number 
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

    iRet = CountTwo(iNo);

    if(iRet == -1)
    {
        printf("It doesn't contain 2\n");
    }
    else
    {
        printf("Frequency of 2 present in Number is : %d\n",iRet);
    }

    return 0;
}