#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: pointer to the head of the list
 * Return: no return
 */
void free_list(list_t *head)
{
list_t *temp;

while ((temp = head) != NULL)
{
head = head->next;
free(temp->str);
free(temp);
}
}
