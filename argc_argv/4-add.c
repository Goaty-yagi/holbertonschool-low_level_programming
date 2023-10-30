#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Print text
 * @argc: int
 * @argv: char array pointer
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i, t, result;

	i = 1;

	result = 0;
	if (!argv[1])
	{
		i = argc;
	}
	while (i < argc)
	{
		t = strtol(argv[i], NULL, 10);
		if (t)
		{
			result = result + t;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		i = i + 1;
	}
	printf("%d\n", result);
	return (0);
}
