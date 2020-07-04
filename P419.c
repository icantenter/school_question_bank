#include<stdio.h>
#define size 100

int main()
{
	int i,j,number,a[size],min=0,flag=0,temp,SIZE;
	printf("Input: ");
	for(i=0;i<100;i++)
	{
		scanf("%d",&number);
		if(number==-888)
		{
			SIZE=i;
			break;
		}
		else 
			a[i]=number;
	}

	printf("\nResult: ");
	
	for(j=0;j<size-1;j++)
	{
		for(i=0;i<SIZE-1;i++)
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
		flag=0;
	}

	for(i=0;i<SIZE;i++)
	printf("%d ",a[i]);

	return 0;
}
	