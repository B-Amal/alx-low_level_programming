#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: file to read from
 * @letters: number of letters it should read and print
 *
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file;
	int c;
	ssize_t b_count;

	if (filename == NULL)
		return (0);

	file = fopen(filename, "r");
	if (file == NULL)
		return (0);

	b_count = 0;
	while (letters > 0 && (c = fgetc(file)) != EOF)
	{
		if (write(STDOUT_FILENO, &c, 1) != 1)
		{
			fclose(file);
			return (0);
		}
		letters--;
		b_count++;
	}
	fclose(file);
	return (b_count);
}
