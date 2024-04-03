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



list_t *add_node(list_t **head, const char *str)
{
	unsigned int i;
	list_t *new = malloc(sizeof(list_t));

	for (i = 0; str[i] != '\0'; i++);

	new->str = strdup(str);
	new->len = i;
	new->next = *head;
	*head = new;

	return (*head);
}

