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
	}
	return;
}
void display1 (int a[MAX][MAX],int r,int c)
{
	printf("\n");
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
			printf("%d\t",a[j][i]);
	}
	return;
}

int main()
{
	int a[MAX][MAX],r,c;
	printf("Enter no of rows and columns in array:");
	scanf("%d%d",&r,&c);
	accept(a,r,c);
	printf("Rowmajor\n");
	display(a,r,c);
	printf("\n Column major\n");
	display1(a,c,r);
	return 0;
}
