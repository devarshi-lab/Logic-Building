/*
Write a program which return smallest element from singly linear linked
list.
Function Prototype :int Minimum( PNODE Head);
Input linked list : |110|->|230|->|20|->|240|->|640|
Output : 20
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

int Minimum(PNODE Head)
{
	int iMin = Head->data;
	Head=Head->next;

	while(Head != NULL)
	{
		if((Head->data)<iMin)
		{
			iMin=Head->data;
		}
		Head=Head->next;
	}

	return iMin;
}

int main()
{
	PNODE First = NULL;
	int iRet = 0;

	Insert(&First,5);
	Insert(&First,30);
	Insert(&First,50);
	Insert(&First,10);

	Display(First);

	iRet = Minimum(First);

	printf("\nSmallest element of linked list is : %d ",iRet);
	
	return 0;
}