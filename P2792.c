#include <stdio.h>
#include <string.h>
typedef struct
{
    long int num;
    char name[30];
    char sex[30];
    char course[30];
    int score;

} STUENT;
int main()
{
    char course[30];
    STUENT student;
    int num = 0;
    float aver = 0;
    FILE *fp;
    printf("请输入要计算平均成绩的课程名称：");
    gets(course);

    if ((fp = fopen("xscj.txt", "r")) == NULL)
    {
        printf("\n计算结果为：\n");
        printf("文件打开失败，请检查文件名及路径是否正确、文件是否存在！");
        return 0;
    }
    while (fscanf(fp, "%ld%s%s%s%d", &student.num, student.name,
                  student.sex, student.course, &student.score) != EOF)
    {
        if (strcmp(student.course, course) == 0)
        {
            num++;
            aver += student.score;
        }
    }
    printf("\n计算结果为：\n");
    if (!num)
    {
        printf("文件中没有名称为“%s”的课程\n", course);
    }
    else
    {
        printf("课程“%s”有 %d 人选学，平均成绩为%.1lf", course, num, (double)aver / num);
    }

    return 0;
}
