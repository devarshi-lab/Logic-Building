/*
Write a program which displays ASCII table. Table contains symbol,
Decimal, Hexadecimal and Octal representation of every member from
0 to 255.
*/

#include<stdio.h>

void DisplayASCII()
{
	int i =0;
	printf("___________________________________________\n");
	printf("Decimal\t|Octal\t|Hexadicimal\t|ASCII\t|\n");
	printf("___________________________________________\n");
	for(i = 0;i<=255;i++)
	{
		printf("%d \t| %o \t| %x \t\t| %c\t|",i,i,i,i);
		printf("\n");
	}

}
int main()
{
	DisplayASCII();

	return 0;
}