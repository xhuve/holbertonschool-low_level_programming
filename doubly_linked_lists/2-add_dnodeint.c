#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* add_dnodeint - check code
*
* @head: head of node
* @n: value of node
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
	if (*head == NULL)
	{
		new->next = NULL;
		*head = new;
		return (*head);
	}
	else
	{
		(*head)->prev = new;
	}
	new->next = *head;

	*head = new;

	return (new);
}

