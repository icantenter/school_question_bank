#include<stdio.h>
#include<math.h>

int main()
{
	int j;
	double temp;

	for(j=0;j<=3;j++)
	{
		temp= pow(10,j);
		j=temp;
		printf("%d ",j);
	}

	return 0;
}
