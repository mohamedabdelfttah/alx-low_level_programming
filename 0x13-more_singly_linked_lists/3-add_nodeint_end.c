#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at the end
 * @head: The head pointer
 * @n: The data recive
 * Return: newnode
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *newNode, *last;
newNode = malloc(sizeof(listint_t));

if (!newNode)
return (NULL);

newNode->n = n;
newNode->next = NULL;

if (*head == NULL)
*head = newNode;
else
{
last = *head;
while (last->next != NULL)
last = last->next;

last->next = newNode;
return (newNode);
}
}
