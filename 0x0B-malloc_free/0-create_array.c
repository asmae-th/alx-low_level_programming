#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *  * create_array - itializes an array
 *   * @size: integer argument
 *    * @c: char
 *     * Return: array of chars
 *      */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
		return (NULL);
	array = (char *) malloc(size * (sizeof(char)));
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
