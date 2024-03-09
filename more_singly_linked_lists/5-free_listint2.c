#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint - frees list
 * @head: beginning of list
 *
 * Return: n/a
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	while (*head != NULL)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}
	*head = NULL;
}
