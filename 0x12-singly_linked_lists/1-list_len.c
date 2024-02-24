#include <stdio.h>
#include "lists.h"
/**
 * list_len - calcul the number of elements in a linked 
 * @h : pointer to the list_t list to print
 *
 * Return:   returns the number of elements in a linked list
 */
size_t	list_len(const list_t *h)
{
	size_t	i;

	i = 0;
	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
