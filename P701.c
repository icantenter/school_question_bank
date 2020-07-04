#include<stdio.h>

int main()
{
	int i,j=0,number,flag=0,num[10];

	printf("please input 10 numbers: ");
	for(i=0;i<10;)
	{
		scanf("%d",&number);
		if(i>0 && number<num[i-1])
			continue;
		else
		{
			num[i]=number;
			i++;
		}
	}

	for(i=0;i<10;i++)
	{
		if(i==9)
			printf("%5d\n",num[i]);
		else
			printf("%5d,",num[i]);
	}

	printf("input the num to look for: ");
	scanf("%d",&number);
	for(i=0;i<10;i++)
	{
		if(number==num[i])
		{
			printf("%d\n",number);
			printf("\nthe position of %d is %d\n",number,i+1);
			flag=1;
			break;
		}
	}
	if(flag==0)
		printf("\nNot Find!\n");

	return 0;
}
