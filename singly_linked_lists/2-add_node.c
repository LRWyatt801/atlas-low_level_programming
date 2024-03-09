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
	list_t *new_node;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	/* set mem for node */

	new_node = NULL;
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	/* duplicate mem for str in node */
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node->str);
		return (NULL);
	}

	/* set str len */

	for (i = 0; str[i] != '\0'; i++)
		;
	new_node->len = i;

	/* make new_node the head */
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
