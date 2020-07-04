#include<stdio.h>
#include<string.h>

int main()
{
	char *p1,*p2,s1[128],s2[128],s3[128];
	int i=0,j=0,p=0,l1,l2,l3,flag=1;

	printf("Please input string1:");
	gets(s1);
	printf("Please input string2:");
	gets(s2);
	l1=strlen(s1);
	l2=strlen(s2);
	if(l1>l2)
	{
		p1=s1;
		p2=s2;
	}
	else
	{
		p1=s2;
		p2=s1;
	}

	l3=strlen(p2);
	while(l3 >p)
	{
		if(flag==1)
		{
			s3[j]=s1[i];
			i++;
			j++;
			flag=2;
		}
		else if(flag==2)
		{
			s3[j]=s2[p];
			p++;
			j++;
			flag=1;
		}
	}

	for(i=l3;p1[i];i++)
	{
		s3[j]=p1[i];
		j++;
	}

	s3[j]='\0';
	printf("\nstring1:%s\n",s3);

	return 0;
}