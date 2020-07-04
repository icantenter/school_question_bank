#include<stdio.h>

int main()
{
	char s1[101],s2[101];
	int i,j=0;

	printf("Please input a string: ");
	gets(s1);
	for(i=0;s1[i];i++)
	{
		if(s1[i]!='*')
		{
			s2[j]=s1[i];
			j++;
		}
	}
	s2[j]='\0';
	printf("\nThe result is: ");
	puts(s2);

	return 0;
}