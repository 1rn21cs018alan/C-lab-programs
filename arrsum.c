#include <stdio.h>
#define MAX 100

void accept (int a[MAX],int n)
{
	printf("Enter Elements \n");
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	
	return;
}
void elemSum (int a[MAX],int n)
{
	int i,sum=0;
	for(i=0;i<n;i++)
	{
		sum+=a[i];
	}
	printf("sum of Elements=%d",sum);
	
	return;
}
int main()
{
	int arr[MAX],n;
	printf("Enter size of array:");
	scanf("%d",&n);
	accept(arr,n);
	elemSum(arr,n);
	
	return 0;
}
