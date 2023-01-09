#include<stdio.h>
#include<math.h>
#define MAX 10
typedef
struct Polynomial
{
	int px;
	int cf;
}P;
void display(P P1[MAX],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(P1[i].cf==0)
			continue;
		if(P1[i].cf>0)
			printf("+");
		printf("%dX^%d\t",P1[i].cf,P1[i].px);			
	}

}
void accept(P P1[MAX],int n)
{
	printf("Enter the terms\n");
	for(int i=0;i<n ;i++)
	{	
		printf("Enter the coefficient and power of x in the term\n");
		scanf("%d%d",&(P1[i].cf),&(P1[i].px));
	}
}
void eval(P P1[MAX],int n)
{
	int x,val,i;
	val=0;
	printf("Enter the value of x");
	scanf("%d",&x);
	for(i=0;i<n;i++)
		val+=(P1[i].cf)*(pow(x,P1[i].px));
	printf("Value of polynomial=%d\n",val);
}	
void add(P P1[MAX],int n1,P P2[MAX],int n2)
{
	P add[MAX];
	int i ,j,k=0;
	for(i=0;i<n1;i++)
	{	
		if(P1[i].cf==0)
			continue;
		add[k].px=P1[i].px;
		add[k].cf=P1[i].cf;
			
		for(j=0;j<n2;j++)
		{
			if (P2[j].cf==0)
				continue;
			if(P2[j].px!=P1[i].px)
				continue;
			add[k].cf+=P2[j].cf;
			P2[j].cf=0;
		}
		k++;
	}
	for(i=0;i<n2;i++)
	{
		if(P2[i].cf==0)
			continue;
		add[k].px=P2[i].px;
		add[k].cf=P2[i].cf;
		k++;
	}
	display(add,k);
}
	
int main()
{
	 P P1[MAX],P2[MAX];
	 int n1,n2;
	 printf("Enter terms in poly 1\n");
	 scanf("%d",&n1);
	 accept(P1,n1);
	 printf("Enter terms in poly 2\n");
	 scanf("%d",&n2);
	 accept(P2,n2);
	 add(P1,n1,P2,n2);
	 return 0;


}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
