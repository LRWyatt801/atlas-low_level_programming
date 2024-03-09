#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds node to beginning of list
 * @head: beginning of list
 * @str: name of element
 *
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while(str[len])
		len++;

	/* set mem for node */
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	/* duplicate mem for str in node */
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}


	new->len = len;
	new->next = *head;
	*head = new;

	return (*head);
}
