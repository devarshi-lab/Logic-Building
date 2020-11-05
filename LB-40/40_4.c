/*
 Write a program which return second maximum element from singly linear
linked list.
Function Prototype :int SecMaximum( PNODE Head);
Input linked list : |110|->|230|->|320|->|240|
Output : 240
*/

#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

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

int SecMaximum(PNODE Head)
{
	int iMax = INT_MIN, iSecMax = INT_MIN,iValue = 0;
	Head=Head->next;

	while(Head != NULL)
	{
		iValue = Head->data;
		if(iValue>iMax)
		{
			iSecMax = iMax;
			iMax = iValue;
		}
		else if(Head->data>iSecMax && Head->data!=iMax)
		{
			iSecMax = Head->data;
		}
		Head = Head->next;
	}

	else if(iSecMax == INT_MIN)
	{
		printf("There is no second largest Number....");
		exit(0);
	}

	return iSecMax;
}

int main()
{
	PNODE First = NULL;
	int no = 0;
	int iAns = 0;
	printf("%d",INT_MIN);

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
	iAns = SecMaximum(First);
	printf("second maximum number present in list is : %d\n",iAns);
	printf("\n___________________________________________\n");

	return 0;
}