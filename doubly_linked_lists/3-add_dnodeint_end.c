#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* add_dnodeint_end - check code
*
* @head: head of node
* @n: value of node
* Return: length of node
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *tmp = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (*head);
	}
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}

	new->prev = tmp;
	tmp->next = new;

	return (new);
}

