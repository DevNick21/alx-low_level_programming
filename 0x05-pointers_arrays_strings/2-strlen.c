#include "main.h"
#include <stdio.h>
/**
*main - check the code
*
*Return: Always 0.
*/
int _strlen(char *s){
int l = 0;
while (*s != '\0')
{
s++;
l++;
}
return (l);
}
