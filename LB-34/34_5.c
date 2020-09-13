/*
Write a program which accept one number from user and toggle contents
of first and last nibble of the number. Return modified number. (Nibble is a
group of four bits)

i/p:200
o/p:55

*/

//1 2 4 8 16 32 64 128 256 512 1024 2048 4096 8192 16384 32768 65536 131072 262144 524288 1048576
//2097152 4194304 8388608 16777216 33554432 67108864 134217728 268435456 536870912 1073741824 2147483648

#include<stdio.h>
typedef unsigned int UINT;

int Toggle(UINT iNo)
{
	int i = 0,k = 0, j = 0,iPos = 0;
	UINT iNew = 0;
	int arr[32] = {0};
	iNew = iNo;
	printf("\n\nBinary before toggling first and last nibble of number\t");
	while(iNew != 0)
	{
		arr[i] = iNew % 2;
		iNew = iNew / 2;
		printf("%d ",arr[i]);
		i++;
	}
	printf("\n");
	for(iPos = 0;iPos <= 3;iPos++)
	{
		if(arr[iPos] == 0)
		{
			arr[iPos] = 1;
		}
		else
		{
			arr[iPos] = 0;
		}
	}
	for(iPos = i-1;iPos >= i-4 ;iPos--)
	{
		if(arr[iPos]== 0)
		{
			arr[iPos] = 1;
		}
		else
		{
			arr[iPos] = 0;
		}
	}
	printf("\nBinary After toggling first and last nibble of number\t");
	for(j = 0,k = 1;j < i;j++)
	{
		printf("%d ",arr[j]);
		iNew += (arr[j]*k);
		k *= 2;
	}
	printf("\n");
	return iNew;
}
int main()
{
	UINT iNo = 0,iAns = 0;

	printf("\nEnter Number\t:");
	scanf("%d",&iNo);

	iAns = Toggle(iNo);

	printf("%d\n",iAns);

	return 0;
}