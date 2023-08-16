#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - This is the singly linked list function
 * @n: this is the integer
 * @next: this points to the next node
 *
 * Description: This is the singly linked list node structure
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

listint_t *add_nodeint_end(listint_t **head, const int n);
size_t print_listint(const listint_t *h);
int is_palindrome(listint_t **head);
void free_listint(listint_t *head);

#endif
