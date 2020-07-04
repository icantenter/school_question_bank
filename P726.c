#include<stdio.h>

int main()
{
	char ch,string[101];
	int i,ret,length;

	printf("input a string: ");
	for(i=0;i<100;i++)
	{
		ret=scanf("%c",&ch);
		if(ch=='\n' || ret==EOF || ret==0)
			break;
		else 
			string[i]=ch;
	}
	length=i;
	string[i]='\0';
	printf("\nThe string lenth is: %d",length);
	printf("\nThe string is: %s",string);

	return 0;
}



