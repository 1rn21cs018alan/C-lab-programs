#include<stdio.h>
#define MAX 15

void push(int S[MAX],int *top,int elem)
{
	if(*top==MAX-1)
	{
		printf("Overflow\n");
		return;
	}
	(*top)++;
	S[*top]=elem;
}
void pop(int S[MAX],int *top)
{
	if(*top==-1)
	{
		printf("Underflow\n");
		return ;
	}
	printf("%d deleted\n",S[*top]);
	(*top)--;
}

void display(int S[MAX],int top)
{	
	for(int i=top;i>=0;i--)
		printf("%d\n",S[i]);

}

int main()
{
	int S[MAX],elem;
	int top=-1,ch;
	while(1)
	{
		printf("Enter 1 to push,2 to pop, 3 to display\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("Enter the element");
				scanf("%d",&elem);
				push(S,&top,elem);
				break;
			case 2:
				pop(S,&top);
				break;
			case 3:
				display(S,top);
				break;
			default:return 0;		
		}
	}
	return 0;
}
