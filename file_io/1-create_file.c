#include "main.h"
#include <errno.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
/**
 * create_file - calls create_file
 * @filename: file name
 * @text_content: contents
 *
 * Return: int
 */
int create_file(const char *filename, char *text_content)
{
	int len, fd;
	ssize_t bytes_written;
	char *c;

	len = strlen(text_content);
	c = malloc(sizeof(char) * len + 1);
	c[len] = '\0';
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (!c || !filename)
	{
		return (-1);
	}
	if (!text_content)
	{
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
