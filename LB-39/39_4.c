/*
Write a program which return largest element from singly linear linked
list.
Function Prototype :int Maximum( PNODE Head);
Input linked list : |110|->|230|->|320|->|240|
Output : 320
*/

#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node * next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void Insert(PPNODE Head,int iNo)
{
	PNODE newn = NULL;

	newn=(PNODE)malloc(sizeof(NODE));
	newn->data=iNo;
	newn->next=NULL;

	if(*Head == NULL)
	{
		*Head=newn;
	}
	else
	{
		newn->next=*Head;
		*Head=newn;
	}
}

void Display(PNODE Head)
{
	printf("Elements present in linked list are : \n");
	while(Head != NULL)
	{
		printf("%d\t",Head->data);
		Head=Head->next;
	}
}

int Maximum(PNODE Head)
{
	int iMax = 0;
	while(Head != NULL)
	{
		if((Head->data)>iMax)
		{
			iMax=Head->data;
		}
		Head=Head->next;
	}

	return iMax;
}

int main()
{
	PNODE First = NULL;
	int iRet = 0;

	Insert(&First,40);
	Insert(&First,30);
	Insert(&First,50);
	Insert(&First,10);

	Display(First);

	iRet = Maximum(First);

	printf("\nLargest element of linked list is : %d ",iRet);
	
	return 0;
}