/*
We have to design application for tourist company. Tourist company provides cars on rent.
Depends on the running of car they apply rent.

If running is less than 100 kilometres then they charge 25 rupees per kilometre .
And if running is more than 100 kilometres then they apply 15 rupees per kilometre after 100 kilometres.
We have to accept number of kilometres from user and return the estimated rent.
Input : 73 Output : 1825
Input : 132 Output : 2980
Input : 189 Output : 3835

*/

#include<stdio.h>

int Charges(int iValue)
{
	if(iValue > 0 && iValue <=100)
	{
		return (25*iValue);
	}
	else
	{
		iValue = (((iValue - 100)*15)+2500);
		return iValue;
	}
}
int main()
{
	int iKilometer = 0,iRet = 0;
	
	printf("Enter the number of kilometers : \t");
	scanf("%d",&iKilometer);
	
	iRet = Charges(iKilometer);
	
	printf("Your charges are : %d\t",iRet);
	
	return 0;
}