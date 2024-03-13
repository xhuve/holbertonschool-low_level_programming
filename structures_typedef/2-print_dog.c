#include <stdio.h>
#include "dog.h"

/**
 * print_dog - check the code
 * @d: test.
 *
 * Return: Always 0.
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	d->name ? printf("Name: %s", d->name) : printf("Name: (nil)");
	printf("\n");
	d->age > 0 ? printf("Age: %f", d->age) : printf("Age: (nil)");
	printf("\n");
	d->owner ? printf("Owner: %s", d->owner) : printf("Owner: (nil)");
	printf("\n");
}
