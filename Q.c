#include<stdio.h>
#include <stdlib.h>
int * insert(int *Q,int front,int * rear,int elem)
{
	if(*rear<front)
	{
		(*rear)++;
		Q[*rear]=elem;
		return Q;
	}
	(*rear)++;
	Q=(int*)realloc(Q,sizeof(int)*((*rear)+1));
	Q[*rear]=elem;
	return Q;
}
int * del(int *Q,int front, int * rear)
{
	if(front>*rear)
	{
		printf("No elements\n");
		return Q;
	}
	if(*rear==0)
	{
		printf("%d deleted \n",Q[front]);
		(*rear)--;
		return Q;
	}
	printf("%d deleted \n",Q[front]);
	for(int i=0;i<*rear;i++)
		Q[i]=Q[i+1];
	Q=(int*)realloc(Q,sizeof(int)*((*rear)));
	(*rear)--;
	return Q;
	
}

void display(int  *Q,int front,int rear)
{	
	if(rear==-1)
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
	int *Q,elem;
	int front=0,rear,ch;
	rear=-1;
	Q=(int*)malloc(sizeof(int));
	while(1)
	{
		printf("Enter 1.insert,2.delete,3.display\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("Enter the element\n");
				scanf(" %d",&elem);
				Q=insert(Q,front,&rear,elem);
				break;
			case 2:
				Q=del(Q,front,&rear);
				break;
			case 3:
				display(Q,front,rear);
				break;
			default:return 0;		
		}
	}
	return 0;
}
