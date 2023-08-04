#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: number
 * @index: index
 *
 * Return: the value of the bit at index index, -1 on error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i;

	i = 0;
	if (index > 63)
		return (-1);
	while (n > 0)
	{
		if (i == index)
			return (n & 1);
		n = n >> 1;
		i++;
	}
	if (i < index)
		return (0);
	return (-1);
}
