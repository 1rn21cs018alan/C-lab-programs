#include<stdio.h>
#define MAX 15

typedef
struct Employee
{
	int Eid;
	char En[MAX];Z
	
}E;
void insert(int Q[MAX],int *front,int * rear, int elem)
{
	if(*rear==MAX-1)
	{
		printf("Insertion not possible\n");
		return ;
	}
	(*rear)++;
	Q[*rear]=elem;
}
void del(int Q[MAX],int * front, int * rear)
{
	if((*front>*rear))
	{
		printf("Deletion not possible\n");
		return;
	}
	printf("%s deleted \n",Q[*front].En);
	(*front)++;
	return;
}


void display(int  Q[MAX],int front,int rear)
{	
	if(rear<front)
	{
		printf("No elements\n");
		return;
	}
	int i;
	printf("Elements of queue are\n");
	for(i=front;i<=rear;i++)
	{
		printf("%d\n",Q[i]);
	}

}

int main()
{
	int Q[MAX],front=0,rear=-1,elem,ch;
	while(1)
	{
		printf("Enter 1.insert ,2.delete ,3.display\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("Enter the element\n");
				scanf(" %d",&elem);
				insert(Q,&front,&rear,elem);
				break;
			case 2:
				del(Q,&front,&rear);
				break;
			case 3:
				display(Q,front,rear);
				break;
			default:return 0;		
		}
	}
	return 0;
}
