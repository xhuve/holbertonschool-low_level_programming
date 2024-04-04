#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
* add_node_end - check code
*
* @head: head of node
* Return: addr
*/


void free_list(list_t *head)
{
	list_t *curr;

	if (head == NULL)
		return;


	while (head != NULL)
	{
		curr = head->next;
		free(head->str);
		free(head);
		head = curr;
	}
}

