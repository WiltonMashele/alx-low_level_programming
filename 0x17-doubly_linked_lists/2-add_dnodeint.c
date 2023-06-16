#include "lists.h"

/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 *
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;

/**
 * dlistint_t *add_dnodeint(dlistint_t **head, const int n); - adds
 * a new node at the beginning of a dlistint_t list.
 *
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n);
{
	struct node* temp = malloc(sizeof(dlistint_t));
	temp->prev = NULL;
	temp->data = data;
	temp->next = NULL;
	temp->next = head head->prev = temp;
	head = temp;
	return(head);
}
