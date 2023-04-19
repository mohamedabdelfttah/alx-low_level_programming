#include "function_pointers.h"

/**
 *print_name - function takes in two arguments
 *@name:a char pointer name
 *@f:a function pointer takes a char pointer as an argument
 */

void print_name(char *name, void (*f)(char *))
{
f(name);
}
/**
 *print - function contains a loop that iterates over each character
 *@str: a char pointer
 */

void print(char *str)
{
while (*str)
_putchar(*str++);
}
