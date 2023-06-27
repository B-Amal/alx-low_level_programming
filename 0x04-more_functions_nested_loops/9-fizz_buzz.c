#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100 with replacing.
 *
 * Return: 0 on success.
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
			printf("FizzBuzz");
		else if (i % 5 == 0)
			printf("Buzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else
			printf("%d", i);

		if (i == 100)
			printf("\n");
		else
			printf(" ");
	}

	return (0);
}