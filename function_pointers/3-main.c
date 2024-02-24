#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - performs basic operations via inputs
 * @argc: count of input arguments
 * @argv: input arguments
 *
 * Return: 0 on success, 98, 99, and 100 on failure
 */

int main(int argc, char **argv)
{
	int a, b, ans;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (get_op_func(argv[2]) == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*argv[2] == '/' || *argv[2] == '%') && (*argv[3] == '0'))
	{
		printf("Error\n");
		exit(100);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	f = get_op_func(argv[2]);
	ans = f(a, b);
	printf("%d\n", ans);
	return (0);
}
