#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: The number of arguments passed to the program
 * @argv: An array containing the arguments passed to the program
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
int x;

if (argc != 4)
{
printf("Error\n");
exit(98);
}

x = (*get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3]));
printf("%d\n", x);

return (0);
}
