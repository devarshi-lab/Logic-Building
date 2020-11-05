/*
Write a program which display addition of digits of element from singly
linear linked list.
Function Prototype :int SumDigit( PNODE Head);
Input linked list : |110|->|230|->|20|->|240|->|640|
Output : 2 5 2 6 10 
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

void DisplayDigitAddition(PNODE Head)
{
	int iValue = 0,iSum = 0;
	if(Head == NULL)
	{
		return;
	}

	while(Head != NULL)
	{
		iValue = Head->data;
		iSum = 0;
		while(iValue != 0)
		{
			iSum += (iValue%10);
			iValue /= 10;
		}
		printf("%d\t",iSum);
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
	printf("Addition of digits of each Number present in list are : \n");
	DisplayDigitAddition(First);
	printf("\n___________________________________________\n");

	return 0;
}