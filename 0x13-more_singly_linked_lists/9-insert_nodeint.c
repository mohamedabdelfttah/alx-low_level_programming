#include "lists.h"

/**
 * insert_nodeint_at_index - function inserts a new node at a given position.
 * @head: The head pointer
 * @idx: is the index of the list where the new node should be added.
 * @n: The index data
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i;
listint_t *newNode, *current;
newNode = malloc(sizeof(listint_t));

if (!newNode)
return (NULL);

newNode->n = n;
newNode->next = NULL;

if (idx == 0)
{
newNode->next = *head;
*head = newNode;
return (newNode);
}

current = *head;
for (i = 0; current != NULL && i < idx - 1; i++)
current = current->next;

if (i == idx - 1)
{
newNode->next = current->next;
current->next = newNode;
return (newNode);
}
else
{
free(newNode);
return (NULL);
}
}
