/*
Write a program which search last occurrence of particular element from
singly linear linked list.
Function should return position at which element is found.
Function Prototype :int SearchLastOcc( PNODE Head, int no );
Input linked list : |10|->|20|->|30|->|40|->|50|->|30|->|70|
Input element : 30
Output : 6
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

int SearchLastOcc(PNODE Head,int iValue)
{
	int iPos = 1,iPosX=0;

	if(Head == NULL)
	{
		return -1;
	}
	
	while(Head != NULL)
	{
		if(Head->data == iValue)
		{
			iPosX = iPos;
		}
		Head=Head->next;
		iPos++;
	}

	return iPosX;
}

int main()
{
	PNODE First = NULL;
	int iNum = 0,iRet = 0;

	Insert(&First,60);
	Insert(&First,30);
	Insert(&First,60);
	Insert(&First,50);
	Insert(&First,40);
	Insert(&First,30);
	Insert(&First,20);
	Insert(&First,10);

	Display(First);

	printf("\nEnter the number u want to search : \t");
	scanf("%d",&iNum);

	iRet = SearchLastOcc(First,iNum);

	if(iRet == 0)
	{
		printf("Number not found...");
	}
	else if(iRet == -1)
	{
		printf("Linked list is empty...");
	}
	else
	{
		printf("Last occurrence of number is at %d position",iRet);
	}

	return 0;
}