#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/*
* add_node_end - that adds a new node at the end of a list
* @head: double pointer to the list_t list
 * @str: new string to add in the node
 *
 * Return: the address of the new element, or NULL if it fails
 */

list_t	*add_node_end(list_t **head, const char *str)
{
	list_t	*new;
	list_t	*tmp;
	size_t	len;

	len = 0;
	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	while (str[len])
		len++;
	new->str = strdup(str);
	new->len = len;
	new->next = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		tmp = *head;
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new;
	}
	return (*head);
}
