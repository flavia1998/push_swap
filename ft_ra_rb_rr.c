#include "push_swap.h"

void ra(stacks_t *stacks)
{
    stack_t *keep_stack_a;

    keep_stack_a = stacks->stack_a;

    stacks->stack_a = keep_stack_a->next;
    keep_stack_a->next = NULL;

    stack_t *stack = stacks->stack_a;
    while (stack)
    {
        if (stack->next == NULL)
        {
            stack->next = keep_stack_a;
            break;
        }
        stack = stack->next;
    }
}

void rb (stacks_t *stacks)
{
    stack_t *keep_stack_b;

    keep_stack_b = stacks->stack_b;

    stacks->stack_b = keep_stack_b->next;
    keep_stack_b->next = NULL;

    stack_t *stack = stacks->stack_b;

    while (stack)
    {
       if (stack->next == NULL)
       {
            stack->next = keep_stack_b;
            break;
       }
       stack =stack->next;
    }
}

void rr(stacks_t *stacks)
{
    ra(stacks);
    rb(stacks);
}