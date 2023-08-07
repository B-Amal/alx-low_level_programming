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
 * close_err - displays error message if file can't close
 * @fd: file descriptor
 */
void close_err(int fd)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	exit(ERR_FILE_CLOSE);
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

	int file_from, file_to, file_from_rd, file_to_wr;
	char buffer[BUFFER_SIZE];
	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

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
	if (file_from == ERR_FILE)
		file_from_err(argv[1]);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, mode);
	if (file_to == ERR_FILE)
		file_to_err(argv[2]);

	file_from_rd = read(file_from, buffer, BUFFER_SIZE);
	if (file_from_rd == ERR_FILE)
		file_from_err(argv[1]);
	while (file_from_rd > 0)
	{
		file_to_wr = write(file_to, buffer, file_from_rd);
		if (file_to_wr != file_from_rd)
			file_to_err(argv[2]);
		file_from_rd = read(file_from, buffer, BUFFER_SIZE);
		if (file_from_rd == ERR_FILE)
			file_from_err(argv[1]);
	}

	if (close(file_from) == ERR_FILE)
		close_err(file_from);
	if (close(file_to) == ERR_FILE)
		close_err(file_to);
	return (0);
}
