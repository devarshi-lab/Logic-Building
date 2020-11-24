/*
4.Write a recursive program which display below pattern.
Output : A B C D E F 
*/

#include <stdio.h>

void PatternR(int limit)
{
	static char ch = 'A';
	static int no = 1;

	if(no<=limit)
	{
		printf("%c\t",ch);
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