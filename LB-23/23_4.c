/*
Accept N numbers from user and accept Range, Display all elements from
that range
Input : N : 6
 Start: 60

 End : 90

 Elements : 85 66 3 76 93 88
Output : 66 76 88
Input : N : 6
 Start: 30

 End : 50

 Elements : 85 66 3 76 93 88 
 */

 #include<stdio.h>
 #include<stdlib.h>

void DisplayRange(int *arr,int iStart,int iEnd,int iValue)
{
	int i = 0;
	if(arr == NULL)
	{
		printf("ERROR : MEMORY INVALID!!!");
		return;
	}
	if(iValue <= 0)
	{
		printf("ERROR :INVALID SIZE!!!");
		return;
	}

	for(i = 0;i<iValue;i++)
	{
		if(arr[i]>iStart && arr[i]<iEnd)
		{
			printf("%d\t",arr[i]);
		}
	}
}

int main()
{
		int iNo = 0;
		int iStart = 0,iStop = 0;
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

		printf("Enter the starting : \t");
		scanf("%d",&iStart);

		printf("Enter the ending : \t");
		scanf("%d",&iStop);

		DisplayRange(arr,iStart,iStop,iNo);

		free(arr);

	return 0;
}
