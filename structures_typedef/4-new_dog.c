#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
#include <string.h>

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
	char *namec = malloc(strlen(name) + 1);
	char *ownerc = malloc(strlen(owner) + 1);
	dog_t *d = malloc(sizeof(dog_t));
	
	if (d == NULL || namec == NULL || ownerc == NULL)
	{
		free(namec);
		free(ownerc);
		free(d);
		return (NULL);
	}
	strcpy(namec, name);
	strcpy(ownerc, owner);

	d->name = namec;
	d->age = age;
	d->owner = ownerc;

	return (d);
}
