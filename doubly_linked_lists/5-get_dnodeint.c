#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - return nth node of linked list
 * @head: head of list
 * @index: node to return
 *
 * Return: nth node of list, if node does not exist return NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int i;

	tmp = head;
	for (i = 0; i < index; i++)
	{
		if (tmp->next == NULL && i < index)
			return (NULL);
		tmp = tmp->next;
	}

	return (tmp);
}
