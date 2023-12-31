#include <stdio.h>
#include <stdlib.h>

/**
 * main - Print text
 * @argc: int
 * @argv: char array pointer
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int f, s;

	(void)argc;

	if (!argv[1] || !argv[2])
	{
		printf("Error\n");
		return (1);
	}

	f = strtol(argv[1], NULL, 10);

	s = strtol(argv[2], NULL, 10);

	printf("%d\n", f * s);
	return (0);
}
