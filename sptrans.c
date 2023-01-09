#include <stdio.h>
#define MAX 10

void accept (int a[MAX][3])
{
	printf("Enter Elements \n");
	printf("Enter no of rows and columns in array:");
	scanf("%d%d",&a[0][0],&a[0][1]);
	int k=0,temp;
	for(int i=0;i<a[0][0];i++)
	{
		for(int j=0;j<a[0][1];j++)
		{
			scanf("%d",&temp);
			//printf(".");		
			if(temp==0)
				continue;
			//printf("-");
			k++;
			a[k][0]=i;
			a[k][1]=j;
			a[k][2]=temp;
			//printf("-%d-",temp);
		}
	}
	a[0][2]=k;
	return;
}

void display1 (int a[MAX][3])
{
	printf("\n");
	int k=1;
	for(int i=0;i<a[0][0];i++)
	{
		for(int j=0;j<a[0][1];j++)
		{
			if((i==a[k][0])&&(j==a[k][1]))
			{
				printf("%d\t",a[k][2]);
				k++;
			}
			else 
				printf("0\t");
		}
		printf("\n");
	}
	return;
}

void display (int a[MAX][3])
{
	printf("\nRow\tCol\tVal\t");
	printf("\n%d\t%d\t%d\tNo of parameters for each column",a[0][0],a[0][1],a[0][2]);
	for(int i=1;i<=a[0][2];i++)
	{
		printf("\n%d\t%d\t%d",a[i][0],a[i][1],a[i][2]);
	}
	return;
}

void transpose( int a[MAX][3])
{
	int i,j,k=1,temp;
	for(i=1;i<a[0][2];i++)
	{
		for(j=1;j<a[0][2]-i;j++)
		{
			if(a[j][1]>a[j+1][1])
			{
				temp=a[j][0];
				a[j][0]=a[j+1][0];
				a[j+1][0]=temp;
				temp=a[j][1];
				a[j][1]=a[j+1][1];
				a[j+1][1]=temp;
				temp=a[j][2];
				a[j][2]=a[j+1][2];
				a[j+1][2]=temp;
			}
		}
	}
	k=a[0][2];
	for(j=0;j<=k;j++)
	{
		temp=a[j][0];
		a[j][0]=a[j][1];
		a[j][1]=temp;
	}
	
}


int main()
{
	int a[MAX][3];
	accept(a);
	transpose(a);
	display1(a);
	return 0;
}
