#include <stdio.h>

/**
 * main - Print text
 * @argc: int
 * @argv: char array pointer
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i;

	i = 0;
	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i = i + 1;
	}

	return (0);
}
