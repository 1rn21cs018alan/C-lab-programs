#define MAX 100
#include<stdio.h>

void accept(int a[MAX],int n)//Array Input
{
	printf("Enter Elements\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
}
void display(int a[MAX],int n)//Array Output
{
	for(int i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
}
void sort(int a[MAX],int n)//Array sort
{
	int temp,i,j;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}
int main()
{
	int a[MAX],n,elem;
	printf("Enter size of array");
	scanf("%d",&n);
	accept(a,n);
	sort(a,n);
	printf("sorted array");
	display(a,n);
	return 0;
	
}
