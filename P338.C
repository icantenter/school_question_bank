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

    printf("请输入要计算平均成绩的课程名称：");
    scanf("%s", course);
    printf("\n计算结果为：\n");
    if ((fp = fopen("xscj.txt", "r")) == NULL)
    {
        printf("文件打开失败，请检查文件名及路径是否正确、文件是否存在！");
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
        printf("文件中没有名称为“%s”的课程\n", course);
    }
    else
    {
        float res = sum / counter;
        printf("课程“%s”有 %d 人选学，平均成绩为%.1f", course, counter, res);
    }
    
    return 0;
}




