#include<stdio.h>
#include<string.h>
#define MAX 30
 
int pattern_match(char OS[MAX],char R[MAX],int opos)
{
	int i,n;
	n=strlen(R);
	for(i=0;i<n;i++)
		if(OS[opos+i]!=R[i])
			return 0;
	return 1;
}


int replace(char OS[MAX], char  R[MAX],int opos)
{
	int i=0;
	for(i=0;i<strlen(R);i++)
	{
		//printf("REP INS_%c",R[i]);
		OS[i+opos]=R[i];
	}
	opos+=i;
	return opos;
}

int main()
{
	printf("Enter Original String, Pattern String and Replace String\n");
	char OS[MAX],PS[MAX],RS[MAX],Output[MAX];
	int i,opos=0;
	scanf("%[^\n] %[^\n] %[^\n]",OS,PS,RS);
	for(i=0;OS[i]!='\0';i++)
	{
		if(pattern_match(OS,PS,i))
		{
			opos=replace(Output,RS,opos);
			i+=strlen(PS)-1;
		}
		else
		{
			//printf("NORMAL INS_%c",OS[i]);
			Output[opos]=OS[i];
			opos++;
		}
	}
	Output[opos+1]='\0';
	printf("\nOutput String \n%s",Output);
	return 0;
}
