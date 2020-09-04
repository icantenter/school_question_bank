#include<stdio.h>
#include<stdlib.h>

#define N 20

/* User Code Begin(Limit: lines<=5, lineLen<=60, �������ڱ��к����Ӵ��롢��5�С��г�<=60�ַ��������ǽڵ�����Link����) */
struct Link
{
	int data;
	struct Link *next;
};





/* User Code End(�������Ӵ������) */

void dispLink(struct Link *Head);  /* ���ݸ���������Head����ʾ���������е����ݣ�ͬʱ�������ʹ�õ������Ƿ�պ÷��� */
/* User Code Begin(Limit: lines<=2, lineLen<=60, �������ڱ��к����Ӵ��롢��2�С��г�<=60�ַ����������û��Զ��庯����ԭ������) */
struct Link *creatLink();
struct Link *reverseLink(struct Link *head);

/* User Code End(�������Ӵ������) */

int main(void)
{
	struct Link *Head;

	Head = creatLink();  /* ���������� */
	printf("\nbefore:");
	dispLink(Head);

	Head = reverseLink(Head);  /* ��ת���� */
	printf("\nafter:");
	dispLink(Head);

	return 0;
}

void dispLink(struct Link *Head)
{
	static struct Link *oLink[2][N];
	static int callNumber = -1;
	int i = 0;

	callNumber++;
	if (callNumber > 1)
	{
		printf("Error, call invalid!\n");
		return ;
	}
		
	while (Head != NULL)
	{
		oLink[callNumber][i] = Head;
		i++;
		printf("%d ", Head->data);
		Head = Head->next;
	}
	printf("\n");

	if (1 == callNumber)
	{
		for (i=0; i<N; i++)
		{
			if (oLink[0][i] != oLink[1][N-1-i])
			{
				printf("Error, Link not reverse!\n");
				return ;
			}
		}
	}
}

/* User Code Begin(�����ڴ˺���������Ҫ��ɳ�����������֣���������) */
struct Link *creatLink()
{
	struct Link *prev, *next;
	int i;
	struct Link *head = (struct Link *)malloc(sizeof(struct Link));

	head ->data = 0;
	prev = head;
	for (i = 1; i < N; i++)
	{
		next = (struct Link *)malloc(sizeof(struct Link));
		next->data = i;
		prev->next = next;
		prev = next;
	}
	prev->next = NULL;
	return head;
}
struct Link *reverseLink(struct Link *head)
{
	struct Link *prev, *next, *temp;
	prev = head;
	next = head->next;
	head->next = NULL;
	while (next)
	{
		temp = next->next;
		next->next = prev;
		prev = next;
		next = temp;
	}
	
	return prev;
}