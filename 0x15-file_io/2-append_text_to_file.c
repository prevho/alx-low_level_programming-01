#include "main.h"

/**
 * append_text_to_file - append text to a file
 * @filename: file name
 * @text_content: content to put in the file
 *
 * Return: 1 for success or -1 if it fails
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i = 0, retval = 1;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (!text_content)
	{
		close(fd);
		return (1);
	}
	while (text_content[i])
		i++;
	retval = write(fd, text_content, i);
	close(fd);
	if (retval == -1)
		return (-1);
	return (1);
}
