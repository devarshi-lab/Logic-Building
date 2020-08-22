/*
 Accept N numbers from user and return the smallest number.
Input : N : 6
 Elements : 85 66 3 66 93 88
Output : 3 
*/

#include<stdio.h>
#include<stdlib.h>

#define ERRORMEMORY -1
#define ERRORSIZE -2

int Minimum(int *arr,int iValue)
{
	int i = 0;
	int iProduct = 1;
	int iMin = 0;
	if(arr == NULL)
	{
		return ERRORMEMORY;
	}
	if(iValue <= 0)
	{
		return ERRORSIZE;
	}

	iMin = arr[0];

	for(i = 1;i<iValue;i++)
	{
		if(arr[i] < iMin)
		{
			iMin = arr[i];
		}
	}

	return iMin;
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

		iRet = Minimum(arr,iNo);

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
		else
		{
			printf("Smallest numbers is : %d\n",iRet);
		}


		free(arr);

	return 0;
}