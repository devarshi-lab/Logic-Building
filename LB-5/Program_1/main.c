// TODO :   Write a program which accept name from user and print that name. 

/* ALGORITHM
    
    START
        Accept a name from user and store it in variable.
        Display that Name
    STOP
*/

#include<stdio.h> 

int main()
{
    char Name[30];

    printf("Enter your name:\t");
    scanf("%[^\n]",Name);
    printf("%s\n",Name);

    return 0;
}
