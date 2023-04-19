#include "function_pointers.h"
/**
 *int_index - function returns the index of the first element
 *@array:array
 *@size:size of array
 *@cmp: is a pointer to the function to be used to compare values
 *Return:the index of the first element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (size <= 0)
return (-1);

for (i = 0; i < size; i++)
{
if ((*cmp)(array[i]) != 0)
return (i);
}
return (-1);
}
