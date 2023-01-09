#include<stdio.h>
#include<math.h>
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
char pop(char S[MAX],int *top)
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

void eval(char post[MAX])
{
	char S[MAX];
	int top=-1,i,oper1,oper2,res;
	for(i=0;post[i]!='\0';i++)
	{
		if((post[i]>='0')&&(post[i]<='9'))
		{
			push(S,&top,post[i]);
		}
		else
		{
			oper2=pop(S,&top)-'0';
			oper1=pop(S,&top)-'0';
			switch(post[i])
			{		
				case '+':res=oper1 + oper2;
					    break;
				case '-':res=oper1 - oper2;
					    break;
				case '*':res=oper1 * oper2;
					    break;
				case '/':
					    if(oper2==0)
					    	printf("Divide by 0 error\n");return;
					    res=oper1 / oper2;
					    break;
				case '%':res=oper1 % oper2;
					    break;
				case '^':
				case '$':res=pow(oper1 , oper2);
					    break;
			}
			push(S,&top,res+'0');
		}
	
	}
	printf("%c",pop(S,&top));

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
	printf("Postfix\n%s\n",post);
	eval(post);
}

int main()
{
	convert();
	return 0;
}












