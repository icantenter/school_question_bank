#include<stdio.h>

int main()
{
	int i,number,zhengshu=0,fushu=0,all=0;
	
	printf("Input 10 integers: ");
	for(i=0;i<10;i++)
	{
		scanf("%d",&number);
		if(number>0)
			zhengshu+=number;
		else if(number<0)
			fushu+=number;
		all+=number;
	}
	printf("\nzhengshu=%d,fushu=%d,all=%d",zhengshu,fushu,all);

	return 0;
}
