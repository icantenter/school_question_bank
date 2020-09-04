#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE  *fp, *fp1;    
	char  string[81];

	if ((fp = fopen("in.txt", "r")) == NULL)
	{
		printf("cann't open file for read!\n");
		exit(1);
	}

	if ((fp1 = fopen("write.txt", "w")) == NULL)
	{
		fclose(fp);
		printf("cann't open file for write!\n");
		exit(2);
	} 

	/*********Found************/
	while (fgets(string, 81, fp) != NULL)
	{
		/*********Found************/
		fputs(string, fp1);
	}

	fclose(fp);
	fclose(fp1);
	return 0;
}
