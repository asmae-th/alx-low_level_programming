#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * argstostr - concatenates all the arguments of your program.
 *
 * Return:  pointer to a new string, or NULL if it fails
 */
char	*argstostr(int ac, char **av)
{
	char	*ptr;
	int		i;
	int		s;
	int		j;
	int		k;

	i = 1;
	s = 0;
	k = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	while (i < ac)
	{
		s += strlen(av[i]);
		i++;
	}
	ptr = (char *)malloc((s + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i] != NULL && av[i][j])
		{
			ptr[k] = av[i][j];
			k++;
			j++;
		}
		ptr[k] = '\n';
		k++;
		i++;
	}
	ptr[k] = '\0';
	return (ptr);
}
