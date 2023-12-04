#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void pprint_array(int *a, int n)
{
    int i;

    i = 0;
    while (i < n)
    {
        if (i != 0)
        {
            printf(", ");
        }
        printf("%d", a[i]);
        i++;
    }
    printf("\n");
}

void simple_print_buffer(char *buffer, unsigned int size)
{
        unsigned int i;

        i = 0;
        while (i < size)
        {
                if (i % 10)
                {
                        printf(" ");
                }
                if (!(i % 10) && i)
                {
                        printf("\n");
                }
                printf("0x%02x", buffer[i]);
                i++;
        }
        printf("\n");
}

int print(int nb)
{
        printf("CHECK:%d\n", nb);
    if (nb < 0) 
    {
        printf("MINUS_RETURN:%d\n", nb);
        return (0);
    }
    printf("%d", nb + print(nb - 1));
    nb --;
    printf("BEFOR:%d\n", nb);
    return (nb);
}

int main(void)
{
    print(4);
    return (0);
}
