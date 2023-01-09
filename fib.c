#include<stdio.h>
void fibo(int n)
{
	int first=0,sec=1,third=1;
	if(n==0)
	{
		printf("Number is a Fibonacci");
		return;
	}
	if(n==1)
	{
		printf("Number is a Fibonacci");
		return;
	}
	while(third<=n)
	{
		if(n==third)
		{
			printf("Number is a Fibonacci");
			return;
		}
		third=first+sec;
		first=sec;
		sec=third;
	}
	printf("Number is not a Fibonacci");
	
	return;

}
int main()
{
	int num;
	printf("Enter number\n");
	scanf("%d",&num);
	fibo(num);
	return 0;
}
	
