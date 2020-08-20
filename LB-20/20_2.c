/*
 Design application for income tax department to calculate tax
amount. According to the income tax department there is no
income tax for the income less than 5 lakhs.
If income is in between 5 to 10 lakhs then there will be 10% tax.
If income is in between 10 to 20 lakhs then there will be 20%
tax.
And for more than 20 lakhs there will be 30% tax.
We have to accept gross income from user and return the tax
amount.

Input : 600000 Output : 10000 (0 + 10000)
Input : 450000 Output : 0
Input : 1200000 Output : 90000 (0 + 50000 + 40000) 
*/

#include<stdio.h>

int IncomeTax(int iValue)
{
	
	if(iValue <= 500000)
	{
		return 0;
	}
	else if(iValue > 500000 && iValue <= 1000000)
	{
		iValue = ((iValue - 500000) * 0.1);
		return iValue;
	} 
	else if(iValue > 1000000 && iValue <= 2000000)
	{
		iValue = (((iValue - 1000000) * 0.2) + (50000));
		return iValue;
	} 
	else
	{
		iValue = (((iValue - 2000000) * 0.3f) + (200000) + (50000));
		return iValue;
	}
}
 
int main()
{
	int iAmount = 0;
	int iTax = 0;
	
	printf("Enter the amount : \t");
	scanf("%d",&iAmount);
	
	iTax = IncomeTax(iAmount);
	
	printf("Your tax is : %d\t",iTax);
		
	return 0;
}