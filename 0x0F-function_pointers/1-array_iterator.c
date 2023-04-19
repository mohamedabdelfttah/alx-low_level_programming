#include "function_pointers.h"
/**
 *array_iterator -  function takes an array of integers
 *@size:size of array
 *@action:is a pointer to the function you need to use
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
for (i = 0; i < size; i++)
{
(*action)(array[i]);
}
}
