/*
Accept N numbers from user and display summation of digits of each
number.
Input : N : 6
 Elements : 8225 665 3 76 953 858
Output : 17 17 3 13 17 21 
*/

#include<stdio.h>
#include<stdlib.h>

void SumOfDigit(int *arr,int iValue)
{
	int i = 0;
	int iProduct = 1;
	int iSum = 0,iNumber = 0;
	if(arr == NULL)
	{
		printf("ERROR : INVALID MEMORY INPUT\n");
		return;
	}
	if(iValue <= 0)
	{
		printf("ERROR : INVALID SIZE\n");
		return;
	}

	printf("\n________________________________\n");
	printf("summation of Digits are : \n");
	printf("__________________________________\n");
	for(i = 0;i<iValue;i++)
	{
		iSum = 0;
		iNumber = arr[i];
		while(iNumber != 0)
		{
			iSum += iNumber % 10;
			iNumber /= 10;
		}

		printf("Sum of digits of %d is : %d\n",arr[i],iSum);
	}
	printf("\n________________________________\n");	

}

int main()
{
		int iNo = 0;
		int *arr = NULL;
		int i =0;

		printf("Enter the number of elements : \t");
		scanf("%d",&iNo);

		if(iNo <= 0)
		{
			printf("ERROR : INVALID INPUT!!!\n");
			return -1;
		}

		arr = (int *)malloc(sizeof(int)*iNo);

		if(arr == NULL)
		{
			printf("ERROR : UNABLE TO ALLOCATE MEMORY!!!");
			return -1;
		}

		printf("Enter the %d values : \n",iNo);
		for(i=0;i<iNo;i++)
		{
			scanf("%d",&arr[i]);
		}

		SumOfDigit(arr,iNo);

		free(arr);

	return 0;
} 