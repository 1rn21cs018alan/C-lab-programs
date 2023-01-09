#include<stdio.h>
void leap(int n)
{
	if(n%4!=0)
	{
		printf("Not A Leap year");
		return;
	}
	if(n%100!=0)
	{
		printf("Leap year");
		return;
	}
	if(n%400!=0)
	{
		printf("Not A Leap year");
		return;
	}
	printf("Leap year");
	return;

}
int main()
{
	int num;
	printf("Enter year:");
	scanf("%d",&num);
	leap(num);
	return 0;
}
	
