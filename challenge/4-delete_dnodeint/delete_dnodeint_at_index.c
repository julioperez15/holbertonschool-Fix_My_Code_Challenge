#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Delete a node at a specific index from a list
 *
 * @head: A pointer to the pointer to the first element of a list
 * @index: The index of the node to delete
 *
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *current = *head;
    unsigned int p = 0;

    // If the list is empty, return -1
    if (current == NULL)
    {
        return (-1);
    }

    // Traverse the list to find the node at the given index
    while (current != NULL && p < index)
    {
        current = current->next;
        p++;
    }

    // If the node does not exist, return -1
    if (current == NULL)
    {
        return (-1);
    }

    // If we're deleting the head node
    if (current == *head)
    {
        *head = current->next; // Move head to the next node
        if (*head != NULL)     // If it's not the last node
        {
            (*head)->prev = NULL; // Set the prev pointer of the new head to NULL
        }
    }
    else // Deleting a node somewhere beyond the head
    {
        if (current->prev != NULL)
        {
            current->prev->next = current->next; // Set next of prev to current's next
        }
        if (current->next != NULL)
        {
            current->next->prev = current->prev; // Set the prev of next to current's prev
        }
    }

    // Free the current node
    free(current);
    return (1);
}
