#include<stdio.h>
void swap(int *x,int *y);

int main()
{
	int i,j,number,num[10];

	printf("Please input 10 number:\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&number);
		num[i]=number;
	}
	
	for(j=0;j<9;j++)
	{
		for(i=0;i<9;i++)
		{
			if(num[i]>num[i+1])
				swap(num+i,num+i+1);
		}
	}

	for(i=0;i<10;i++)
		printf("%5d",num[i]);

	return 0;
}

void swap(int *x,int *y)
{
	int temp;

	temp=*x;
	*x=*y;
	*y=temp;
}