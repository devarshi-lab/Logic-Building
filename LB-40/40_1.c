/*
Write a program which displays all elements which are perfect from singly
linear linked list.
Function Prototype :int DisplayPerfect( PNODE Head);
Input linked list : |11|->|28|->|17|->|41|->|6|->|89|
Output : 6 28 
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

void DisplayPerfect(PNODE Head)
{
	int iPerfect = 0,iSum = 0,i=0;
	if(Head == NULL)
	{
		return;
	}

	while(Head != NULL)
	{
		iPerfect = Head->data;
		if(iPerfect<0)
		{
			iPerfect = -iPerfect;
		}
		iSum = 0;
		for(i=1;i<=iPerfect/2;i++)
		{
			if(iPerfect%i == 0)
			{
				iSum += i;
			}
		}
		if(iSum == iPerfect)
		{
			printf("%d\t",iPerfect);
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
	printf("n___________________________________________\n");
	printf("perfect NUmbers present in list are : \n");
	DisplayPerfect(First);
	printf("\n___________________________________________\n");

	return 0;
}