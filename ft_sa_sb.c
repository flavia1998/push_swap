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

void sa_log(t_stacks *stacks, int log)
{
    swap_first_two(&stacks->stack_a);
    if (log == 1)
        write(1, "sa\n", 3);
}

void sb_log(t_stacks *stacks, int log)
{
    swap_first_two(&stacks->stack_b);
    if (log == 1)
        write(1, "sb\n", 3);
}

void sa(t_stacks *stacks)
{
    sa_log(stacks, 1);
}

void sb(t_stacks *stacks)
{
    sb_log(stacks, 1);
}

void ss(t_stacks *stacks)
{
    sa_log(stacks, 0);
    sb_log(stacks, 0);
    write(1, "ss\n", 3);
}