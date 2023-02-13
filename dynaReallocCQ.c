#include<stdio.h>
#include<stdlib.h>


int mq=3;
int* insert(int *Q, int *front, int *rear ,int *count, int elem)
{
	if(*count==mq)
	{
		int *P,i,j;
		Q=(int*)realloc(Q,sizeof(int)*mq*2);
		if(*front>*rear)
		{
			for(i=*front,j=mq;i<mq;i++,j++)
				P[j]=Q[i];
			*front=mq;
		}
		(*count)++;
		(*rear)++;
		Q[*rear]=elem;
		mq=mq*2;
		return Q;
	}
	*rear=((*rear)+1)%mq;
	Q[*rear]=elem;
	(*count)++;
	return Q;
}
void del(int *Q, int *front,int* count)
{
if(*count==0)
{
printf("Underflow\n");
return ;
}
printf("Element %d deleted ",Q[*front]);
*front=((*front)+1)%mq;
(*count)--;
return;
}
void display(int *Q,int front,int count)
{
if(count==0)
{
printf("No elements\n");
return;
}
int i;
printf("Elements in Circuar Queue\n");
for(i=front;count!=0;count--)
{
printf("%d\n",Q[i]);
i=(i+1)%mq;
}

}

int main()
{
int *Q,rear=mq-1,front=0,count=0,elem,ch;
Q=(int*)malloc(sizeof(int)*mq);
while(1)
{//1ins,2del,3dis
printf("Enter the operation no\n");
scanf("%d",&ch);
switch(ch)
{
case 1:
printf("Enter the Element\n");
scanf("%d",&elem);
Q=insert(Q,&front,&rear,&count,elem);
break;
case 2:
del(Q,&front,&count);
break;
case 3:
display(Q,front,count);
break;
case 4:
printf("%d,%d",mq,count);
break;
default:
return 0;
}
printf("\n___\n");
}
return 0;
}
