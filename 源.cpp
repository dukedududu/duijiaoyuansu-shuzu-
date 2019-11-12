#include<stdio.h>
int main()
{
	/*编写程序，有一3行3列的整数矩阵（数据由键盘输入），计算并输出矩阵中主对角线元素之和。*/
	int a[3][3];
	int i, j, t;
	t = 0;
	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
			scanf_s("%d", &a[i][j]);
	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
			if (i == j)
			{
				t +=a[i][j];
			}
	printf("%d", t);
	return 0;
}