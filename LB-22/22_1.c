/*
 Accept N numbers from user and return frequency of even numbers.
Input : N : 6
 Elements : 85 66 3 80 93 88
Output : 3 
*/

#include<stdio.h>
#include<stdlib.h>

int EvenFreq(int arr[],int iCount)
{
	int i = 0;
	int iFreq = 0;

	for(i = 0;i<iCount;i++)
	{
		if((arr[i] % 2 == 0))
		{
			iFreq++;
		}
	}
	
	return iFreq;
}

int main()
{
	int iNo = 0,i = 0,*arr = NULL;
	int iRet = 0;
	
	printf("Enter the number of elements :\t");
	scanf("%d",&iNo);
	
	printf("Enter the %d numbers : \n",iNo);
	
	arr = (int *)malloc(sizeof(int) * iNo);
	
	if(arr == NULL)
	{
		printf("Unable to allocate memory!!!\n");
		return -1;
	}
	
	for(i = 0;i<iNo; i++)
	{
		scanf("%d",&arr[i]);
	}
	
	iRet = EvenFreq(arr,iNo);
	printf("Frequency of even numbers are : %d\n",iRet);
	
	free(arr);
	
	return 0;
}