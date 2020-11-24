/*
 Write a recursive program which display below pattern.
 Output : * * * * * 
*/

#include <stdio.h>

void PatternR(int limit)
{
	if(limit>0)
	{
		printf("* \t");
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