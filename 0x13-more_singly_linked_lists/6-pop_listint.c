#include "lists.h"

/**
 * pop_listint - function that deletes the head node
 * @head: the head pointer
 * Return: the head node’s data (n).
 */

int pop_listint(listint_t **head)
{
int data;
listint_t *temp;

if (*head == NULL)
return (0);

temp = *head;
data = temp->n;
*head = temp->next;
free(temp);

return (data);
}
