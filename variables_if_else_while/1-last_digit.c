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

	char text[] = "Last digit of";

	char gFive[] = "and is greater than 5";

	char lSix[] = "and is less than 6 and not 0";

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	lastDegit = n % 10;

	if (n == false)
	{
		printf("%s %d %s %d %s\n", text, n, "is", lastDegit, "and is 0");
	} else if (n > 5)
	{
		printf("%s %d %s %d %s\n", text, n, "is", lastDegit, gFive);
	} else
	{
		printf("%s %d %s %d %s\n", text, n, "is", lastDegit, lSix);
	}

	return (0);
}
