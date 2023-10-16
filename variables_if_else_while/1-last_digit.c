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

	lastDigit = n % 10;

	if (lastDigit > 5)
	{
		printf("%s %d %s %d %s\n", text, n, "is", lastDigit, gFive);
	} else if (lastDigit < 6)
	{
		printf("%s %d %s %d %s\n", text, n, "is", lastDigit, lSix);
	} else
	{
		printf("%s %d %s %d %s\n", text, n, "is", lastDigit, "and is 0");
	}

	return (0);
}
