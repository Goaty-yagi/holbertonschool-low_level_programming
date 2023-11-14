#include "3-calc.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int first_int, second_int, result;

	int (*function)(int, int);
	
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	first_int = atoi(argv[1]);

	second_int = atoi(argv[3]);

	function = get_op_func(argv[2]);

	result = 0;

	if (function != 0)
	{
		result = function(first_int, second_int);
	}
	printf("%d", result);
	return (0);
}
