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

int Count(PNODE);

void InsertFirst(PPNODE Head,PPNODE Tail,int iValue)
{
	PNODE newn = NULL;

	newn = (PNODE)malloc(sizeof(NODE));
	newn->data=iValue;
	newn->next=NULL;

	if(*Head == NULL)
	{
		*Head = newn;
		*Tail = newn;
	}
	else
	{
		newn->next = *Head;
		*Head = newn;
	}
	(*Tail)->next=*Head;
}

void InsertLast(PPNODE Head,PPNODE Tail,int iValue)
{
	PNODE newn = NULL;
	PNODE temp = NULL;

	newn = (PNODE)malloc(sizeof(NODE));
	newn->data=iValue;
	newn->next=NULL;

	if(*Head == NULL)
	{
		*Head = newn;
		*Tail = newn;
	}
	else
	{
		(*Tail)->next=newn;
		*Tail = newn;
	}
	(*Tail)->next = *Head;
}

void InsertAtPos(PPNODE Head,PPNODE Tail,int iValue,int iPos)
{
	PNODE newn = NULL;
	PNODE temp = NULL;

	int i=0;
	int iCount = Count(*Head);

	
	if(*Head == NULL)
	{
		*Head = newn;
		*Tail = newn;
	}
	if(iPos<0 || iPos>iCount+1)
	{
		return;
	}
	if(iPos == 1)
	{
		return InsertFirst(Head,Tail,iValue);
	}
	else if(iPos == iCount+1)
	{
		return InsertLast(Head,Tail,iValue);
	}
	else
	{
		newn = (PNODE)malloc(sizeof(NODE));
		newn->data=iValue;
		newn->next=NULL;

		temp = *Head;

		for(i=1;i<iPos-1;i++)
		{
			temp=temp->next;
		}

		newn->next=temp->next;
		temp->next=newn;
	}
}

void Display(PNODE Head)
{
	PNODE temp = Head;
	printf("\n---------------------------------------------------------\n");
	printf("Nodes present in linked lists are : \n");
	do
	{
		printf("|%d|->",temp->data);
		temp=temp->next;
	}while(temp != Head);
	printf("\n");
}
void DeleteFirst(PPNODE Head,PPNODE Tail)
{
	PNODE temp = *Head;

	if(*Head != NULL)
	{
		*Head = (*Head)->next;
		(*Tail)->next = *Head;
		free(temp);
	}
}

void DeleteLast(PPNODE Head,PPNODE Tail)
{
	PNODE temp = *Head;

	if(*Head == NULL)
	{
		return;
	}
	else if((*Head)==(*Tail))
	{
		free(*Head);
		*Head = NULL;
		*Tail = NULL;
	}
	else
	{
		while(temp->next->next != (*Head))
		{
			temp=temp->next;
		}
		free(temp->next);
		(*Tail)=temp;
		(*Tail)->next=*Head;
	}
}

void DeleteAtPos(PPNODE Head,PPNODE Tail,int iPos)
{
	PNODE temp = *Head;
	PNODE temp2 = NULL;
	int i=0;

	int iCount = Count(*Head);

	if(*Head == NULL)
	{
		return;
	}
	if(iPos<0 || iPos>iCount)
	{
		return;
	}
	else if(iPos==1)
	{
		DeleteFirst(Head,Tail);
	}
	else if(iPos==iCount)
	{
		DeleteLast(Head,Tail);
	}
	else
	{
		for(i=1;i<iPos-1;i++)
		{
			temp=temp->next;
		}
		temp2 = temp->next;
		temp->next=temp2->next;
		free(temp2);
	}
}
int Count(PNODE Head)
{
	int iCnt = 0;
	PNODE temp = Head;
	do
	{
		iCnt++;
		temp=temp->next;
	}while(temp != Head);
	return iCnt;
}

int main()
{
	PNODE First = NULL;
	PNODE Last = NULL;
	int no = 0;
	int choice = 0;
	int iRet = 0;
	int iPos = 0;

	do
	{
		printf("\n-------------------------------------------------------------------------\n");
		printf("\n1.InsertFirst\n2.InsertLast\n3.InsertAtPos\n4.Diplay\n5.Count\n6.DeleteFirst\n7.DeleteLast\n8.DeleteAtPos\n9.Exit\n");
		printf("-------------------------------------------------------------------------\n");
		printf("Enter your choice : \t");
		scanf("%d",&choice);
		printf("-------------------------------------------------------------------------\n");

		switch(choice)
		{
			case 1:	printf("Enter the Number : \t");
					scanf("%d",&no);
					InsertFirst(&First,&Last,no);
					break;
			case 2:	printf("Enter the Number : \t");
					scanf("%d",&no);
					InsertLast(&First,&Last,no);
					break;
			case 3:	printf("Enter the position : \t");
					scanf("%d",&iPos);
					printf("Enter the Number : \t");
					scanf("%d",&no);
					InsertAtPos(&First,&Last,no,iPos);
					break;
			case 4:	Display(First);
					break;
			case 5: iRet = Count(First);
					printf("\nNumber of elements present in linked list is : %d\n",iRet);
					break;
			case 6:	DeleteFirst(&First,&Last);
					break; 
			case 7:	DeleteLast(&First,&Last);
					break;
			case 8: printf("Enter the Position : \t");
					scanf("%d",&iPos);
					DeleteAtPos(&First,&Last,iPos);
					break;
			case 9:	break;
			default: printf("Enter valid choice!!!!\n");
		}
	}while(choice!=9);


	return 0;
}