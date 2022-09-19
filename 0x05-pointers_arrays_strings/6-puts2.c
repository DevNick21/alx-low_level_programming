#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void puts2(char *str)
{
int i, j = 0;
while (str[i] != '\0')
{
i++;
}
while (j < i)
{
_putchar(str[j]);
j = j + 2;
}
_putchar('\n');
}
