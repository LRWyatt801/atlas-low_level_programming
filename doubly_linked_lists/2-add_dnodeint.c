#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - adds node to beginning of list
 * @head: beginning of list
 * @n: node to add
 *
 * Return: address of new element, or NULL on failure
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
        newNode->prev = NULL;
	newNode->next = *head;
	*head = newNode;

	return (*head);
}
