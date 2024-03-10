#include <stdio.h>
#include "main.h"

/**
 * clear_bit - clears bit at index
 * @n: number
 * @index: bit to clear
 *
 * Return: 1 on success, -1 on error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n &= ~(1 << index);
	return (1);
}
