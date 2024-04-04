#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* dlistint_len - check code
*
* @h: head of node
* Return: length of node
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
	

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head == NULL)
	{
		*head = new;
		return (NULL);
	}


	*head = new;

	return (new);
}

