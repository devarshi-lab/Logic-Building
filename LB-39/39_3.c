/*
Write a program which returns addition of all element from singly linear
linked list.
Function Prototype :int Addition( PNODE Head);
Input linked list : |10|->|20|->|30|->|40|
Output : 100
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

int Addition(PNODE Head)
{
	int iSum = 0;
	while(Head != NULL)
	{
		iSum += Head->data;
		Head=Head->next;
	}

	return iSum;
}

int main()
{
	PNODE First = NULL;
	int iRet = 0;

	Insert(&First,40);
	Insert(&First,30);
	Insert(&First,20);
	Insert(&First,10);

	Display(First);

	iRet = Addition(First);

	printf("\nAddition of elements of linked list is : %d ",iRet);
	
	return 0;
}