#include "main.h"

/**
 * print_line - check for a digit
 * @n : number of _ to be printed
 * Return:void
 */
void print_line(int n)
{
int x;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (x = 0; x < n; x++)
{
_putchar(95);
}
_putchar('\n');
}
}
