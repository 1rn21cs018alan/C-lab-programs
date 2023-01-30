#include <stdio.h>
long fact(long n)
{
	if(n<2)
		return 1;
	return n*fact(n-1);	
}
int main()
{
	printf("Enter Value:");
	long n;
	scanf("%ld",&n);
	printf("factorial :%ld",fact(n));
	return 0;
}
