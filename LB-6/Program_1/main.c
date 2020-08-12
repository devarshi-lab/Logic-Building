//TODO : Write a program which accept number from user and display its digits in reverse order.

/* 
Algorithm

        START
            Accept one number from user
            Iterate one loop to and divide that number by 10 
            Store the remainder
            Display the remainder in reverse order
        STOP
*/

#include "helper.c"

int main()
{
    int iNo;

    printf("Enter a Number :\t");
    scanf("%d",&iNo);

    ReverseDigit(iNo);

    return 0;
}