#include<stdio.h>
void facto(int num)
{
	int  fact=1;
	for(int i=1;i<=num;i++)
	{
		fact*=i;
	}
	printf("factorial=%d",fact);
	return;

}
int main()
{
	int num;
	printf("Enter number\n");
	scanf("%d",&num);
	facto(num);
	return 0;
}
	
