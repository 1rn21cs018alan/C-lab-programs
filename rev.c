#include <stdio.h>
int reverse (int* num)
{
	int rev=0,n;
	n=*num;
	while(n>0)
	{
		rev=(rev*10)+(n%10);
		n/=10;
	}
	return rev;
}
int main()
{
	int num,rev;
	printf("Enter number:");
	scanf("%d",&num);
	rev=reverse(&num);
	printf("reverse of %d is %d",num,rev);
	
	return 0;
}
