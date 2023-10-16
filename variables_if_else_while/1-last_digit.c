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
	
	srand(time(0));
	
	n = rand() - RAND_MAX / 2;

	lastDegit = n % 10;

	char text[] = "Last digit of";

	if (n > 5)
	{
		printf("%s %d %s\n", text, n, "and is greater than 5");
	} else if (n == 0)
	{
		printf("%s %d %s\n", test, n, "and is 0");
	} else
	{
		printf("%s %d %s\n", test, n, "and is less than 6 and not 0");
	}

	return (0);
}
