#include <stdio.h>
/* userCode(<80�ַ�): �Զ��庯��֮ԭ������ */
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

	/* userCode(<80�ַ�): ���ú����������������Ԫ�ؼ�������λ�õ����±ꡢ���±� */
	findmax(array, &max, &maxRow, &maxCol);
	printf("\nThe max is %d, row-sub is %d, col-sub is %d\n", max, maxRow, maxCol);

	return 0;
}

/* User Code Begin�������ڴ˺�����Զ��庯������ƣ��������� */
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