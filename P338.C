#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct student
{
    char name[30];
    char sex[10];
    char course[30];
    long number;
    float score;
};

int main()
{
    FILE *fp;
    char course[30];
    struct student temp;
    int counter = 0;
    float sum = 0;

    printf("������Ҫ����ƽ���ɼ��Ŀγ����ƣ�");
    scanf("%s", course);
    printf("\n������Ϊ��\n");
    if ((fp = fopen("xscj.txt", "r")) == NULL)
    {
        printf("�ļ���ʧ�ܣ������ļ�����·���Ƿ���ȷ���ļ��Ƿ���ڣ�");
        exit(0);
    }
    while (fscanf(fp, "%ld%s%s%s%f", &temp.number, temp.name, temp.sex,
            temp.course, &temp.score) == 5)
    {
        if (strcmp(temp.course, course) == 0)
        {
            counter++;
            sum += temp.score;
        }
    }
    if (!counter)
    {
        printf("�ļ���û������Ϊ��%s���Ŀγ�\n", course);
    }
    else
    {
        float res = sum / counter;
        printf("�γ̡�%s���� %d ��ѡѧ��ƽ���ɼ�Ϊ%.1f", course, counter, res);
    }
    
    return 0;
}



