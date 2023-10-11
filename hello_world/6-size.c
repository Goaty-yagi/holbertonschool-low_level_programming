#include <stdio.h>

/**
 * main - print the size of various types
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char charType;

	int intType;

	long long int longLongIntType;

	float floatType;

	printf("Size of a char: %zu\n", sizeof(charType));

	printf("Size of a int: %zu\n", sizeof(intType));

	printf("Size of a long int: %zu\n", sizeof(intType));

	printf("Size of a long long int: %zu\n", sizeof(longLongIntType));

	printf("Size of a float: %zu\n", sizeof(floatType));

	return (0);


}
