#include<stdio.h>

int main()
{
	float max=0,min=10,sum=0,aver=0,number,score[10];
	int i,j,Max=0;

	printf ("Please input singer's score:\n");
	for(j=0;j<10;j++)
	{
		for(i=0;i<6;i++)
		{
			scanf("%f",&number);
			if(number>max)
				max=number;
			if(number<min)
				min=number;
			sum+=number;
		}
		aver=(sum-max-min)/4;
		score[j]=aver;
		max=0;
		min=10;
		sum=0;
	}
	printf("\nscores:\n");

	for(j=0;j<10;j++)
	{
		for(i=0;i<10;i++)
		{
			if(score[i]>score[Max])
				Max=i;
		}
		printf("No.%-2d: %.2f\n",Max+1,score[Max]);
		score[Max]=0;
	}
	return 0;
}
		


	
	