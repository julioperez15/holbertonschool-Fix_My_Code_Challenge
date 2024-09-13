#ifndef _LISTS_H_
#define _LISTS_H_

#include <stddef.h>

/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: Doubly linked list node structure for a project.
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;

/**
 * print_dlistint - Prints all the elements of a doubly linked list.
 * @h: Pointer to the head of the list.
 * 
 * Return: The number of nodes.
 */
size_t print_dlistint(const dlistint_t *h);

/**
 * add_dnodeint_end - Adds a new node at the end of the list.
 * @head: Double pointer to the head of the list.
 * @n: Integer value for the new node.
 * 
 * Return: Pointer to the new node, or NULL on failure.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);

/**
 * delete_dnodeint_at_index - Deletes the node at a specific index.
 * @head: Double pointer to the head of the list.
 * @index: The index of the node to delete.
 * 
 * Return: 1 on success, -1 on failure.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);

/**
 * free_dlistint - Frees a list.
 * @head: Pointer to the first element of the list.
 */
void free_dlistint(dlistint_t *head);

#endif
