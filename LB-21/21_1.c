/*
Accept N numbers from user and return difference between summation
of even elements and summation of odd elements.
Input : N : 6
 Elements : 85 66 3 80 93 88
Output : 53 (234 - 181)
*/

#include<stdio.h>
#include<stdlib.h>

int DiffOfOddEvenSum(int arr[],int iCount)
{
	int diff = 0;
	int i = 0;

	for(i=0;i<iCount;i++)
	{
		if(arr[i]<0)
		{
			arr[i] = -arr[i];
		}

		if(arr[i] % 2 == 0)
		{
			diff += arr[i];
		}
		else
		{
			diff -= arr[i];
		}
	}
	
	return diff;
}

int main()
{
	int iNo =0, i=0;
	int *arr = NULL;
	int iRet = 0;
	
	printf("Enter a number of elements:\t");
	scanf("%d",&iNo);
	
	arr = (int *)malloc(sizeof(int) * iNo);
	
	if(arr == NULL)
 	{
 		printf("Unable to allocate memory");
 		return -1;
 	} 
	
	for(i = 0; i<iNo; i++)
	{
		scanf("%d",&arr[i]);
	}
	
	iRet = DiffOfOddEvenSum(arr,iNo);
	
	printf("Difference between summation of odd and even numbers : %d\t",iRet);
	
	free(arr);

	return 0;
}
		
	
	 