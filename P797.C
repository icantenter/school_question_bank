#include <stdio.h>
/* userCode(<80字符): 自定义函数之原型声明 */
void findmax(int array[][9], int *max, int *maxRow, int *maxCol);

int main(void)
{
	int array[5][9], i, j, max, maxRow, maxCol;

	printf("Input matrix:\n");
	for (i=0; i<5; i++)
	{
		for (j=0; j<9; j++)
		{
			scanf("%d", &array[i][j]);
		}
	}

	/* userCode(<80字符): 调用函数查找数组中最大元素及其所在位置的行下标、列下标 */
	findmax(array, &max, &maxRow, &maxCol);
	printf("\nThe max is %d, row-sub is %d, col-sub is %d\n", max, maxRow, maxCol);

	return 0;
}

/* User Code Begin：考生在此后完成自定义函数的设计，行数不限 */
void findmax(int array[][9], int *max, int *maxRow, int *maxCol)
{
	int i, j;

	*max = array[0][0];
	*maxRow = 0;
	*maxCol = 0;
	for (i = 0; i < 5; i++)
	{
		for ( j = 0; j < 9; j++)
		{
			if (*max < array[i][j])
			{
				*max = array[i][j];
				*maxRow = i;
				*maxCol = j;
			}
			
		}	
	}
}