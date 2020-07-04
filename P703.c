#include<stdio.h>

int main()
{
	int profit;
	double salary;
	
	printf("Input  profit: ");
	scanf("%d",&profit);
	if(profit<=1000)
		salary=500;
	else if(profit/1000<=2)
		salary=500+profit*0.1;
	else if(profit/1000<=5)
		salary=500+profit*0.15;
	else if(profit/1000<=10)
		salary=500+profit*0.2;
	else
		salary=500+profit*0.25;
	
	printf("\nsalary=%.2lf\n",salary);
	
	return 0;
}