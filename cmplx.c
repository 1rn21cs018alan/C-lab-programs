#include<stdio.h>
void add(int a1,int b1,int a2, int b2)
{
	int real,img;
	real=a1+a2;
	img=b1+b2;
	printf("Sum=%d",real);
	if(img>=0)
	{
		printf("+");
	}
	printf("%di",img);
	return;

}
int main()
{
	int r1,r2,i1,i2;
	printf("Enter cooeficients of value1\n");
	scanf("%d%d",&r1,&i1);
	printf("Enter cooeficients of value2\n");
	scanf("%d%d",&r2,&i2);
	add(r1,i1,r2,i2);
	return 0;
}
	
