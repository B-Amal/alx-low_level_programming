#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter
 * @str: string
 *
 * Return: pointer to the new copy, NULL on fail with memory
 */
char *_strdup(char *str)
{
	char *str_copy;
	unsigned int i, len;

	if (str == NULL)
		return (NULL);
	len = 0;
	while (str[len] != '\0')
		len++;
	len++;
	str_copy = malloc(len * sizeof(*str));
	if (str_copy == NULL)
		return (NULL);
	i = 0;
	while (i <= len)
	{
		str_copy[i] = str[i];
		i++;
	}
	return (str_copy);
}
