#include "main.h"

/**
 * file_from_err - displays error message if can't read file
 * @file: filename
 */
void file_from_err(char *file)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
	exit(ERR_FILE_READ);
}

/**
 * file_to_err - displays error message if can't write to file
 * @file: filename
 */
void file_to_err(char *file)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
	exit(ERR_FILE_WRITE);
}

/**
 * close_file - closes a file and displays error message if file can't close
 * @fd: file descriptor
 */
void close_file(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(ERR_FILE_CLOSE);
	}
}

/**
 * main - copies the content of a file to another file
 * @argc: count of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int file_from, file_to;
	char ch;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(ERR_USAGE);
	}
	if (argv[1] == NULL)
		file_from_err(argv[1]);
	if (argv[2] == NULL)
		file_to_err(argv[2]);
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		file_from_err(argv[1]);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0644);
	if (file_to == -1)
		file_to_err(argv[2]);

	while (read(file_from, &ch, 1) == 1)
	{
		if (write(file_to, &ch, 1) != 1)
			file_to_err(argv[2]);
	}

	close_file(file_from);
	close_file(file_to);
	return (0);
}
