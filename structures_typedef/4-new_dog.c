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
	char *namec, *ownerc;
	int i;

	dog_t *d = malloc(sizeof(dog_t));
	if (d == NULL)
		return NULL;

	namec = malloc(sizeof(name));
	if (namec == NULL)
		return(NULL);

	for (i = 0; name[i] != '\0'; i++)
	{
		namec[i] = name[i];
	}

	ownerc = malloc(sizeof(owner));
	if (ownerc == NULL)
		return(NULL);

	for (i = 0; owner[i] != '\0'; i++)
	{
		ownerc[i] = owner[i];
	}


	d->name = namec;
	d->age = age;
	d->owner = ownerc;

	return (d);
}
