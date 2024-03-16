#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts node at index
 * @head: beginning of list
 * @idx: location of where to insert node
 * @n: node data
 *
 * Return: address of new node, or NULL on fail
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *newNode, *tmp = *h;

	newNode = malloc(sizeof(dlistint_t));
	if (!newNode || !h)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (idx == 0)
	{
		newNode->next = *h;
		*h = newNode;
		return (*h);
	}

	while (tmp && i < idx)
	{
		if (i == idx - 1)
		{
                        tmp->next->prev = newNode;
			newNode->next = tmp->next;
                        newNode->prev = tmp;
			tmp->next = newNode;
			return (newNode);
		}
		else
			tmp = tmp->next;
		i++;
	}
	return (NULL);
}
