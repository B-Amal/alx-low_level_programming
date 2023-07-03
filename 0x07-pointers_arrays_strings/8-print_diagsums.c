#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints sum of 2 diagonals of square matrix of integers
 * @a: matrix
 * @size: integer
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, s1 = 0, s2 = 0;

	for (i = 0; i < size; i++)
		s1 += a[i * size + i];
	for (i = size - 1; i >= 0; i--)
		s2 += a[i * size + (size - i - 1)];
	printf("%d, %d\n", s1, s2);
}
