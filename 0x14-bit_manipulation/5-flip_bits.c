#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int len_n = 0, len_m = 0, temp_n = n, temp_m = m, flip = 0;

	while (temp_n > 0)
	{
		temp_n = temp_n >> 1;
		len_n++;
	}
	while (temp_m > 0)
	{
		temp_m = temp_m >> 1;
		len_m++;
	}
	if (len_m > len_n)
	{
		while (len_m > 0)
		{
			if ((m & 1) != (n & 1))
				flip += 1;
			m = m >> 1;
			n = n >> 1;
			len_m--;
		}
	}
	else
	{
		while (len_n > 0)
		{
			if ((m & 1) != (n & 1))
				flip += 1;
			m = m >> 1;
			n = n >> 1;
			len_n--;
		}
	}
	return (flip);

}
