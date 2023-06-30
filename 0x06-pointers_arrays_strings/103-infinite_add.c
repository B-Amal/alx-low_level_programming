#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: string to be reversed.
 */
void rev_string(char *s)
{
	int i, j = 0;
	char c = s[0];

	while (s[j] != '\0')
		j++;
	for (i = 0; i < j; i++)
	{
		j--;
		c = s[i];
		s[i] = s[j];
		s[j] = c;
	}
}

/**
 * infinite_add - adds two numbers
 * @n1: 1st number
 * @n2: 2nd number
 * @r: buffer
 * @size_r: buffer size
 * Return: result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, j = 0, o = 0, d = 0, v1 = 0, v2 = 0, t = 0;

	while (*(n1 + i) != '\0')
		i++;
	i--;
	while (*(n2 + j) != '\0')
		j++;
	j--;
	if (i >= size_r || j >= size_r)
		return (0);
	while (i >= 0 || j >= 0 || o == 1)
	{
		if (i < 0)
			v1 = 0;
		else
			v1 = *(n1 + i) - '0';
		if (j < 0)
			v2 = 0;
		else
			v2 = *(n2 + j) - '0';
		t = v1 + v2 + o;
		if (t >= 10)
			o = 1;
		else
			o = 0;
		if (d >= (size_r - 1))
			return (0);
		*(r + d) = (t % 10) + '0';
		d++;
		i--;
		j--;
	}
	if (d == size_r)
		return (0);
	*(r + d) = '\0';
	rev_string(r);
	return (r);
}
