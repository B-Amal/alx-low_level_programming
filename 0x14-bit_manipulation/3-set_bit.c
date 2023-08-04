#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: number
 * @index: index
 *
 * Return: 1 on success, -1 on failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int pre_n, n_rev, i, num;

	pre_n = *n;
	if (index > 63)
		return (-1);
	i = 0;
	n_rev = 0;
	while (i < 63)
	{
		n_rev = n_rev << 1;
		if (i == index)
			n_rev += 1;
		else
			n_rev += pre_n & 1;
		i++;
		pre_n = pre_n >> 1;
	}
	num = 0;
	while (i > 0)
	{
		num = num << 1;
		num += n_rev & 1;
		n_rev = n_rev >> 1;
		i--;
	}
	*n = num;
	return (1);
}
