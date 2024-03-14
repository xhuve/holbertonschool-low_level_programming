#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - check the code
 * @name: test.
 * @age: number.
 * @owner: owner/
 *
 * Return: Always 0.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	char *optr = malloc(sizeof(owner));
	char *nptr = malloc(sizeof(name));
	
	dog_t *d = malloc(sizeof(dog_t));
	if (d == NULL)
		return NULL;

	if(nptr == NULL)
		return NULL;

	if(optr == NULL)
		return NULL;

	d->name = name;
	d->age = age;
	d->owner = owner;

	return (d);
}
