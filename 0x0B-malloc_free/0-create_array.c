#include "main.h"

/**
 *create_array - array for prints a string
 *@size: number elements array
 *@c: char
 *Return: pointer
 */

char *create_array(unsigned int size, char c)
{
unsigned int i;
char *arr;

if (size == 0)
return (NULL);

/*Define values with malloc*/
arr = (char *)malloc(size * sizeof(char));

if (arr == NULL)
return (NULL);

for (i = 0; i < size; i++)
{
arr[i] = c;
}
return (arr);
}
