/*
  Accept N numbers from user check whether that numbers contains 11 in
it or not.
Input : N : 6
Elements : 85 66 11 80 93 88
Output : 11 is present
Input : N : 6
Elements : 85 66 3 80 93 88
Output : 11 is absent 
*/

#include<stdio.h>
#include<stdlib.h>

#define TRUE 0
#define FALSE 1

typedef int BOOL;

BOOL ChkEleven(int arr[],int iCount)
{
	int i = 0;
	int iPresent = 0;

	for(i = 0;i<iCount;i++)
	{
		if(arr[i] == 11)
		{
			iPresent = arr[i];
			break;
		}
	}
	
	if(iPresent == 11)
	{
		return TRUE;
	}

	return FALSE;
}

int main()
{
	int iNo = 0,i = 0,*arr = NULL;
	BOOL iRet = TRUE;
	
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
	
	iRet = ChkEleven(arr,iNo);
	
	if(iRet == TRUE)
	{
		printf("11 is present\n");
	}
	else
	{
		printf("11 is not present\n");
	}
	
	free(arr);
	
	return 0;
}