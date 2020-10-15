/*
Write a program which displays all elements which are prime from singly
linear linked list.
Function Prototype :int DisplayPrime( PNODE Head);
Input linked list : |11|->|20|->|17|->|41|->|22|->|89|
Output : 11 17 41 89 
*/

#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node* next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

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
			temp=temp->next;
		}
		temp->next=newn;
	}
}

void Display(PNODE Head)
{
	printf("\n___________________________________________\n");
	printf("Numbers present in linked list are : \n");
	printf("\n");
	while(Head != NULL)
	{
		printf("|%d|->",Head->data);
		Head=Head->next;
	}
	printf("NULL\n");
	printf("\n___________________________________________\n");
}

void DisplayPrime(PNODE Head)
{
	int iPrime = 0,i=0;
	if(Head == NULL)
	{
		return;
	}
	
	while(Head != NULL)
	{
		iPrime = Head->data;
		for(i=2;i<=iPrime/2;i++)
		{
			if(iPrime%i==0)
			{
				break;
			}
		}
		if(i>(iPrime/2))
		{
			printf("%d\t",iPrime);
		}
		Head = Head->next;
	}
}

int main()
{
	PNODE First = NULL;
	int no = 0;

	printf("Enter the Number : \t");
	scanf("%d",&no);
	Insert(&First,no);
	printf("Enter the Number : \t");
	scanf("%d",&no);
	Insert(&First,no);
	printf("Enter the Number : \t");
	scanf("%d",&no);
	Insert(&First,no);
	printf("Enter the Number : \t");
	scanf("%d",&no);
	Insert(&First,no);
	printf("Enter the Number : \t");
	scanf("%d",&no);
	Insert(&First,no);
	printf("Enter the Number : \t");
	scanf("%d",&no);
	Insert(&First,no);

	Display(First);
	printf("\n___________________________________________\n");
	printf("Prime NUmbers present in list are : \n");
	DisplayPrime(First);
	printf("\n___________________________________________\n");

	return 0;
}