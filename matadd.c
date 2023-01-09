#include <stdio.h>
#define MAX 10

void accept (int a[MAX][MAX],int r,int c)
{
	printf("Enter Elements \n");
	for(int i=0;i<r;i++)
		for(int j=0;j<c;j++)
			scanf("%d",&a[i][j]);
	return;
}
void display (int a[MAX][MAX],int r,int c)
{
	printf("\n");
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
			printf("%d\t",a[i][j]);
		printf("\n");
	}
	return;
}
void add (int a[MAX][MAX],int b[MAX][MAX],int c[MAX][MAX],int r,int c1)
{
     int i,j;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c1;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	return;
}

int main()
{
	int a[MAX][MAX],r1,r2,c1,c2,b[MAX][MAX],c[MAX][MAX];
	printf("Enter rows and columns in matrix 1:");
	scanf("%d%d",&r1,&c1);
	accept(a,r1,c1);
	printf("\nEnter rows and columns in matrix 2:");
	scanf("%d%d",&r2,&c2);
	if((r2!=r1)||(c2!=c1))
	{
		printf("Matrices are incompatible");
		return 0;
	}
	accept(b,r2,c2);
	add(a,b,c,r1,c1);
	display(c,r1,c1);
	return 0;
}
