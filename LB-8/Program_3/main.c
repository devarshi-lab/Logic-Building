// TODO : Write a program to find factorial of given number.

/*
  Algorithm
    START
      Accept a digit from user as no.
      Iterate one loop till that number
      Multiply each number coming before user's number sequentially with each other
      Display multiplication
    STOP
*/

#include<stdio.h>

int Factorial(int iValue)
{
  int iFact = 1;

  if(iValue == 0)
  {
    return 0;
  }
  if(iValue<0)
  {
    iValue = -iValue;
  }
  for(iValue;iValue != 0;iValue--)
  {
      iFact *= iValue; 
  }
  return iFact;
}
int main()
{
  int iNo = 0,iRet = 0;

  printf("Enter a Number : \t");
  scanf("%d",&iNo);

  iRet = Factorial(iNo);

  printf("Factorial is : %d\n",iRet);

  return 0;
}
