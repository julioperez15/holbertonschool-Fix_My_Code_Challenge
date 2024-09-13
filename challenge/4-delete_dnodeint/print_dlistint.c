#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - Prints a doubly linked list of integers
 *
 * @h: A pointer to the first element of a list
 *
 * Return: The number of elements printed
 */
size_t print_dlistint(const dlistint_t *h)
{
    size_t n = 0;  // Initialize count of printed elements
    
    // Traverse the list
    while (h)
    {
        printf("%d\n", h->n);
        h = h->next;  // Move to the next node
        n++;          // Increment the count
    }
    return n;  // Return the count of printed elements
}
