 /*
  Accept N numbers from user and accept one another number as NO ,
return index of last occurrence of that NO.
Input : N : 6
 NO: 66
 Elements : 85 66 3 66 93 88
Output : 3
Input : N : 6
 NO: 93
 Elements : 85 66 3 66 93 88
Output : 4
Input : N : 6
 NO: 12
 Elements : 85 11 3 15 11 111
Output : -1 
*/


#include<stdio.h>
#include<stdlib.h>


#define ERRORMEMORY -2
#define ERRORSIZE -3

int LastOcc(int *arr,int iValue,int iCount)
{
	int i = 0,iPosition = -1;

	if(arr == NULL)
	{
		return ERRORMEMORY;
	}
	if(iCount <= 0)
	{
		return ERRORSIZE;
	}
	for(i = iCount-1;i>=0;i--)
	{
		if(arr[i] == iValue)
		{
			iPosition = i;
			break;
		}
	}
		
	return iPosition;
}
int main()
{
	int iNo = 0, i = 0,iCheck = 0;
	int iRet = 0;
	int *arr = NULL;
	
	printf("Enter number of elements : \t");
	scanf("%d",&iNo);
	
	if(iNo <= 0)
	{
		printf("ERROR : INVALID INPUT\n");
		return -1;
	}
	
	arr = (int *)malloc(sizeof(int) * iNo);
	
	if(arr == NULL)
	{
		printf("ERROR : UNABLE TO ALLOCATE MEMORY\n");
		return -1;
	}
	
	printf("Enter %d numbers \n",iNo);
	for(i=0;i<iNo;i++)
	{
		scanf("%d",&arr[i]);
	}

	printf("Enter number you want index of : \t");
	scanf("%d",&iCheck);

	iRet = LastOcc(arr,iCheck,iNo);

	free(arr);

	if(iRet == ERRORSIZE)
	{
		printf("ERROR : INVALID SIZE\n");
		return -1;
	}
	else if(iRet == ERRORMEMORY)
	{
		printf("ERROR : INVALID MEMORY INPUT\n");
		return -1;
	}
	else if(iRet >= 0)
	{
		printf("Last occurrence is at %d index.\n",iRet);
	}
	else
	{
		printf("Number is not present\n");
	}
	
	return 0;
}