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

list_t *add_node(list_t **head, const char *str);
{
