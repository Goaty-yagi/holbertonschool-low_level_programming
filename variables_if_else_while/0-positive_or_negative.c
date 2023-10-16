#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/** 
 * main - print a text based on n
 *
 * Return: Always char array (Success)
 */
int main(void)
{
	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	if(n > 0) {
		printf("%i is %s", n, "is positive");
	} else if(n == 0) {
		printf("%i is %s", n, "is zero");
	} else {
		printf("%i is %s", n, "is negative");
	}

	return (0);

}
