#include "lists.h"

/**
 * list_len - prints the number of elements
 * @h: pointer to the head of the list
 *
 * Return: the number of nodes
 */
size_t list_len(const list_t *h)
{
size_t count = 0;
while (h != NULL)
{
if (h->str == NULL)
printf("[0] (nil)\n");
else
h = h->next;
count++;
}
return (count);
}
