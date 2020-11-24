/*
 Write a recursive program which display below pattern.
 Output : 1 2 3 4 5
*/


#include <stdio.h>

void PatternR(int limit)
{
	static int no = 1;
	if(no<=limit)
	{
		printf("%d\t",no);
		no++;
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