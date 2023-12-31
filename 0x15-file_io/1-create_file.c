#include "main.h"

/**
 * create_file - creates a file with a given content
 * @filename: file to create
 * @text_content: a NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file, len = 0;
	mode_t mode = S_IRUSR | S_IWUSR;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, mode);
	if (file == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;
		write(file, text_content, len);
	}
	close(file);
	return (1);
}
