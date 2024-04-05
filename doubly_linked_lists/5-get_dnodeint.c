#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* get_dnodeint_at_index - check code
*
* @head: head of node
* @index: value of node
* Return: length of node
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *curr;

	curr = head;
	while (index-- != 0)
		curr = curr->next;

	return (curr);
}

