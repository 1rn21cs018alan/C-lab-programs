#include<stdio.h>
#define MAX 15


typedef
struct EMP
{
	int Eid;
	char En[MAX];
}E;

void push(E S[MAX],int *top,E elem)
{
	if(*top==MAX-1)
	{
		printf("Overflow\n");
		return;
	}
	(*top)++;
	S[*top]=elem;
}
void pop(E S[MAX],int *top)
{
	if(*top==-1)
	{
		printf("Underflow\n");
		return ;
	}
	printf("%s deleted\n",S[*top].En);
	(*top)--;
}

void display(E S[MAX],int top)
{	
	for(int i=top;i>=0;i--)
		printf("%d-%s\n",S[i].Eid,S[i].En);
	if(top==-1)
		printf("No Employees\n");

}

int main()
{
	E S[MAX], elem;
	int top=-1,ch;
	while(1)
	{
		printf("Enter 1 to push,2 to pop, 3 to display\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("Enter the employee ID and name\n");
				scanf("%d %[^\n]",&elem.Eid,elem.En);
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
