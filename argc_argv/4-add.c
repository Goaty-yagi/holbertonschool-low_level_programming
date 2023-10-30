#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * check - Print check
 * @ch: char array
 *
 * Return: int
 */
int check(char *ch)
{
	char *p = ch;
	int error;
	error = 0;
	while (*p)
	{
		if (*p >= 48 && *p <= 57)
		{
			p++;
		}
		else
		{
			error = 1;
			break;
		}
	}
	return (error);
}
/**
 * main - Print text
 * @argc: int
 * @argv: char array pointer
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i, t, result, error;

	i = 1;

	result = error = 0;
	 
	if (!argv[1])
	{
		i = argc;
	}
	while (i < argc)
	{
		error = check(argv[i]);
		if (!error)
		{
			t = strtol(argv[i], NULL, 10);
			result = result + t;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		i = i + 1;
		error = 0;
	}
	printf("%d\n", result);
	return (0);
}
