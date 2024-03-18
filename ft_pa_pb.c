#include "push_swap.h"

void pa(t_stacks *stacks)
{
    t_stack *stack_b_next;

    if (stacks->stack_b == NULL)
    {
        return;
    }

    stack_b_next = stacks->stack_b->next;
    stacks->stack_b->next = stacks->stack_a;
    stacks->stack_a = stacks->stack_b;

    stacks->stack_b = stack_b_next;
    write(1, "pa\n", 3);
}

void pb(t_stacks *stacks)
{
    t_stack *stack_a_next;

    if (stacks->stack_a == NULL)
    {
        return;
    }

    stack_a_next = stacks->stack_a->next;
    stacks->stack_a->next = stacks->stack_b;
    stacks->stack_b = stacks->stack_a;

    stacks->stack_a = stack_a_next;
    write(1, "pb\n", 3);
}