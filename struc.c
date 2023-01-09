#define MAX 100
#include<stdio.h>
#include<string.h>
typedef
struct EMP
{
	int Eid;
	char En[20];
	float Esal;
}E;

void accept(E E1[MAX],int n)//Array Input
{
	printf("Enter id,name,sal\n");
	for(int i=0;i<n;i++)
	{
		printf("Enter details of employee %d\n",i+1);
		scanf("%d",&E1[i].Eid);
		scanf("%s",E1[i].En);
		scanf("%f",&E1[i].Esal);
		
	}
}
void display(E E1[MAX],int n)//Array Output
{
	for(int i=0;i<n;i++)
	{
		printf("%d\n",E1[i].Eid);
		printf("%s\n",E1[i].En);
		printf("%f\n",E1[i].Esal);
	}
}

void binsearch(E Em[MAX],int n)//Array search
{
	int mid,low=0,high,key;
	high=n-1;
	printf("Enter search element\n");
	scanf("%d",&key);
	while(low<=high)
	{
		mid=(low+high)/2;
		if(Em[mid].Eid==key)
		{
			printf("Element is at %d\n",mid);
			return;
		}
		if(Em[mid].Eid<key)
			high=mid-1;
		else
			low=mid+1;
	}
	printf("Element not found\n");
}

void linsearch(E Em[MAX],int n)//Array search
{
	int i;
	char key[20];
	printf("Enter search name\n");
	scanf("%s",key);
	for(i=0;i<n;i++)
	{
		if(strcmp(key,Em[i].En)==0)
		{
			printf("Employee at %d\n",i);
			return;
		}
		
	}
	printf("Element not found\n");
}

void swap( E *E1,E *E2)
{
	int tid;
	char tn[20];
	float tsal;
	tsal=(*E1).Esal;
	tid=(*E1).Eid;
	strcpy(tn,(*E1).En);
	(*E1).Esal=(*E2).Esal;
	(*E1).Eid=(*E2).Eid;
	strcpy((*E1).En,(*E2).En);
	(*E2).Eid=tid;
	(*E2).Esal=tsal;
	strcpy((*E2).En,tn);
	return;
	
}


void sort(E E1[MAX],int n)//Array sort
{
	int temp,i,j;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(E1[j].Eid>E1[j+1].Eid)
			{
				swap(&(E1[j]),&(E1[j+1]));
			}
		}
	}
}



int main()
{
	E E1[MAX];
	int n;
	printf("Enter no of employees\n");
	scanf("%d",&n);
	accept(E1,n);
	for(int i=0;i<n;i++)
	{
		printf("%d\n",E1[i].Eid);
		printf("%s\n",E1[i].En);
		printf("%f\n",E1[i].Esal);
	}
	sort(E1,n);
	printf("\n\n\nsorted array\n");
	display(E1,n);
	linsearch(E1,n);
	binsearch(E1,n);
	printf("\n");
	return 0;
	
}
