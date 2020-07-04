#include <stdio.h>
#include <string.h>

#define MAX_LINE 5
#define MAX_LINE_LEN 81

void sort(char *string[]);
int main(void)
{
	int i;
	char *pstr[MAX_LINE], str[MAX_LINE][MAX_LINE_LEN];

	for (i = 0; i < MAX_LINE; i++)
	{
		pstr[i] = str[i];
	}

	printf("Input 5 strings:\n");
	for (i = 0; i < MAX_LINE; i++)
	{
		gets(pstr[i]);
	}
	sort(pstr);
	printf("---------------------------\n");
	for (i = 0; i < MAX_LINE; i++)
	{
		printf("%s\n", pstr[i]);
	}
	
	return 0;
}

void sort(char *string[])
{	
	char *pointer;
	int i, j = 0, k;

	for (k = 0; k < 4; k++)
	{
		for	(i = 0; i < 4 - k; i++)
		{
			while(string[i][j] == string[i + 1][j] && j < 80)
			{
				j++;
			}
			if (string[i][j] > string[i + 1][j])
			{
				pointer = string[i];
				string[i] = string[i + 1];
				string[i + 1] = pointer;
			}
			j = 0;
		}
	}
}