#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at index
 * @head: beginning of list
 * @index: node to be deleted
 *
 * Return: 1 on success, -1 on failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *tmp = *head;
	listint_t *del = NULL;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	while (tmp && i < index)
	{
		if (i == index - 1)
		{
			del = tmp->next;
			tmp->next = del->next;
			free(del);
			return (1);
		}
		else
			tmp = tmp->next;
		i++;
	}
	return (-1);
}
