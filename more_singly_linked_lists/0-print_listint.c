#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints a singly listint
 * @h: head of list
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
