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

	printf("Size of a char:%zu", sizeof(charType));

	printf("Size of a int:%zu", sizeof(intType));

	printf("Size of a long int:%zu", sizeof(intType));

	printf("Size of a long long int:%zu", sizeof(longLongIntType));

	printf("Size of a float:%zu", sizeof(floatType));

	return (0);


}
