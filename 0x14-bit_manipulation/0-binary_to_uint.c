#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: converted number, 0 if b NULL or b contains char other than 1&0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, j, b_cnv;

	if (b == NULL)
		return (0);
	i = 0;
	while (b[i] != '\0')
	{
		if (b[i] == '0' || b[i] == '1')
			i++;
		else
			return (0);
	}
	j = 0;
	b_cnv = 0;
	while (j < i)
	{
		b_cnv = b_cnv << 1;
		if (b[j] == '1')
			b_cnv += 1;
		j++;
	}
	return (b_cnv);
}
