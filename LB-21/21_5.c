/*
Accept N numbers from user and display all such elements which are
multiples of 11.
Input : N : 6
 Elements : 85 66 3 55 93 88
Output : 66 55 88 
*/

#include<stdio.h>
#include<stdlib.h>

void ChkMultiples(int arr[],int iCount)
{
	int i = 0;
	for(i = 0;i<iCount;i++)
	{
		if((arr[i] % 11 == 0))
		{
			printf("%d\t",arr[i]);
		}
	}
}

int main()
{
	int iNo = 0,i = 0,*arr = NULL;
	
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
	
	printf("Numbers which are multiples of 11 are :\n");
	ChkMultiples(arr,iNo);
	
	free(arr);
	
	return 0;
}