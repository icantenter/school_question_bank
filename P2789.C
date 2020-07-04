#include <stdio.h>

/* User Code Begin(�������ڱ��к����Ӵ��룬����ȫ�ֱ����Ķ��塢����ԭ�������ȣ���������) */
typedef struct
{
	int num;
	char name[20];
	float score1, score2, score3, score4;
	float aver;

}STUDENT;
STUDENT myClass[5];
int findmax();


/* User Code End(�������Ӵ������) */

int main(void)
{
	int high;  /* high��¼ƽ������ߵ�ѧ������ţ�����ʹ�òο�����Ĵ��� */

	/* User Code Begin(�������ڱ��к����Ӵ��룬��������) */
	int i;
	printf("Please input students  info:Num Name score1 score2 score3 score4\n");
	for (i = 0; i < 5; i++)
	{
		scanf("%d%s%f%f%f%f", &myClass[i].num, myClass[i].name, 
			&myClass[i].score1, &myClass[i].score2, &myClass[i].score3, &myClass[i].score4);
	}
	high = findmax();
	/* User Code End(�������Ӵ������) */

	printf("\nThe Highest is %s(%d)\nscore1=%.2f  score2=%.2f  score3=%.2f  score4=%.2f  aver=%.2f\n",
		myClass[high].name, myClass[high].num,
		myClass[high].score1, myClass[high].score2, myClass[high].score3, myClass[high].score4, myClass[high].aver);
	
	return 0;
}

/* User Code Begin(�����ڴ˺���������Ҫ��ɳ�����������֣���������) */
int findmax()
{
	int i;
	int max = 0;
	for (i = 0;i < 5;i++)
	{
		myClass[i].aver = (myClass[i].score1 + myClass[i].score2 + myClass[i].score3 + myClass[i].score4) / 4.0f;
		if (myClass[i].aver > myClass[max].aver)
		{
			max = i;
		}
		
	}
	return max;
}

