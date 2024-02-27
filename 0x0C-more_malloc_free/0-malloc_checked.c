#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - function that allocates memory using malloc
 *
 * Return: Returns a pointer to the allocated memory .
 */
void	*malloc_checked(unsigned int b)
{
	void	*ptr;

	ptr = malloc(b);
	if (!ptr)
		exit(98);
	return (ptr);
}
