/*
 Accept N numbers from user and return product of all odd elements.
Input : N : 6

 Elements : 15 66 3 70 10 88
Output : 45
Input : N : 6

 Elements : 44 66 72 70 10 88
Output : 0 
*/

#include<stdio.h>
 #include<stdlib.h>

#define ERRORMEMORY -1
#define ERRORSIZE -2
#define NOTODD -3

int ProductOdd(int *arr,int iValue)
{
	int i = 0;
	int iProduct = 1;
	int iFlag = 0;
	if(arr == NULL)
	{
		return ERRORMEMORY;
	}
	if(iValue <= 0)
	{
		return ERRORSIZE;
	}

	for(i = 0;i<iValue;i++)
	{
		if(arr[i] % 2 != 0)
		{
			iProduct *= arr[i];
			iFlag = 1;
		}
	}

	if(iFlag == 0)
	{
		return NOTODD;
	}

	return iProduct;
}

int main()
{
		int iNo = 0,iRet = 0;
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

		iRet = ProductOdd(arr,iNo);

		if(iRet == ERRORSIZE)
		{
			printf("ERROR : INVALID SIZE\n");
			return -1;
		}
		else if(iRet == ERRORMEMORY)
		{
			printf("ERROR : INVALID MEMORY INPUT\n");
			return -1;
		}
		else if(iRet == NOTODD)
		{
			printf("There is not any odd number\n");
		}
		else
		{
			printf("Product off all odd numbers is : %d\n",iRet);
		}


		free(arr);

	return 0;
}