#include <stdio.h>
void swap(int *op1,int *op2)
{
	*op1=(*op1)+*op2;
	*op2=(*op1)-*op2;	
	*op1=(*op1)-*op2;
	return;
}
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
	printf("\nBitwise OR=%d\nBitwise XOR=%d",(a|b),(a^b));
	return;
}
void accept (int* op1,int *op2)
{
	printf("Enter 2 values \n");
	scanf("%d%d",op1,op2);
	
	return;
}
int main()
{
	int num1,num2;
	accept(&num1,&num2);
	printf("Befor eswap:%d,%d",num1,num2);
	swap(&num1,&num2);
	printf("\n After Swap: %d,%d",num1,num2);
	opr(num1,num2);
	return 0;
}
