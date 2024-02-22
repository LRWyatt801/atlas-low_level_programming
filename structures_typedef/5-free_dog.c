#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free dog in memory
 * @d: dog to be freed
 *
 * Return: n/a
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
