#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: 1st string
 * @s2: 2nd string
 *
 * Return: pointer to the newly allocated space in memory
 * NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int len1, len2, i, j;
	char *s3;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = 0;
	while (s1[len1] != '\0')
		len1++;
	len2 = 0;
	while (s2[len2] != '\0')
		len2++;

	s3 = malloc((len1 + len2 + 1) * sizeof(char));
	if (s3 == NULL)
		return (NULL);

	i = 0;
	while (i < len1)
	{
		s3[i] = s1[i];
		i++;
	}
	j = 0;
	while (j <= len2)
	{
		s3[i] = s2[j];
		i++;
		j++;
	}
	return (s3);
}
