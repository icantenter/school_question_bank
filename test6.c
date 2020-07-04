#include<stdio.h>

int main()
{
	struct Student
	{
		long int num;
		char name[20];
		char sex;
		char add[20];
	}a={250,"laoba",'M',"chaoyan"};

	struct Student *p;
	p=&a;
	printf("%ld",p->);
	printf("No.%d name=%s sex=%c address=%s",a.num,a.name,a.sex,a.add);

	return 0;
}