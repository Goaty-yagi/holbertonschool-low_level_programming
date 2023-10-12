#include<stdio.h>
#include <sys.syscall.h>

int main()
{
	char msg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	syscall(SYS_write, 1, msg, sizeof(msg));

	return (1);
