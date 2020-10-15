/*
 Write a program which returns addition of all even element from singly
linear linked list.
Function Prototype :int AdditionEven( PNODE Head);
Input linked list : |11|->|20|->|32|->|41|
Output : 52
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

int AdditionEven(PNODE Head)
{
	int iSum = 0;
	if(Head == NULL)
	{
		return -1;
	}
	while(Head != NULL)
	{
		if((Head->data) % 2 == 0)
		{
			iSum += Head->data;
		}
		Head = Head->next;
	}

	return iSum;
}

int main()
{
	PNODE First = NULL;
	int no = 0;
	int iAns = 0;

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
	iAns = AdditionEven(First);
	if(iAns == -1)
	{
		printf("Linked list is empty...");
	}
	else
	{
		printf("Addition of even numbers present in list is : %d\n",iAns);
	}
	printf("\n___________________________________________\n");

	return 0;
}