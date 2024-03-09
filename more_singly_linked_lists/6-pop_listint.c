#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of list and returns the nodes data
 * @head: node
 *
 * Return: Nodes data, if empty then 0
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int data;

	if (!head || !*head)
		return (0);

	data = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;

	return (data);
}
