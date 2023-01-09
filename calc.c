#include<stdio.h>
void add();
void sub();
void mul();
void div();
void mod();
void menu();
int main()
{
	menu();
	return 0;
}
void menu()
{
	
	printf("Enter coresponding Number for operation\n");
	printf("E1.Add\n2.Subtract\n3.Multiply\n4.Divide\n5.Modulus\n");
	printf("Any other number will close the calculator\n");
	int ctrl;
	while(1)
	{
		
		printf("\n\nEnter Operation number:");
		scanf("%d",&ctrl);
		switch(ctrl)
		{
			case 1:add();
			break;
			case 2:sub();
			break;
			case 3:mul();
			break;
			case 4:div();
			break;
			case 5:mod();
			break;
			default:return;
		}
	}
	return;
}
void add()
{
	int oper1,oper2;
	printf("Enter the 2 operands\n");
	scanf("%d%d",&oper1,&oper2);
	printf("sum=%d",(oper1+oper2));
	return;
}
void sub()
{
	int oper1,oper2;
	printf("Enter the 2 operands\n");
	scanf("%d%d",&oper1,&oper2);
	printf("Result=%d",(oper1-oper2));
	return;
}
void mul()
{
	int oper1,oper2;
	printf("Enter the 2 operands\n");
	scanf("%d%d",&oper1,&oper2);
	printf("Product=%d",(oper1*oper2));
	return;
}
void mod()
{
	int oper1,oper2;
	printf("Enter the 2 operands\n");
	scanf("%d%d",&oper1,&oper2);
	printf("Modulus=%d",(oper1%oper2));
	return;
}
void div()
{
	int oper1,oper2;
	printf("Enter the 2 operands\n");
	scanf("%d%d",&oper1,&oper2);
	float val;
	if(oper2==0)
	{
		printf("Divide by zero error");
		return;
	}
	val=(float)oper1/oper2;
	printf("Result=%.3f",val);
	return;
}


