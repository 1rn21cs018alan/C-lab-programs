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
void mul (int a[MAX][MAX],int r1,int c1,int b[MAX][MAX],int r2,int c2)
{
     int i,j,r3,c3,sum,m,c[MAX][MAX];
     
	if(r2!=c1)
	{
		printf("Matrices are incompatible");
		return ;
	}
	
	r3=r1;
	c3=c2;
	for(i=0;i<r3;i++)
	{
		for(j=0;j<c3;j++)
		{
			sum=0;
			for(m=0;m<r2;m++)
			{
				sum+=a[i][m]*b[m][j];
			}
			c[i][j]=sum;
		}
	}
	printf("Product Matrix:\n");
	display(c,r3,c3);
	return;
}

int main()
{
	int a[MAX][MAX],r1,r2,c1,c2,b[MAX][MAX];
	printf("Enter rows and columns in matrix 1:");
	scanf("%d%d",&r1,&c1);
	accept(a,r1,c1);
	printf("\nEnter rows and columns in matrix 2:");
	scanf("%d%d",&r2,&c2);
	accept(b,r2,c2);
	mul(a,r1,c1,b,r2,c2);
	return 0;
}
