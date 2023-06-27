#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords for the program 101-crackme.
 * Return: 0 on success.
 */
int main(void)
{
	int i, s = 0, n, pw[1000];
	char p;

	srand(time(NULL));
	for (i = 0; i < 100; i++)
	{
		pw[i] = rand() % 78;
		p = pw[i] + '0';
		s = s + p;
		putchar (p);
		if ((2772 - s) - '0' < 78)
		{
			n = 2772 - s - '0';
			s = s + n;
			putchar (n + '0');
			break;
		}

	}
	return (0);
}
