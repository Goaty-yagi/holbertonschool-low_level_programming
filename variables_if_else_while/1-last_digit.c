#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - print a text based on n
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n, lastDegit;

	char text[] = "Last degit of";
	
	srand(time(0));
	
	n = rand() - RAND_MAX / 2;

	lastDegit = n % 10;

	if (n > 5)
	{
		printf("%s %d %s %d %s\n", text, n, "is", lastDegit, "and is greater than 5");
	} else if (n == 0)
	{
		printf("%s %d %s %d %s\n", text, n, "is", lastDegit, "and is 0");
	} else
	{
		printf("%s %d %s %d %s\n", text, n, "is", lastDegit, "and is less than 6 and not 0");
	}

	return (0);
}
