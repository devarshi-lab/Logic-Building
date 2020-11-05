/*
Write a program which reverse each element of singly linked list.
Function Prototype :
void Reverse( PNODE Head);
Input linked list : |11|->|28|->|17|->|41|->|6|->|89|
Output : |11|->|82|->|71|->|14|->|6|->|98|
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

void ReverseDigit(PNODE Head)
{
	int iValue = 0,iReverse = 0;
	while(Head != NULL)
	{
		iValue = Head->data;
		iReverse = 0;
		while(iValue != 0)
		{
			iReverse = (iReverse*10)+(iValue%10);
			iValue = iValue/10;
		}
		printf("|%d|->",iReverse);
		Head = Head->next;
	}
	printf("NULL\n");
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

	printf("Linked List after Reversing each digit of number : \n");

	ReverseDigit(First);

	return 0;
}