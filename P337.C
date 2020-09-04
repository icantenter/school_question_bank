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
    printf("请输入要查找成绩的学生姓名：");
    scanf("%s", name);
    printf("\n查找结果为：\n");
    if ((fp = fopen("xscj.txt", "r")) == NULL)
    {
        printf("文件打开失败，请检查文件名及路径是否正确、文件是否存在！");
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
        printf("文件中没有找到姓名为“%s”的学生\n", name);
    }
    return 0;
}