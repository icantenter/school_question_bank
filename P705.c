#include<stdio.h>

int main()
{
	char letter,week[7][10]={{"Monday"},{"Tuesday"},{"Wednesday"},{"Thursday"},{"Friday"},{"Saturday"},{"Sunday"}};
	int i,num=0,target[2];
	
	printf("Please input the letter of someday: ");
	while(1)
	{
		if(num==0)
			letter=getchar();
		else
			num=0;
		if(letter=='Y')
			break;
		for(i=0;i<7;i++)
		{
			if(week[i][0]==letter)
			{
				target[num]=i;
				num++;
			}
		}
		if(num==1)
			printf("%s\n",week[target[0]]);	
		else if(num==2)
		{
			letter=getchar();
			if(letter=='Y')
			{
				printf("data error\n");
				break;
			}
			else if(week[target[0]][1]==letter)
				printf("%s\n",week[target[0]]);
			else if(week[target[1]][1]==letter)
				printf("%s\n",week[target[1]]);
			else
			{
				printf("data error\n");
				continue;
			}
		}
		else
			printf("data error\n");
		num=0;
	}
	return 0;
}

	
