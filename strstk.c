#include<stdio.h>
#include<string.h>
#define MAX 15

void push(char  S[MAX][MAX],int *top,char  elem[MAX])
{
	if(*top==MAX-1)
	{
		printf("Overflow\n");
		return;
	}
	(*top)++;
	strcpy(S[*top],elem);
}
void pop(char  S[MAX][MAX],int *top)
{
	if(*top==-1)
	{
		printf("Underflow\n");
		return ;
	}
	printf("%s deleted\n",S[*top]);
	(*top)--;
}

void display(char  S[MAX][MAX],int top)
{	
	for(int i=top;i>=0;i--)
		printf("%s\n",S[i]);
	if(top==-1)
		printf("No elements\n");

}

int main()
{
	char S[MAX][MAX],elem[MAX];
	int top=-1,ch;
	while(1)
	{
		printf("Enter 1 to push,2 to pop, 3 to display\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("Enter the element\n");
				scanf(" %s",elem);
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
