/*
4.Write a recursive program which display below pattern.
Output : a b c d e f 
*/

#include <stdio.h>

void PatternR(int limit)
{
	static char ch = 'a';
	static int no = 1;

	if(no<=limit)
	{
		printf("%c ",ch);
		ch++;
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