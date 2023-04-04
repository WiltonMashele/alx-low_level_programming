#ifndef STDLIB_H
#define STDLIB_H
#include <stdlib.h>
#endif

#ifndef _LISTS_H
#define _LISTS_H

/**
*
* struct listint_s - Singly linked list
* @n: Integer data
* @next: Points to the next node
* Description: This structure defines a node in a singly linked list.
* It contains an integer data and a pointer to the next node in the list.
*/
typedef struct listint_s
{
int n;
struct listint_s *next;
} listint_t;

/* Function prototypes for singly linked list with integer data */
size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
listint_t *add_nodeint_end(listint_t **head, const int n);
void free_listint(listint_t *head);
void free_listint2(listint_t **head);
int pop_listint(listint_t **head);
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
int sum_listint(listint_t *head);
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
int delete_nodeint_at_index(listint_t **head, unsigned int index);
listint_t *reverse_listint(listint_t **head);
size_t print_listint_safe(const listint_t *head);

#endif
