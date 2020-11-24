/*
Write a recursive program which display below pattern.
Output : 5 4 3 2 1 
*/

#include <stdio.h>

void PatternR(int limit)
{
	
	if(limit>0)
	{
		printf("%d\t",limit);
		limit--;
		PatternR(limit);
	}
}
int main()
{
	int no = 0;

	printf("Enter the number : \t");
	scanf("%d",&no);

	PatternR(no);

	return 0;
}