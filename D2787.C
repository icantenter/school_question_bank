#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*********Found************/
char *GetMonthName2(int n)
{
	static char *MonthName[]={"ERROR", "Jan.", "Feb.", "March", "Apr.", "May", "June", "July", "Agu.", "Sept.", "Oct.", "Nov.", "Dec."};

	if(n < 1|| n > 12)
	{
		/*********Found************/
		return MonthName[0];
	}
	else
	{
		/*********Found************/
		return MonthName[n];
	}
}

int main(void)
{
	int n;
	char str[20];	

	printf("请输入数字月份:");
	scanf("%d", &n);	 
	strcpy(str , GetMonthName2(n));
	puts(str);

    return 0;
}
