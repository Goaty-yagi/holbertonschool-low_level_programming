nclude <stdio.h>

/**
 * main - Print text
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

	char n;

	for (n = 0; n <= 18; ++n)
	{
		if (n <= 10)
		{
			putchar(n);
		}
		else
		{
			putchar(n + 87);
		}
	};
	
	putchar('\n');

	return (0);

}
