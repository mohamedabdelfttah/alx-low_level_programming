#include "main.h"
#include <stdlib.h>

int main(void)
{
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *arr;

if (size == 0)
return (NULL);

arr =(char *)malloc(size * sizeof(char));

if (arr == NULL)
return (NULL);

for (i = 0; i < size; i++)
{
 arr[i] = c;
}
return (arr);
}
