#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - Check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head = NULL;

    // Adding nodes to the list
    for (int i = 0; i <= 8; i += 2) {
        if (add_dnodeint_end(&head, i) == NULL) {
            fprintf(stderr, "Error adding node with value %d\n", i);
            return (EXIT_FAILURE);
        }
    }
    
    // Printing the list
    print_dlistint(head);
    printf("-----------------\n");

    // Deleting nodes at specific indices
    printf("Deleting node at index 5...\n");
    delete_dnodeint_at_index(&head, 5);
    print_dlistint(head);
    printf("-----------------\n");

    // Deleting nodes from the head until empty
    for (int i = 0; i < 8; i++) { // Iterate enough times to potentially empty the list
        printf("Deleting node at index 0...\n");
        delete_dnodeint_at_index(&head, 0);
        print_dlistint(head);
        printf("-----------------\n");
    }

    // Freeing the remaining nodes
    free_dlistint(head);
    return (EXIT_SUCCESS);
}
