#include <stdio.h>
#include "lists.h"

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str)
			printf("[%d] %s ", h->len, h->str);
		else
			printf("[0] (nil) ");
		count++;
		h = h->next;
	}

	return (count);
}

