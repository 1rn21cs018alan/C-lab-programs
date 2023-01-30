#include<stdio.h>
#define MAX 15

typedef
struct Employee
{
	int Eid;
	char En[MAX];	
}E;
void insert(E Q[MAX],int *front,int * rear, E elem)
{
	if(*rear==MAX-1)
	{
		printf("Insertion not possible\n");
		return ;
	}
	(*rear)++;
	Q[*rear]=elem;
}
void del(E Q[MAX],int * front, int * rear)
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


void display(E  Q[MAX],int front,int rear)
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
		printf("%s\n%d\n\n",Q[i].En,Q[i].Eid);
	}

}

int main()
{
	E Q[MAX],elem;
	int front=0,rear=-1,ch;
	while(1)
	{
		printf("Enter 1.insert ,2.delete ,3.display\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("Enter the employee details\n");
				scanf("%s%d",elem.En,&elem.Eid);
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
