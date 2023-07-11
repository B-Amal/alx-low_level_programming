#include "main.h"
#include <stdlib.h>
/**
 * count_words - counts the number of words in a string
 * @s: string
 *
 * Return: count of words
 */
int count_words(char *s)
{
	int i, c = 0;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == ' ')
		{
			if (s[i + 1] != ' ' && s[i + 1] != '\0')
				c++;
		}
		else if (i == 0)
			c++;
	}
	c++;
	return (c);
}

/**
 * strtow - splits a string into words
 * @str: string
 *
 * Return: pointer to an array of string, NULL on failure
 */
char **strtow(char *str)
{
	int i, j, k, l, c = 0, wc = 0;
	char **cstr;

	if (str == NULL || *str == '\0')
		return (NULL);
	c = count_words(str);
	if (c == 1)
		return (NULL);
	cstr = (char **)malloc(c * sizeof(char *));
	if (cstr == NULL)
		return (NULL);
	cstr[c - 1] = NULL;
	i = 0;
	while (str[i])
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			for (j = 1; str[i + j] != ' ' && str[i + j]; j++)
				;
			j++;
			cstr[wc] = (char *)malloc(j * sizeof(char));
			j--;
			if (cstr[wc] == NULL)
			{
				for (k = 0; k < wc; k++)
					free(cstr[k]);
				free(cstr[c - 1]);
				free(cstr);
				return (NULL);
			}
			for (l = 0; l < j; l++)
				cstr[wc][l] = str[i + l];
			cstr[wc][l] = '\0';
			wc++;
			i += j;
		}
		else
			i++;
	}
	return (cstr);
}
