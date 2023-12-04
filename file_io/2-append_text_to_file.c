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
	char *c;

	printf("IN FUNC");
	len = text_content ? strlen(text_content) : 0;
	c = malloc(len + 1);
	c[len] = '\0';
	fd = open(filename, O_RDWR | O_APPEND , S_IRUSR | S_IWUSR);
	if (!c || !filename)
	{
		return (-1);
	}
	if (!text_content)
	{
		close(fd);
		free(c);
		return (1);
	}
	bytes_written = write(fd, text_content, len);
	if (bytes_written == -1)
	{
		close(fd);
		free(c);
		return (-1);
	}
	close(fd);
	free(c);
	return (1);
}
