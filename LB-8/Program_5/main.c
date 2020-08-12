// TODO : Write a program which accept number from user and display its table in reverse order.

/*
  Algorithm
    START
      Accept a digit from user as no.
      Iterate one loop till 10
      Display its table in reverse order
    STOP
*/

#include<stdio.h>

int ReverseTable(int iValue)
{
  int iTable = 1,iAns = 0;

  if(iValue == 0)
  {
    return 0;
  }
  for(iTable = 10; iTable >= 1; iTable--)
  {
      iAns = iTable * iValue;
      printf("%d\t",iAns);
  }
}
int main()
{
  int iNo = 0;

  printf("Enter a Number : \t");
  scanf("%d",&iNo);

  ReverseTable(iNo);

  return 0;
}
