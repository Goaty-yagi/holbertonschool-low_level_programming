#include "main.h"
#include <errno.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
/**
 * read_textfile - calls read_textfile
 * @filename: file name
 * @letters: size
 *
 * Return: ssize_t
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, sz;
	ssize_t bytes_written;
	char *c;

	c = malloc(sizeof(char) * letters + 1);
	if (!c)
	{
		return (0);
	}
	fd = open(filename, O_RDWR);
	if (!filename || fd == -1)
	{
		return (0);
	}
	sz = read(fd, c, letters);
	c[sz] = '\0';
	bytes_written = write(1, c, sz);
	if (bytes_written == -1)
	{
		return (0);
	}
	close(fd);
	free(c);
	return (bytes_written);
}
