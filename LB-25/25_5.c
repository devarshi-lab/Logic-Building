/*
 Accept division of student from user and depends on the division
display exam timing. There are 4 divisions in school as A,B,C,D. Exam
of division A at 7 AM, B at 8.30 AM, C at 9.20 AM and D at 10.30 AM.
(Application should be case insensitive)
Input : C
Output : Your exam at 9.20 AM
Input : d
Output : Your exam at 10.30 AM
*/

#include <stdio.h>

void DisplaySchedule(char cValue)
{
	switch(cValue)
	{
		case 'A' : case 'a' :	printf("At 7:00 AM");
				 			break;
		case 'B' : case 'b' :	printf("At 8:30 AM");
							break;
		case 'C' : case 'c' :	printf("At 8:30 AM");
							break;
		case 'D' : case 'd' :	printf("At 8:30 AM");
					     	break;
		default :	printf("Enter valid division!!!\n");
	}
}

int main()
{
	char cDiv = '\0';

	printf("Enter the division : \t");
	scanf("%c",&cDiv);

	DisplaySchedule(cDiv);

	return 0;
}