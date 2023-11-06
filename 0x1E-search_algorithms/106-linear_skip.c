#include "search_algos.h"

/**
 * linear_skip - Searches for an algorithm in a sorted singly
 *               linked list of integers using linear skip.
 * @list: A pointer to the head of the linked list to search.
 * @value: The value to search for.
 *
 * Return: If the value is not present or the head of the list is NULL, NULL.
 *         Otherwise, a pointer to the first node where the value is located.
 *
 * Description: Prints a value every time it is compared in the list.
 *              Uses the square root of the list size as the jump step.
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
    skiplist_t *node, *jump;

    if (list == NULL)
        return (NULL);

    for (node = jump = list; jump->express != NULL;)
    {
        printf("Value checked at index [%ld] = [%d]\n",
               jump->index, jump->n);
        if (jump->n >= value)
        {
            printf("Value found between indexes [%ld] and [%ld]\n",
                   node->index, jump->index);
            break;
        }
        node = jump;
        jump = jump->express;
    }

    if (jump->express == NULL)
    {
        printf("Value found between indexes [%ld] and [%ld]\n",
               node->index, jump->index);
        while (jump->next != NULL)
        {
            printf("Value checked at index [%ld] = [%d]\n",
                   jump->index, jump->n);
            if (jump->n == value)
                return (jump);
            jump = jump->next;
        }
    }

    while (node->index < jump->index && node->n < value)
    {
        printf("Value checked at index [%ld] = [%d]\n",
               node->index, node->n);
        node = node->next;
    }

    printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);

    return (node->n == value ? node : NULL);
}
