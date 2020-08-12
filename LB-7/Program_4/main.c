//TODO : Write a program which accept number from user and return multiplication of all digits. 

/* 
Algorithm

        START
            Accept one number from user
            Iterate one loop to and divide that number by 10 until number becomes 0
            Store the remainder in one variable
            Multiply every time remainder gets stores
            Display the multiplication
        STOP
*/

#include "helper.c"

int main()
{
    int iNo = 0;
    int iRet = 0;

    printf("Enter a Number :\t");
    scanf("%d",&iNo);

    iRet = Multiplication(iNo);
    printf("Multiplication of digits present in Number is : %d\n",iRet);
    
    return 0;
}