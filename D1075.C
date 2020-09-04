#include <stdlib.h>
#include <stdio.h>

#define LEN sizeof(struct student)

struct student
{
	int num;
	char name[20];
	struct student *next;
};

struct student *creat(void);
void display(struct student *head);

int main(void)
{
	struct student *head;

	head = creat();
	display(head);

	return 0;
}

struct student *creat(void)
{
	struct student *p1, *p2, *head=NULL;

	p1 = p2 = (struct student *)malloc(LEN);
	printf("请输入学号及姓名(均输入为0时表示停止)：\n");
	scanf("%d %s", &p1->num, p1->name);
	while (p1->num)
	{
		if (NULL == head)
		{
			head = p1;
		}
		else
		{
			/*********Found************/
			p2->next = p1;
		}
		/*********Found************/
		p2 = p1;

		p1 = (struct student *)malloc(LEN);
		scanf("%d %s", &p1->num, p1->name);
	}

	if (head != NULL)
	{
		p2->next = NULL;
	}
	/*********Found************/
	return head;
}

void display(struct student *head)
{
	struct student *p1;

	p1 = head;
	while (p1 != NULL)
	{
		printf("%d, %s\n", p1->num, p1->name);
		p1 = p1->next;
	}
}
