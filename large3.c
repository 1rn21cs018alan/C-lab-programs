#include<stdio.h>
void large(int ar[3])
{
	int i,j,temp;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2-i;j++)
		{
			if(ar[j]>ar[j+1])
			{
				temp=ar[j];
				ar[j]=ar[j+1];
				ar[j+1]=temp;
			}
		}
	}
	printf("Highest=%d\n",ar[2]);
	if(ar[1]!=ar[2])
	{
		printf("Second Highest=%d\n",ar[1]);
		if(ar[0]!=ar[1])
			printf("Smallest=%d\n",ar[0]);
	}
	else if(ar[0]!=ar[2])
		printf("Second Highest =%d",ar[0]);
	return;

}
int main()
{
	int arr[3];
	printf("Enter 3 numbers\n");
	scanf("%d%d%d",&arr[0],&arr[1],&arr[2]);
	large(arr);
	return 0;
}
	
