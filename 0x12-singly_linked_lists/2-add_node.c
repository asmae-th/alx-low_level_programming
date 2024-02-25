#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/*
* add_node - that adds a new node at the beginning of a list
* @head : pointer to pointer
* @str : string of the list
* Return: the address of the new element.
*/

list_t	*add_node(list_t **head, const char *str)
{
	list_t	*new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;
	*head = new;
	return (*head);
}
