/*
 Accept N numbers from user and accept one another number as NO ,
return frequency of NO form it.
Input : N : 6
NO: 66
Elements : 85 66 3 66 93 88
Output : 2
Input : N : 6
NO: 12
Elements : 85 11 3 15 11 111
Output : 0 
*/

#include<stdio.h>
#include<stdlib.h>


int Frequency(int arr[],int iValue,int iCount)
{
	int i = 0;
	int iFreq = 0;

	for(i = 0;i<iCount;i++)
	{
		if(arr[i] == iValue)
		{
			iFreq++;
		}
	}

	return iFreq;
}

int main()
{
	int iNo = 0,iNumber = 0,i = 0,*arr = NULL;
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
	
	printf("Enter the number you want find frequency :\t");
	scanf("%d",&iNumber);
	
	iRet = Frequency(arr,iNumber,iNo);
	
	printf("Frequency of %d is :%d\n",iNumber,iRet);
	
	free(arr);
	
	return 0;
}