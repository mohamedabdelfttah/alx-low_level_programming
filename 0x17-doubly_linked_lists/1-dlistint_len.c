#include "lists.h"
/**
 * dlistint_len -  returns the number of elements in a linked list.
 * @h: a poiinter to the head
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
size_t num = 0;
while (h != NULL)
{
h = h->next;
num++;
}
return (num);
}
