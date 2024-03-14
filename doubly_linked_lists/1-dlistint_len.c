#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * dlistint_len - lists the number of elements in a list
 * @h: head of list
 *
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}

