#include "lists.h"
/**
 * get_nodeint_at_index - function that returns the nth node of a listint_t.
 * @head: the head pointer
 * @index: is the index of the node
 * Return: returns the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i;

for (i = 0; head != NULL; i++)
{
if (i == index)
return (head);
head = head->next;
}

return (NULL);
}
