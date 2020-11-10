/*
Write a recursive program which display below pattern.
Output : 5 4 3 2 1 
*/

#include <stdio.h>

void PatternR()
{
	static int limit = 5;
	if(limit>0)
	{
		printf("%d\t",limit);
		limit--;
		PatternR();
	}
}
int main()
{
	PatternR();
	return 0;
}