#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* delete_dnodeint_at_index - check code
*
* @head: head of node
* @index: value of node
* Return: length of node
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int i;

	if (*head != NULL)
		tmp = *head;
	else
		return (-1);

	if (index == 0)
	{
		tmp->prev = NULL;
		*head = tmp->next;
		return (1);
	}
	printf("not 0");
	for (i = 0; i < index - 1; i++)
	{
		if (tmp->next == NULL)
			return (-1);
		tmp = tmp->next;
	}

	tmp->prev = tmp->next;
	tmp->next = tmp->next->next;

	return (1);
}

