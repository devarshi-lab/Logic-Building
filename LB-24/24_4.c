 /*
 Accept N numbers from user and display all such numbers which contains
3 digits in it.
Input : N : 6

Elements : 8225 665 3 76 953 858
Output : 665 953 858 
*/

#include<stdio.h>
#include<stdlib.h>

void ThreeDigit(int *arr,int iValue)
{
	int i = 0;
	int iProduct = 1;
	int iMin = 0,iMax = 0;
	if(arr == NULL)
	{
		printf("ERROR : INVALID MEMORY INPUT\n");
		return;
	}
	if(iValue <= 0)
	{
		printf("ERROR : INVALID SIZE\n");
		return;
	}

	printf("\n____________________________\n");
	printf("Three Digit Numbers are : \n");
	printf("____________________________\n");
	for(i = 0;i<iValue;i++)
	{
		if((arr[i] / 1000 == 0) && (arr[i] /10 >= 10) && (arr[i] / 10 <= 99)) //or (arr[i]>99 && arr[i]<1000)
		{
			printf("%d\t",arr[i]);
		}
	}
	printf("\n____________________________\n");	

}

int main()
{
		int iNo = 0;
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

		ThreeDigit(arr,iNo);

		free(arr);

	return 0;
} 