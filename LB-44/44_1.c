/*
 Write a recursive program which display below pattern.
 Output : * * * * * 
*/

#include <stdio.h>

void PatternR()
{
	static int limit = 5;
	if(limit>0)
	{
		printf("* \t");
		limit--;
		PatternR();
	}
}
int main()
{
	PatternR();
	return 0;
}