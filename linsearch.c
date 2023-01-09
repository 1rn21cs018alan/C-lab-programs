#include <stdio.h>
#define MAX 100

void accept (int a[MAX],int n)
{
	printf("Enter Elements \n");
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	
	return;
}
void search (int a[MAX],int n)
{
	int i,elem;
	printf("Enter search Elements \n");
	scanf("%d",&elem);
	
	for(i=0;i<n;i++)
	{
		if(a[i]==elem)
		{
			printf("Element found at %d",i);
			return;
		}
	}
	printf("Element not found");
	
	return;
}
int main()
{
	int arr[MAX],n;
	printf("Enter size of array:");
	scanf("%d",&n);
	accept(arr,n);
	search(arr,n);
	
	return 0;
}
