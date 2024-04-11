#include "search_algos.h"

/**
 * linear_search - searchs an array for a value
 * @array: pointer to first element in an array
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: Index where value is located, or -1
*/

int linear_search(int *array, size_t size, int value)
{
	int i = 0, arr_size;
	arr_size = size;

	if (array == NULL)
		return(-1);

	for (i = 0; i < arr_size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}