#include <stdio.h>
void swap(int *op1,int *op2)
{
	int temp;
	temp=*op1;
	*op1=*op2;
	*op2=temp;	
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
	
	return 0;
}
