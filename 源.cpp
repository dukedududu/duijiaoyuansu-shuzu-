#include<stdio.h>
int main()
{
	/*��д������һ3��3�е��������������ɼ������룩�����㲢������������Խ���Ԫ��֮�͡�*/
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