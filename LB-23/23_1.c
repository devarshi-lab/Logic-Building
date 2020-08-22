/*
Accept N numbers from user and accept one another number as NO ,
check whether NO is present or not.
Input : N : 6
 NO: 66
 Elements : 85 66 3 66 93 88
Output : TRUE

Input : N : 6
 NO: 12
 Elements : 85 11 3 15 11 111
 Output : FALSE 
*/

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0
#define ERRORMEMORY -1
#define ERRORSIZE -2
typedef int BOOL;

BOOL ChkNumber(int *arr,int iValue,int iCount)
{
	int i = 0,iFlag = 0;

	if(arr == NULL)
	{
		return ERRORMEMORY;
	}
	if(iCount <= 0)
	{
		return ERRORSIZE;
	}
	for(i = 0;i<iCount;i++)
	{
		if(arr[i] == iValue)
		{
			iFlag = 1;
			break;
		}
	}
	
	if(iFlag == 1)
	{
		return TRUE;
	}
	
	return FALSE;
}
int main()
{
	int iNo = 0, i = 0,iCheck = 0;
	BOOL iRet = FALSE;
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
	
	for(i=0;i<iNo;i++)
	{
		printf("Enter %d number : \t",i+1);
		scanf("%d",&arr[i]);
	}

	printf("Enter number you want search : \t");
	scanf("%d",&iCheck);

	iRet = ChkNumber(arr,iCheck,iNo);

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
	else if(iRet == TRUE)
	{
		printf("Number is present.\n");
	}
	else
	{
		printf("Number is not present\n");
	}
	
	return 0;
}
	
	
	