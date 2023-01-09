#include<stdio.h>
#define MAX 15

void push(char  S[MAX],int *top,char  elem)
{
	if(*top==MAX-1)
	{
		printf("Overflow\n");
		return;
	}
	(*top)++;
	S[*top]=elem;
}
void pop(char  S[MAX],int *top)
{
	if(*top==-1)
	{
		printf("Underflow\n");
		return ;
	}
	(*top)--;
	return S[(*top)+1];
}

void display(char  S[MAX],int top)
{	
	for(int i=top;i>=0;i--)
		printf("%c\n",S[i]);
	if(top==-1)
		printf("No elements\n");

}

int main()
{
	char S[MAX],elem;
	int top=-1,ch;
	while(1)
	{
		printf("Enter 1 to push,2 to pop, 3 to display\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("Enter the element\n");
				scanf(" %c",&elem);
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
