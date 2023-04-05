#include "main.h"

 /**
 * _print_rev_recursion - prints a reverse string, followed by a new line
 * @s: pointer to the string
 * Return: void
 */
void _print_rev_recursion(char *s)
{

if (*s == '\0')
{
_putchar('\n');
}
else
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
