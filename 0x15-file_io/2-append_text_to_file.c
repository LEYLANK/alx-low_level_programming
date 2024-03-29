#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: NULL terminated string to add at the end of the file
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t fd, i = 0, w;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (i = 0; text_content[i];)
			i++;
	}
	fd = open(filename, O_RDWR | O_CREAT | O_APPEND);
	w = write(fd, text_content, i);

	if (fd == -1 || w == -1)
		return (-1);

	close(fd);
	return (1);
}
