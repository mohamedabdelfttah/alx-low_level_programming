#include "main.h"

void _puts_recursion(char *s)
{
for (int i = 0; s[i] != '\0'; i++)
{
_putchar(s[i]);
}
}
