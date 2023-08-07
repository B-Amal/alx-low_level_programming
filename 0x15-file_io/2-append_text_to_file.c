#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: file to append to
 * @text_content: a NULL terminated string to append to the file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, len = 0;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);
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
