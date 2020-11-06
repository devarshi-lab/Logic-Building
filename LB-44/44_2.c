/*
 Write a recursive program which display below pattern.
 Output : 1 2 3 4 5
*/


#include <stdio.h>

void PatternR()
{
	static int limit = 1;
	if(limit<6)
	{
		printf("%d\t",limit);
		limit++;
		PatternR();
	}
}
int main()
{
	PatternR();
	return 0;
}