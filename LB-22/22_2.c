/*
 Accept N numbers from user and return difference between frequency of
even number and odd numbers.
Input : N : 7
Elements : 85 66 3 80 93 88 90
Output : 1 (4 -3) 
*/

#include<stdio.h>
#include<stdlib.h>

int DiffFreq(int arr[],int iCount)
{
	int i = 0;
	int iFreq = 0;

	for(i = 0;i<iCount;i++)
	{
		if((arr[i] % 2 == 0))
		{
			iFreq++;
		}
		else
		{
			iFreq--;
		}
	}
	
	if(iFreq<0)
	{
		iFreq = -iFreq;
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
	
	iRet = DiffFreq(arr,iNo);
	printf("Difference Between Frequency of even and odd numbers are : %d\n",iRet);
	
	free(arr);
	
	return 0;
}