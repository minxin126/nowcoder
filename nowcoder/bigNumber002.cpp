#include "stdio.h"

#include "stdlib.h"

int mainbig002(int argc, char* argv[])

{
	long i, n, p;

	printf("n=?");

	scanf_s("%d", &n);

	p = 1;

	for (i = 1; i <= n; i++)

		p *= i;

	printf("%d!=%d/n", n, p);

	return 0;
}