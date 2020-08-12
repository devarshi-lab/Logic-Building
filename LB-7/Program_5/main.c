//TODO : Write a program which accept number from user and return difference between summation of even digits and summation of odd digits. 

/* 
Algorithm

        START
            Accept one number from user
            Iterate one loop to and divide that number by 10 until it becomes 0 
            Store the remainder in one variable
            Check remainder is even or odd
            Do addition all even numbers
            Then do addition of all odd numbers
            Display the difference between their additions
        STOP
*/

#include "helper.c"

int main()
{
    int iNo = 0;
    int iRet = 0;

    printf("Enter a Number :\t");
    scanf("%d",&iNo);

    iRet = DiffAdd(iNo);
    
    printf("Difference between summation of even and odd numbers : %d\n",iRet);

    return 0;
}