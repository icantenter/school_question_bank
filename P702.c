#include<stdio.h>

int main()
{
	int month,day;

	printf("please input the month number: ");
	scanf("%d",&month);
	if(month>12 || month<1)
		printf("\nInvalid month input !\n");
	else
	{
		if(month==2)
			day=28;
		else if((month<7 && month%2==0) || (month>8 && month%2!=0))
			day=30;
		else 
			day=31;
		printf("\n2003.%d has %d days\n",month,day);
	}

	return 0;
}
