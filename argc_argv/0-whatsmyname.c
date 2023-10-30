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
	printf("%s\n", argv[argc - 1]);

	return (0);
}
