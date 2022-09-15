#include "main.h"
#include <stdio.h>

/**
 * print_numbers - Prints numbers 1-10.
 * Return: Always 0.
 */
void print_numbers(void)
{
int i;
for (i = 0; i < 10; i++)
{
_putchar(i + '0');
}
_putchar('\n');
return (0);
}
