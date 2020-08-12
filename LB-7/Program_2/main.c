//TODO : Write a program which accept number from user and return the count of odd digits. 

/* 
Algorithm

        START
            Accept one number from user
            Iterate one loop to and divide that number by 10 
            Count the number odd number in it
            Display the count
        STOP
*/

#include "helper.c"

int main()
{
    int iNo=0;
    int iRet = 0;

    printf("Enter a Number :\t");
    scanf("%d",&iNo);

    iRet = CountOdd(iNo);

    printf("Number of odd digits present in it are : %d\n",iRet);

    return 0;
}