#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at index
 * @head: beginning of list
 * @index: node to be deleted
 *
 * Return: 1 on success, -1 on failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *tmp = *head;
	dlistint_t *del = NULL;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		(*head)->prev = NULL;
		free(tmp);
		return (1);
	}

	while (tmp && i < index)
	{
		if (i == index - 1 && tmp->next != NULL)
		{
			del = tmp->next;
			tmp->next = del->next;
                        del->next->prev = tmp;
			free(del);
			return (1);
		}
		else if (i == index - 1 && tmp->next == NULL)
		{
			del = tmp->next;
			tmp->next = NULL;
			free(del);
			return (1);
		}
		else
			tmp = tmp->next;
		i++;
	}
	return (-1);
}
