#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
* add_node - check code
*
* @head: head of node
* @str: str of node
* Return: addr
*/


list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int i = 0;
	list_t *new;
	list_t *curr;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)

	new->str = strdup(str);
	new->len = i;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}

	curr = *head;

	while (curr->next != NULL)
		curr = curr->next;

	curr->next = new;

	return (new);
}

