/*
Design application for hotel. According to the management 
team of hotel they are giving discount on total bill amount of
customer.
If bill bill amount is less than 500 then there is no discount , if
bill amount is less than 1500 and more than 500 they give 10%
discount.
And if the bill amount is more than 1500 then they give 15%
discount.
Our application should accept total bill amount and depends on
the discount policy we have to return the amount after applying
discount.

Input : 1200 Output : 1080
Input : 290 Output : 290
Input : 3700 Output : 3145

*/ 

#include<stdio.h>

int Discount(int iValue)
{
	if(iValue <= 500)
	{
		return iValue;
	}
	else if(iValue > 500 && iValue <= 1500)
	{
		iValue = iValue - (iValue * 0.1f);
		return iValue;
	}
	else
	{
		iValue = iValue - (iValue * 0.15);
		return iValue;
	}
}

int main()
{
	int iBill = 0;
	int iDiscountBill =0;
	printf("Enter the bill amount : \t");
	scanf("%d",&iBill);
		
	iDiscountBill = Discount(iBill);
	
	printf("Your final bill is : %d\t",iDiscountBill);
	
	return 0;
}













