#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct student
{
    char name[30];
    char sex[10];
    char course[30];
    long number;
    long score;
};

int main()
{
    FILE *fp;
    char name[30];
    struct student temp;
    int counter = 0;
    printf("������Ҫ���ҳɼ���ѧ��������");
    scanf("%s", name);
    printf("\n���ҽ��Ϊ��\n");
    if ((fp = fopen("xscj.txt", "r")) == NULL)
    {
        printf("�ļ���ʧ�ܣ������ļ�����·���Ƿ���ȷ���ļ��Ƿ���ڣ�");
        exit(0);
    }
    while (fscanf(fp, "%ld%s%s%s%ld", &temp.number, temp.name, temp.sex,
               temp.course, &temp.score) == 5)
    {
        if (strcmp((temp.name), name) == 0)
        {
            counter++;
            printf("%d %ld, %-8s, %s, %-14s, %ld\n",
                   counter, temp.number, temp.name,
                   temp.sex, temp.course, temp.score);
        }
    }
    if (!counter)
    {
        printf("�ļ���û���ҵ�����Ϊ��%s����ѧ��\n", name);
    }
    return 0;
}