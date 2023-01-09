#include<stdio.h>
#include<math.h>
void prime(int num)
{
	float root;
	root=sqrt(num);
	for(int i=2;i<=root;i++)
	{
		if(num%i==0)
		{
			printf("Number is not a Prime");
			return;
		}
	}
	printf("Number is a Prime");
	return;

}
int main()
{
	int num;
	printf("Enter number\n");
	scanf("%d",&num);
	prime(num);
	return 0;
}
	
