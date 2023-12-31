#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>

/**
 * struct listint_s - This is the singly linked list
 * @n: this point to the integer
 * @next: this function will point to the next node
 *
 * Description: This is a singly linked list node structure
 *
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

listint_t *add_nodeint_end(listint_t **head, const int n);
size_t print_listint(const listint_t *h);
listint_t *insert_node(listint_t **head, int number);
void free_listint(listint_t *head);

#endif
