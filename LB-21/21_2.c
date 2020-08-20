/*
 Accept N numbers from user and display all such elements which are
divisible by 5.
Input : N : 6
 Elements : 85 66 3 80 93 88
Output : 85 80 
*/

#include<stdio.h>
#include<stdlib.h>

void ChkDivisible(int arr[],int iCount)
{
	int i = 0;
	for(i=0;i<iCount;i++)
	{
		if(arr[i] % 5 == 0)
		{
			printf("%d\t",arr[i]);
		}
	}
}


int main()
{
	int iNo = 0;
	int *arr = NULL;
	int i = 0;
	
	printf("Enter the number of elements : \t");
	scanf("%d",&iNo);
	
	printf("Enter the %d Numbers \n",iNo);
	
	arr = (int *)malloc(sizeof(int) * iNo);
	
	if(arr == NULL)
	{
		printf("Unable to allocate memory\n");
		return -1;
	}
	
	for(i =0;i<iNo;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("Numbers which are divisible 5 are : \n");
	
	ChkDivisible(arr,iNo);
	
	free(arr);
	
	return 0;
}