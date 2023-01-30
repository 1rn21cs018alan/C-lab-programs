#include<stdio.h>
#define MAX 15

void insert_front(int Q[MAX],int *front,int * rear, int elem)
{
	if((*front==0) &&(*rear==-1))
	{
		(*rear)++;
		Q[*rear]=elem;
		return;
	}
	if(*front==0)
	{
		printf("Insertion not possible\n");
		return ;
	}
	(*front)--;
	Q[*front]=elem;
}
void insert_rear(int Q[MAX],int *front,int * rear, int elem)
{
	if(*rear==MAX-1)
	{
		printf("Insertion not possible\n");
		return ;
	}
	(*rear)++;
	Q[*rear]=elem;
}
void delete_front(int Q[MAX],int * front, int * rear)
{
	if((*front==0) &&(*rear==-1))
	{
		printf("Deletion not possible\n");
		return;
	}
	if(*front==*rear)
	{
		
		printf("%d deleted \n",Q[*front]);
		*front=0;
		*rear=-1;
		return;
	}
	printf("%d deleted \n",Q[*front]);
	(*front)++;
	return;
}
void delete_rear(int Q[MAX],int * front, int * rear)
{
	if((*front==0) &&(*rear==-1))
	{
		printf("Deletion not possible\n");
		return;
	}
	if(*front==*rear)
	{
		
		printf("%d deleted \n",Q[*front]);
		*front=0;
		*rear=-1;
		return;
	}
	printf("%d deleted \n",Q[*rear]);
	(*rear)--;
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
		printf("Enter 1.insert front,2. insert rear,3.delete front, 4.delete rear,5.display\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("Enter the element\n");
				scanf(" %d",&elem);
				insert_front(Q,&front,&rear,elem);
				break;
			case 2:
				printf("Enter the element\n");
				scanf(" %d",&elem);
				insert_rear(Q,&front,&rear,elem);
				break;
			case 3:
				delete_front(Q,&front,&rear);
				break;
			case 4:
				delete_rear(Q,&front,&rear);
				break;
			case 5:
				display(Q,front,rear);
				break;
			default:return 0;		
		}
	}
	return 0;
}
