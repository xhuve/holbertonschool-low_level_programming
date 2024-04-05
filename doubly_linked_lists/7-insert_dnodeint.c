#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* insert_dnodeint_at_index - check code
*
* @h: head of node
* @idx: value of node
* @n: value of node
* Return: length of node
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	dlistint_t *tmp;
	unsigned int i;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	tmp = *h;
	new->n = n;
	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	for (i = 0; i < idx - 1; i++)
	{
		if (tmp->next == NULL)
			return (NULL);
		tmp = tmp->next;
	}

	new->prev = tmp;
	new->next = tmp->next;
	tmp->next = new;
	tmp->next->prev = new;

	return (new);
}

