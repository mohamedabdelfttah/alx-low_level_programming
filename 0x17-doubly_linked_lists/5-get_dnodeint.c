#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a linked list.
 * @head: a poiinter to the head
 * @index: the index of th node
 * Return: the nth node of a linked list
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int i = 0;

while (head != NULL)
{
if (i == index)
return (head);
head = head->next;
i++;
}
return (NULL);
}
