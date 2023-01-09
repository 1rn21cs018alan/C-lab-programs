#include<stdio.h>
void len(char a[100])
{
	int i=0;
	while(a[i]!='\0')
		i++;
	printf("\n length=%d",i);
}

int main()
{
	char a[100];
	printf("Enter string\n");
	scanf("%s",a);
	len(a);
	return 0;

}
