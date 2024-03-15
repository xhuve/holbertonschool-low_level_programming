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
	int len1 = 0, len2 = 0;
	char *namec, *ownerc;
	dog_t *d = malloc(sizeof(dog_t));

	if (d == NULL)
		return (NULL);

	while (name[len1] != '\0')
		len1++;
	namec = malloc(len1 + 1);
	while (owner[len2] != '\0')
		len2++;
	ownerc = malloc(len2 + 1);

	if (ownerc == NULL || namec == NULL)
	{
		free(namec);
		free(ownerc);
		return (NULL);
	}

	namec[len1] = '\0';
	while (len1-- > 0)
		namec[len1] = name[len1];

	ownerc[len2] = '\0';
	while (len2-- > 0)
		ownerc[len2] = owner[len2];

	d->name = namec;
	d->age = age;
	d->owner = ownerc;
	return (d);
}


