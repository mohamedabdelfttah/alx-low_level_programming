#include "lists.h"
/**
 * add_nodeint - function that adds a new node
 * @head: The header pointer
 * @n: The data
 * Return: newnode
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *newNode;
newNode = malloc(sizeof(listint_t));

if (!newNode)
return (NULL);

newNode->n = n;
newNode->next = *head;
*head = newNode;

return (newNode);
}
