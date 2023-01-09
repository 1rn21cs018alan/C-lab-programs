#include <stdio.h>
#define MAX 100

void accept (int a[MAX],int n)
{
	printf("Enter Elements \n");
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	
	return;
}
void display (int a[MAX],int n)
{
	
	for(int i=0;i<n;i++)
		printf("\n%d",a[i]);
	
	return;
}
int main()
{
	int arr[MAX],n;
	printf("Enter size of array:");
	scanf("%d",&n);
	accept(arr,n);
	printf("DIsplaying Array:\n");
	display(arr,n);
	
	return 0;
}
