#ifndef _DOG_H
#define _DOG_H

/**
 * struct dog - contains info for a dog and owner
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner
 */


typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

/* prototypes */

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dot_t *d);

#endif
