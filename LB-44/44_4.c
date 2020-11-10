/*
4.Write a recursive program which display below pattern.
Output : A B C D E F 
*/

#include <stdio.h>

void PatternR()
{
	static int limit = 0;
	static char ch = 'A';
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