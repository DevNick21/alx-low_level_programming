#include "main.h"
#include "_putchar.c"
/* Prints _putchar
*/
int main(void)
{
char put[] = "_putchar";
for (int i = 0; i < 9; i++)
{
_putchar(put[i]);
}
_putchar('\n');

return 0;
}