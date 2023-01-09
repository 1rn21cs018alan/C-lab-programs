#include<stdio.h>
#include<stdlib.h>

int * push(int * S,int *top,int elem)
{
	if(*top==-1)
	{
		(*top)++;
		S[*top]=elem;
		return S;
	}
	S=(int*)realloc(S,sizeof(int)*((*top)+2));
	(*top)++;
	S[*top]=elem;
	return S;
}
int * pop(int * S,int *top)
{
	if(*top==-1)
	{
		printf("Underflow\n");
		return S;
	}
	printf("%d deleted\n",S[*top]);
	if(top!=0)
		S=(int*)realloc(S,sizeof(int)*(*top));
	(*top)--;
	return S;
}

void display(int * S,int top)
{	
	for(int i=top;i>=0;i--)
		printf("%d\n",S[i]);
	if(top==-1)
		printf("No elements\n");

}

int main()
{
	int * S,elem;
	S=(int*)malloc(sizeof(int));
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
				S=push(S,&top,elem);
				break;
			case 2:
				S==pop(S,&top);
				break;
			case 3:
				display(S,top);
				break;
			default:return 0;		
		}
	}
	return 0;
}
