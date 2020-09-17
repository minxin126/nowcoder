//大数乘法
#include<stdio.h>
#include<math.h>
#include<string.h>
#define M 10005
char s1[M], s2[M], s[M];
int a[M], b[M], c[M];
int mainnothing()
{
	int i, j, m, n, k;
	while (~scanf_s("%s %s", s1, s2))
	{
		memset(c, 0, sizeof(c));
		n = strlen(s1);
		m = strlen(s2);
		k = n + m;//保证相乘后的位数不会大于k
		printf("s1的长度=%d s2的长度=%d\n", n, m);
		/*把字符串s1和s2逆序用数字排列*/
		for (i = 0; i < n; i++)
			a[i] = s1[n - i - 1] - '0';
		for (i = 0; i < m; i++)
			b[i] = s2[m - 1 - i] - '0';
		/* 乘运算*/
		for (i = 0; i < n; i++)
			for (j = 0; j < m; j++)
				c[i + j] += a[i] * b[j];
		for (i = 0; i <= k; i++)
		{
			if (c[i] >= 10)
			{
				c[i + 1] += c[i] / 10;
				c[i] %= 10;
			}
		}
		/*去除前导0*/
		i = k;
		while (c[i] == 0) i--;
		/*判断两个非负数之积是否为0，以及逆序打印c[]*/
		if (i < 0) printf("0");
		else
		{
			for (; i >= 0; i--)
				printf("%d", c[i]);
		}
		printf("\n");
	}
	return 0;
}
//
//输出一个n*m，n和m是有效正整数，不用判断其有效性，但是n和m都特别大，大到直接相乘会溢出，请代码实现。
//09:58
//曹杰飞
//1. 如何找到未知长度的单向链表的中点，最好是一次scan。
//2. 如何找到一个无序数组中所有加合为0的数字对，要求时间复杂度为On。
//3. 如何用栈实现队列和如何用队列实现栈