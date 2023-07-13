#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: 1st string
 * @s2: 2nd string
 * @n: number of first bytes copied from s2
 *
 * Return: pointer to the new allocated memory, NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len_s1, size;
	char *s3;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len_s1 = 0;
	while (s1[len_s1] != '\0')
		len_s1++;
	size = (len_s1 + n) * sizeof(*s3);
	s3 = malloc(size + 1);
	if (s3 == NULL)
		return (NULL);
	i = 0;
	while (i < size && s1[i] != '\0')
	{
		s3[i] = s1[i];
		i++;
	}
	j = 0;
	while (i < size && s2[j] != '\0')
	{
		s3[i] = s2[j];
		j++;
		i++;
	}
	s3[i] = '\0';
	return (s3);
}
