#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_list - print the code
 *
 * Return:  the number of nodes.
 */

size_t	print_list(const list_t *h)
{
	int	i;

	i = 0;
	while (h != NULL)
	{
		if (h->str != NULL)
			printf("[%lu] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		h = h->next;
		i++;
	}
	return (i);
}