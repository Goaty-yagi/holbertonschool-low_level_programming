#include "main.h"
#include <errno.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
/**
 * append_text_to_file - calls append_text_to_file
 * @filename: file name
 * @text_content: contents
 *
 * Return: int
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int len, fd;
	ssize_t bytes_written;

	len = text_content ? strlen(text_content) : 0;
	fd = open(filename, O_RDWR | O_APPEND, S_IRUSR | S_IWUSR);
	if (!filename)
	{
		return (-1);
	}
	if (!text_content)
	{
		close(fd);
		return (1);
	}
	bytes_written = write(fd, text_content, len);
	close(fd);
	if (bytes_written == -1)
	{
		return (-1);
	}
	return (1);
}
