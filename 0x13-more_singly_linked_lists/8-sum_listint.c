#include "lists.h"

/**
 * sum_listint - a function that returns the sum of all the data (n)
 * @head: the head pointer
 * Return: the sum of all the data (n) of a listint_t
 */

int sum_listint(listint_t *head)
{
int sum = 0;

listint_t *current = head;
if (head == NULL)
return (0);
while (current != NULL)
{
sum += current->n;
current = current->next;
}
return (sum);
}
