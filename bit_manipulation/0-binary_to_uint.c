#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: string binary number
 *
 * Return: converted number, 0 if not in binary, 1 if b = NULL
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int bi = 0;

	if (!b)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		bi = 2 * bi + (b[i] - '0');
	}
	return (bi);
}
