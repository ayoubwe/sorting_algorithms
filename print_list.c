#include <stdio.h>
#include "sort.h"

/**
 * print_list -prints the list of integers
 * @list: list to printe
 */
void print_list(const listint_t *list)
{
    int i;

    i = 0;
    while (list)
    {
        if (i > 0)
            printf(", ");
        printf("%d", list->n);
        ++i;
        list = list->next;
    }
    printf("\n");
}

