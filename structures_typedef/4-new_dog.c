#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

char *_strdup(char *str);

/**
 * new_dog - creats a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owners name
 *
 * Return: NULL if fail
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_d;

	new_d = malloc(sizeof(dog_t));
	if (new_d == NULL)
		return (NULL);

	new_d->name = _strdup(name);
	if (!new_d->name)
	{
		free(new_d);
		return (NULL);
	}
	new_d->age = age;
	new_d->owner = -strdup(owner);
	if (!new_d->owner)
	{
		free(new_d->name);
		free(new_d);
		return (NULL);
	}

	return (new_d);
}

/**
 * _strdup - returns a copy of the given string in a dynamic pointer
 * @str: string to be copied
 *
 * Return: pointer to new string or NULL if fail
 */

char *_strdup(char *str)
{
	char *strcp;
	size_t len = 0;
	int i;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	strcp = malloc(sizeof(char) * (len + 1));
	if (strcp == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		strcp[i] = str[i];
	strcp[i] = '\0';

	return (strcp);
}
