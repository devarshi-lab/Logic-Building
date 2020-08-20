/*
  . Accept N numbers from user and return frequency of 11 form it.
Input : N : 6
Elements : 85 66 3 15 93 88
Output : 0
Input : N : 6
Elements : 85 11 3 15 11 111
Output : 2 
*/

#include<stdio.h>
#include<stdlib.h>


int FreqEleven(int arr[],int iCount)
{
	int i = 0;
	int iFreq = 0;

	for(i = 0;i<iCount;i++)
	{
		if(arr[i] == 11)
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
	
	iRet = FreqEleven(arr,iNo);
	
	printf("Frequency of 11 is :%d\n",iRet);
	
	free(arr);
	
	return 0;
}