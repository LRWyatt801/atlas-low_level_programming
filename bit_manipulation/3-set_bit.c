#include <stdio.h>
#include "main.h"

/**
 * set_bit - sets bit to 1 at index
 * @n: number
 * @index: bit to change
 *
 * Return: 1 on success, -1 on fail
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n |= 1 << index;
	return (1);
}
