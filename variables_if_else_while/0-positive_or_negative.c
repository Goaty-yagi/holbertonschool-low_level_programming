#include <stdlib.h>
#include <stdin.h>
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
		printf("%s", "is positive");
	} else if(n == 0) {
		printf("%s","is zero");
	} else {
		printf("%s","is negative");
	}
	
	return (0);
}