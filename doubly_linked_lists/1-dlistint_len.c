#include <stdio.h>
#include "lists.h"

/**
* list_len - check code
*
* @h: head of node
* Return: length of node
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}

