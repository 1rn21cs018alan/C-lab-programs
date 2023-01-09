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
	int max,temp,i,j;
	for(i=0;i<n;i++)
	{
		max=i;
		for(j=i;j<n;j++)
		{
			if(a[max]<a[j])
				max=j;
		}
		if(i!=max)
		{
			temp=a[i];
			a[i]=a[max];
			a[max]=temp;
		}
	}
}
void search(int a[MAX],int n,int elem)//Array search
{
	int mid,low=0,high;
	high=n-1;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(a[mid]==elem)
		{
			printf("Element is at %d",mid);
			return;
		}
		if(a[mid]<elem)
			high=mid-1;
		else
			low=mid+1;
	}
	printf("Element not found");
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
	printf("Enter search element");
	scanf("%d",&elem);
	search(a,n,elem);
	return 0;
	
}
