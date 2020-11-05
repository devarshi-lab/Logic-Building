/*
Write a program which display all palindrome elements of singly linked
list.
Function Prototype :
void DisplayPallindrome( PNODE Head);
Input linked list : |11|->|28|->|17|->|414|->|6|->|89|
Output : 11 6 414
*/


#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int data;
	struct Node *next;
};

typedef struct Node NODE;
typedef struct Node* PNODE;
typedef struct Node** PPNODE;

void Insert(PPNODE Head,int iValue)
{
	PNODE newn = NULL;
	PNODE temp = NULL;

	newn = (PNODE)malloc(sizeof(NODE));
	newn->data=iValue;
	newn->next=NULL;

	if(*Head == NULL)
	{
		*Head = newn;
	}
	else
	{
		temp = *Head;

		while(temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next=newn;
	}
}

void DisplayPallindrome(PNODE Head)
{
	int iValue = 0,iPalindrome = 0;
	while(Head != NULL)
	{
		iValue = Head->data;
		iPalindrome = 0;
		while(iValue != 0)
		{
			iPalindrome = (iPalindrome*10)+(iValue%10);
			iValue = iValue/10;
		}
		if(iPalindrome == Head->data)
		{
			printf("%d\t",iPalindrome);
		}
		Head = Head->next;
	}
}

void Display(PNODE Head)
{
	printf("\n");
	while(Head != NULL)
	{
		printf("|%d|->",Head->data);
		Head=Head->next;
	}
	printf("NULL\n");
}

int main()
{
	PNODE First = NULL;
	int number = 0,iNo = 0,i=0;

	printf("Enter number of elements you want to add into linked list : \t");
	scanf("%d",&number);

	for(i=1;i<=number;i++)
	{
		printf("Enter the number : \t");
		scanf("%d",&iNo);
		Insert(&First,iNo);
	}

	Display(First);

	printf("palindrome numbers present in linked list are : \n");

	DisplayPallindrome(First);

	return 0;
}