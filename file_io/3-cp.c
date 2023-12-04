#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
    int sz, file_from, file_to, bytes_written, buf_size;
    char *c;
    if (ac != 3)
    {
        dprintf(2, "Usage: cp file_from file_to\n");
        exit(97);
    }
    if (!av[1])
    {
        dprintf(2, "Error: Can't read from file %s\n", av[1]);
        exit(98);
    }
    file_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 664);
    file_from = open(av[1], O_RDONLY | O_CREAT | O_TRUNC, 664);
    buf_size = 1024;
    c = malloc(buf_size);
    if (!c)
    {
        return (1);
    }
    while ((sz = read(file_from, c, buf_size)) > 0)
    {
        bytes_written = write(file_to, c, sz);
        if (bytes_written != sz)
        {
            dprintf(2, "Error: Can't write to %s\n", av[2]);
            exit(99);
        }
    }
    if (close(file_to) == -1)
    {
        dprintf(2, "Error: Can't close %d\n", file_to);
        exit(100);
    }
    if (close(file_from) == -1)
    {
        dprintf(2, "Error: Can't close %d\n", file_from);
        exit(100);
    }
    return (0);
}
