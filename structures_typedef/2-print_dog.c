#include <stdio.h>
#include "dog.h"

/**
 * print_dog - check the code
 * @dog d: test.
 *
 * Return: Always 0.
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	d->name ? printf("Name: %s", d->name) : printf("Name: NULL");
	printf("\n");
	d->age ? printf("Age: %f", d->age) : printf("Age: NULL");
	printf("\n");
	d->owner ? printf("Owner: %s", d->owner) : printf("Owner: NULL");
	printf("\n");
}
