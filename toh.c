#include<stdio.h>

void toh(int n,char S,char T,char D)
{
	if(n==0)
		return;
	toh(n-1,S,D,T);
	printf("Move disk%d from %c to %c\n",n,S,D);
	toh(n-1,T,S,D);
	return;
}

int main()
{
	toh(4,'a','b','c');
	return 0;
}
