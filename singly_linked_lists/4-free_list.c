#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - frees list
 * @head: beginning of list
 *
 * Return: n/a
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
}
