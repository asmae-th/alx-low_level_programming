#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *  * str_concat - str function
 *   * @str: str
 *    *
 *     * Return: NULL if str is NULL or insufficient memory. Otherwise pointer
 *
 */
char	*str_concat(char *s1, char *s2)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = 0;
	str = (char *)malloc((strlen(s1) + strlen(s2) + 1) * sizeof(char));
	if (!str)
		return (NULL);
	if (!s1 && !s2)
		return ("");
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	str[i] = '\0';
	return (str);
}
