#include <stdio.h>

/* userCode(<50字符): 自定义函数之原型声明 */
int plus(int num[][3]);

int main(void)
{
	int num[3][3], i, j, sum;

	printf("Please input the 3x3 Matrix:\n");
	for (i=0; i<3; i++)
	{
		for (j=0; j<3; j++)
		{
			scanf("%d", &num[i][j]);
		}
	}

	sum = plus(num);  /* userCode(<50字符): 调用函数计算矩阵所有元素之和 */
	printf("\nsum=%d\n", sum);
	return 0;
}

/* User Code Begin：考生在此后完成自定义函数的设计，行数不限 */
int plus(int num[][3])
{
	int i, j;
	int sum = 0;

	for ( i = 0; i < 3; i++)
	{
		for ( j = 0; j < 3; j++)
		{
			sum += num[i][j];
		}
		
	}
	return sum;
}


