#include<stdio.h>
#include<string.h>

int main()
{
	char string[128];
	int i,length,flag=1;

	printf("Please input string: ");
	gets(string);
	length=strlen(string);
	for(i=0;i<length/2;i++)
	{
		if(string[i]!=string[length-1-i])
		{
			flag=0;
			break;
		}
	}

	if(flag==1)
		printf("\n%s shi hui wen.",string);
	else
		printf("\n%s bu shi hui wen.",string);

	return 0;
}