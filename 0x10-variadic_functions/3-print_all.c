#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 *print_all - prints any type
 *@format: arguments to print
 */

void print_all(const char * const format, ...)
{
int i = 0;
char *str;
char *separator = "";

va_list args;
va_start(args, format);

while (format[i])
{
switch (format[i])
{
case 'c':
printf("%s%c", separator, va_arg(args, int));
separator = ", ";
break;
case 'i':
printf("%s%d", separator, va_arg(args, int));
separator = ", ";
break;
case 'f':
printf("%s%f", separator, va_arg(args, double));
separator = ", ";
break;
case 's':
str = va_arg(args, char *);
if (str != NULL)
{
printf("%s%s", separator, str);
separator = ", ";
break;
}
printf("%s(nil)", separator);
break;
}
i++;
}
printf("\n");
va_end(args);
}
