#include <stdio.h>
#include "lists.h"

/**
* print_list - check code
*
* @h: head of node
* Return: length of node
*/
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}

