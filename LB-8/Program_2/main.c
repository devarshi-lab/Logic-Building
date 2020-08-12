// TODO : Accept single digit number from user and print it into word.

/*
  Algorithm
    START
      Accept a digit from user as no.
      Print that number in word.
    STOP
*/

#include<stdio.h>

void PrintWord(int iValue)
{
  if(iValue<0)
  {
    iValue = -iValue;
  }
  switch(iValue)
  {
    case 0 :  printf("Zero\n");
              break;
    case 1 :  printf("One\n");
              break;
    case 2 :  printf("Two\n");
              break;
    case 3 :  printf("Three\n");
              break;
    case 4 :  printf("Four\n");
              break;
    case 5 :  printf("Five\n");
              break;
    case 6 :  printf("Six\n");
              break;
    case 7 :  printf("SEven\n");
              break;
    case 8 :  printf("Eight\n");
              break;
    case 9 :  printf("Nine\n");
              break;
    default : printf("Invalid Number:\n");
  }
}
int main()
{
  int iNo = 0;

  printf("Enter a Number : \t");
  scanf("%d",&iNo);

  PrintWord(iNo);

  return 0;
}
