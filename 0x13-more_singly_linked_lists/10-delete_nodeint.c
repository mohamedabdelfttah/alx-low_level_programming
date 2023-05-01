#include "lists.h"

/**
 * delete_nodeint_at_index - function deletes the node at index of a listint_t
 * @head: the head pointer
 * @index: the index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int i;
listint_t *current, *temp;
if (*head == NULL)
return (-1);

current = *head;

if (index == 0)
{
*head = current->next;
free(current);
return (1);
}
for (i = 0; current != NULL && i < index - 1; i++)
current = current->next;

if (current == NULL || current->next == NULL)
return (-1);

temp = current->next->next;
free(current->next);
current->next = temp;
return (1);
}
