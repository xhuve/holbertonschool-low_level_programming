#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* free_dlistint - check code
*
* @head: head of node
* Return: length of node
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *curr;

	while (head != NULL)
	{
		curr = head->next;
		free(head);
		head = curr;
	}

}

