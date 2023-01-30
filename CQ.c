#include<stdio.h>
#define MAX 15

void insert(int Q[MAX],int * rear, int * count,int elem)
{
	if(*count==MAX)
	{
		printf("Insertion not possible\n");
		return ;
	}
	(*count)++;
	(*rear)=((*rear)+1)%MAX;
	Q[*rear]=elem;
}
void del(int Q[MAX],int * front, int * count)
{
	if(*count==0)
	{
		printf("No elements\n");
		return ;
	}
	(*count)--;
	printf("%d deleted \n",Q[*front]);
	(*front)=((*front)+1)%MAX;
}

void display(int  Q[MAX],int front,int count)
{	
	if(count==0)
	{
		printf("No elements\n");
		return;
	}
	int i;
	printf("Elements of queue are\n");
	for(i=0;count>0;count--)
	{
		printf("%d\n",Q[i]);
		i=(i+1)%MAX;
	}

}

int main()
{
	int Q[MAX],elem;
	int front=0,count=0,rear,ch;
	rear=MAX-1;
	while(1)
	{
		printf("Enter 1.insert,2.delete,3.display\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("Enter the element\n");
				scanf(" %d",&elem);
				insert(Q,&rear,&count,elem);
				break;
			case 2:
				del(Q,&front,&count);
				break;
			case 3:
				display(Q,front,count);
				break;
			default:return 0;		
		}
	}
	return 0;
}
