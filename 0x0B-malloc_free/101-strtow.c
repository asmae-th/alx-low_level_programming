#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * strtow - splits a string into words.
 * @str: The string to splits
 *
 * Return: pointer to an array of strings (words) or NULL if str == NULL or str == ""
 */



char **strtow(char *str)
{
	char **ptr;
	int i;
	int s;

	i = 0;
	s = 0;
	if (str == NULL || str == "")
		return (NULL);
	while(str[i])
	{
		if(str[i] != ' ' && str[i] != '\t')
			s++;
		i++;
	}
	ptr = (char **)malloc((s + 1) * sizeof(char*));
	if (!ptr)
		return (NULL);
	i = 0;
	while (str)
	{
		
	}
}





/**
 * print_tab - Prints an array of string
 * @tab: The array to print
 *
 * Return: nothing
 */
void print_tab(char **tab)
{
	int i;

	for (i = 0; tab[i] != NULL; ++i)
	{
		printf("%s\n", tab[i]);
	}
}

/**
 * main - check the code for ALX School students.
 *
 * Return: 1 if an error occurred, 0 otherwise
 */
int main(void)
{
	char **tab;

	tab = strtow("      ALX School         #cisfun      ");
	if (tab == NULL)
	{
		printf("Failed\n");
		return (1);
	}
	print_tab(tab);
	return (0);
}