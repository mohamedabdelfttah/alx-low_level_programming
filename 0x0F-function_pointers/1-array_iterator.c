#include "function_pointers.h"

/**
 * array_iterator - executes funct
 * @array: array of elements
 * @size: array's size
 * @action: pointer to function
 * Return: No
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
if (array && size && action)
{

for (i = 0; i < size; i++)
{
(*action)(array[i]);
}

}

}
