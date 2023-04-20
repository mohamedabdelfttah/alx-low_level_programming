#include "variadic_functions.h"

/**
 * print_numbers - a function that prints strings
 * @separator: separator numbers
 * @n: int, number of undefined arguments
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list l;
unsigned int i;

va_start(l, n);

for (i = 0; i < n; i++)
{
printf("%i", va_arg(l, int));
if (i != n - 1 && separator != NULL)
printf("%s", separator);
}
va_end(l);

putchar('\n');
}
