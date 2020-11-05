/*
Write a program which display largest digits of all element from singly
linear linked list.
Function Prototype :
void DisplayLarge( PNODE Head);
Input linked list : |11|->|250|->|532|->|419|
Output : 1 5 5 9
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

void DisplayLarge(PNODE Head)
{
	int iValue = 0,iMax=0;
	while(Head != NULL)
	{
		iValue = Head->data;
		iMax = iValue%10;
		while(iValue != 0)
		{	
			if((iValue%10)>iMax)
			{
				iMax = (iValue%10);
			}
			iValue = iValue/10;
		}
		printf("%d\t",iMax);
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

	printf("largest digit of number present in linked list are : \n");

	DisplayLarge(First);

	return 0;
}