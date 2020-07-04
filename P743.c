#include <stdio.h>
#include <string.h>

int main()
{
	char string[128];
	int i,length;
	
	printf("Input a string: ");
	gets(string);
	length=strlen(string);
	printf("\nThe result is: ");
	for(i=length-1;i>=0;i--)
		printf("%c",string[i]);

	return 0;
}


