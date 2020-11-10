/*
4.Write a recursive program which display below pattern.
Output : a b c d e f 
*/

#include <stdio.h>

void PatternR()
{
	static int limit = 0;
	static char ch = 'a';
	if(limit<6)
	{
		printf("%c\t",ch++);
		limit++;
		PatternR();
	}
}
int main()
{
	PatternR();
	return 0;
}