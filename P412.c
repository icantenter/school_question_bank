#include<stdio.h>

int main()
{
	int i,j,length,temp,flag=0,a[10000];

	printf("Please input numbers: ");
	for(i=0;i<10000;i++)
	{
		scanf("%d",a+i);
		if(a[i]==-222)
		{
			a[i]='\0';
			break;
		}
	}

	length=i;

	for(j=0;j<length-1;j++)
	{
		for(i=0;i<length-1-j;i++)
		{
			if(a[i]>a[i+1])
			{
				temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;
				flag=1;
			}
		}
		if(flag==0)
			break;
	}
	printf("\nOutput:");
	for(i=0;i<length;i++)
	{
		if(i%6==0)
			printf("\n%-6d",a[i]);
		else 
			printf(",%-6d",a[i]);
	}

	return 0;
}




