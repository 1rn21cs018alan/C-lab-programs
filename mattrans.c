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
void transpose (int a[MAX][MAX],int *r,int *c,int b[MAX][MAX])
{
	int i,j,temp,R,C;
	R=(*r);
	C=(*c);
	(*c)=R;
	(*r)=C;
	for(i=0;i<C;i++)
	{
		for(j=0;j<R;j++)
		{
			b[i][j]=a[j][i];
		}
	}
	return;
}

int main()
{
	int a[MAX][MAX],r,c,b[MAX][MAX];
	printf("Enter rows and columns in array:");
	scanf("%d%d",&r,&c);
	accept(a,r,c);
	printf("Accepted array\n");
	display(a,r,c);
	transpose(a,&r,&c,b);
	printf("\nTranspose\n");
	display(b,r,c);
	return 0;
}
