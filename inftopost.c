#include<stdio.h>
#define MAX 15
int F(char a)
{
	switch(a)
	{
		case '+':
		case '-':return 2;
		case '*':
		case '/':
		case '%':return 4;
		case '^':
		case '$': return 5;
		case '(':return 0;
		case '#':return -1;
		default:return 8;
		
	}

}
int G(char a)
{
	switch(a)
	{
		case '+':
		case '-':return 1;
		case '*':
		case '/':
		case '%':return 3;
		case '^':
		case '$': return 6;
		case '(':return 9;
		case ')':return 0;
		default:return 7;
		
	}

}

void push(char S[MAX],int *top,char elem)
{
	if(*top==MAX-1)
	{
		printf("Overflow\n");
		return;
	}
	(*top)++;
	S[*top]=elem;
}
int pop(char S[MAX],int *top)
{
	if(*top==-1)
	{
		printf("Underflow\n");
		return '\0';
	}
	char elem;
	elem=S[*top];
	(*top)--;
	return elem;
}

void convert()
{
	int i,j=0,top=-1;
	char post[MAX],inf[MAX],elem,S[MAX];
	printf("Enter the infix Experssion\n");
	scanf("%s",inf);
	push(S,&top,'#'); 
	for(i=0;inf[i]!='\0';i++)
	{
		while(F(S[top])>G(inf[i]))
			post[j++]=pop(S,&top);
		if(F(S[top])!=G(inf[i]))
			push(S,&top,inf[i]);
		else
			top--;
	}
	while(F(S[top])!=-1)
		post[j++]=pop(S,&top);
	post[j]='\0';
	printf("Postfix\n%s",post);
}

int main()
{
	convert();
	return 0;
}












