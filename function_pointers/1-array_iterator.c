#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function on each element of an array
 * @array: array to to iterate through
 * @size: size of array
 * @action: funtion to run
 *
 * Return: n/a
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
