#include <unistd.h> 
#include <sys/syscall.h>
#include<stdio.h>

/**
 * main - print without printf and other c built-in-functions
 *
 * Return: Always 1 (Success)
 */

int main(void)
{
	char msg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	syscall(SYS_write, 0, msg, sizeof(msg));

	return (1);

}
