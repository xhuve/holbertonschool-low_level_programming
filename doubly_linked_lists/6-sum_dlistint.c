#include <stdio.h>
#include "lists.h"

/**
* sum_dlistint - check code
*
* @head: head of node
* Return: sum of nodes
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}

