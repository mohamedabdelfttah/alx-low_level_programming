Linked List Functions
This repository contains C functions for working with singly linked lists of the list_t type.

Data Structures
The list_t structure is defined as follows:

typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;
Each node in the list contains a string (str), the length of the string (len), and a pointer to the next node in the list (next).

Functions
add_node
list_t *add_node(list_t **head, const char *str);
This function adds a new node at the beginning of a list_t list. It takes as input a pointer to the head of the list (head) and a string (str) to be added to the new node.

The function returns the address of the new element, or NULL if it failed. The string str is duplicated using strdup.

add_node_end
list_t *add_node_end(list_t **head, const char *str);
This function adds a new node at the end of a list_t list. It takes as input a pointer to the head of the list (head) and a string (str) to be added to the new node.

The function returns the address of the new element, or NULL if it failed. The string str is duplicated using strdup.

free_list
void free_list(list_t *head);
This function frees a list_t list. It takes as input a pointer to the head of the list (head) and frees each node and its associated string until the entire list is freed.
