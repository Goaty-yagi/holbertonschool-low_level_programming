#include "main.h"
/**
 * main - check the code
 * @ac: ac
 * @av: av
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int fd_from, fd_to, br, bytes_written, BUFFER_SIZE = 1024;
	char *buffer, *s = "Error: Can't read from file %s\n", cl = "Error: Can't close fd ";

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = malloc(BUFFER_SIZE);
	fd_from = open(av[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, s, av[1]);
		exit(98);
	}
	fd_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	br = read(fd_from, buffer, BUFFER_SIZE);
	while (br > 0)
	{
		bytes_written = write(fd_to, buffer, br);
		if (bytes_written != br)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
		br = read(fd_from, buffer, BUFFER_SIZE);
	}
	if (close(fd_from) == -1 || close(fd_to) == -1 || br == -1)
	{
		dprintf(STDERR_FILENO, br == -1 ? s : cl, br == -1 ? av[1] : '\0');
		exit(br == -1 ? 98 : 100);
	}
	return (0);
}
