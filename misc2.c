#include <stdio.h>
void opr(int a,int b)
{
	int sum,car,temp,c=0;
	sum=(a^b);
	car=(a&b)*2;
	printf("\n%d,%d\n",sum,car);
	while(car!=0)
	{
		temp=sum;
		sum=sum^car;
		car=(temp&car)*2;
		c++;
		if(c>20)
		{
			printf("ERR");
			break;
		}
	}
	printf("%d",sum);
}

int main()
{
	int op1,op2;
	printf("Enter 2 values \n");
	scanf("%d%d",&op1,&op2);
	opr(op1,op2);
	return 0;
}
