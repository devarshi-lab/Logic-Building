//TODO : Write a program which accept three numbers and print its multiplication. 


/* ALGORITHM
    START
        Accept three numbers from user and store it in three variables
        Multiply that 3 numbers with each other
        Display not multiplication
    STOP
*/

#include "helper.c"

int main()
{
    int iNo1 = 0,iNo2 = 0,iNo3 = 0;
    int iRet = 0;

    printf("Enter First Number : \t");
    scanf("%d",&iNo1);

    printf("Enter Second Number : \t");
    scanf("%d",&iNo2);

    printf("Enter Third Number : \t");
    scanf("%d",&iNo3);

    iRet = Multiplication(iNo1,iNo2,iNo3);

    printf("Multiplication is %d \n",iRet);
    
    return 0;    
}