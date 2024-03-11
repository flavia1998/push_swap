#include "push_swap.h"

void swap_first_two(stack_t **head)
{
    if (*head == NULL || (*head)->next == NULL)
        return;

    stack_t *first = *head;
    stack_t *second = (*head)->next;
    stack_t *third = second->next;

    first->next = third;
    second->next = first;

    if (!third)
    {
        first->next = NULL;
    }
    *head = second;
}

void sa(stacks_t *stacks)
{
    swap_first_two(&stacks->stack_a);
}

void sb(stacks_t *stacks)
{
    swap_first_two(&stacks->stack_b);
}

void ss(stacks_t *stacks)
{
    sa(stacks);
    sb(stacks);
}