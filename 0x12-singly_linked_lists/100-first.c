#include <stdio.h>
/**
 * premain - function executed before main
 * Return: no return.
 */

void __attribute__ ((constructor)) premain()
{
printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
